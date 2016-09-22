#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QMessageBox>
#include <QFile>
#include <QTimer>

#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);

    loadSubjects();

    m_tcpConnection = NULL;
    ui->spinBoxIteration->setMaximum(ui->spinBoxRepeated->value());

    connect(&m_tcpServer, SIGNAL(newConnection()), this, SLOT(slotAcceptConnection()));
    m_tcpServer.listen(QHostAddress::AnyIPv4, ui->spinBoxPort->value());

    connect(ui->spinBoxRepeated, SIGNAL(valueChanged(int)), this, SLOT(slotUpdateIteration()));

    connect(ui->pushButtonA_1, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonB_2, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonC_3, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonD_4, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonE_5, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonF_6, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonG_7, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonH_8, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonI_9, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonJ_10, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonK_11, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonL_12, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonM_13, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonN_14, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonO_15, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonP_16, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonQ_17, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonR_18, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonS_19, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonT_20, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonU_21, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonV_22, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonW_23, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonX_24, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonY_25, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonZ_26, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
    connect(ui->pushButtonHome_27, SIGNAL(clicked()), this , SLOT(slotPushButtonSender()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadSubjects()
{
    // Temp. Disable
    ui->comboBoxSubject->setEnabled(false);

    ui->comboBoxSubject->addItem(QString("S001"));
    ui->comboBoxSubject->addItem(QString("S002"));
    ui->comboBoxSubject->addItem(QString("S003"));
    ui->comboBoxSubject->addItem(QString("S004"));
    ui->comboBoxSubject->addItem(QString("S005"));
    ui->comboBoxSubject->addItem(QString("S006"));
    ui->comboBoxSubject->addItem(QString("S007"));
    ui->comboBoxSubject->addItem(QString("S008"));
    ui->comboBoxSubject->addItem(QString("S009"));
    ui->comboBoxSubject->addItem(QString("S010"));

    readFile("S001");
}

void MainWindow::readFile(QString fileName)
{
    int w = ui->spinBoxPoint->value();
    int repeated = ui->spinBoxRepeated->value();

    fileName.append(".csv");

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Warning!"), tr("Could not read the csv file!"));
    }
    QTextStream stream(&file);

    Data d;
    m_subjectData.append(d); // add empy data to start index from 1
    QStringList data;
    int i = 0;
    int classCount = 0;
    while (!stream.atEnd()){
        i++;
        QString s = stream.readLine(); // reads line from file
        data.append(s);

        if(i==w*repeated) {
            classCount++;
            Data d;
            d.letterID = classCount;
            d.data = data;
            m_subjectData.append(d);
            i = 0;
            data.clear();
        }
    }
    file.close();
}

void MainWindow::sendData(int classID)
{
    Data d = m_subjectData.at(classID);

    int w = ui->spinBoxPoint->value();

    m_buffer.clear();
    int iter = ui->spinBoxIteration->value()-1;

    if(d.data.size() < iter*w + w ) {
        QApplication::restoreOverrideCursor();
        QMessageBox::information(this, tr("Info"), tr("Iteration is too high!"));
        ui->spinBoxIteration->setFocus();
        return;
    }

    for (int i = 0; i < w; ++i) {
        m_buffer.append(d.data.at(iter*w + i));
    }

    cout << "Buffer size :" << m_buffer.size() << endl;

    connect(&m_timer, SIGNAL(timeout()), this , SLOT(slotWriteSocket()), Qt::UniqueConnection);
    m_timer.setInterval(ui->spinBoxInteval->value());
    m_timer.start();
}

void MainWindow::slotWriteSocket()
{
    static int count = 0;
    if(m_tcpConnection) {
        QString data;
        for (int i = 0; i < 50; ++i) {
            data.append(m_buffer.at(count*50 + i));
            data.append(", ");
        }
        count++;

        QByteArray byteArray;
        byteArray.append(data);
        byteArray.append("\n");

        m_tcpConnection->write(byteArray);
        m_tcpConnection->flush();

        cout << "Count " << count << "size buffer" << byteArray.size() << endl;
        if(count == ui->spinBoxCH->value()) {
            count = 0;
            m_timer.stop();
            QApplication::restoreOverrideCursor();
        }
    } else {
        m_timer.stop();
        count = 0;
        QApplication::restoreOverrideCursor();
        QMessageBox::information(this, tr("Info"), tr("Keyboard does not have any connection!!!"));
    }
}

void MainWindow::slotUpdateIteration()
{
    ui->spinBoxIteration->setMaximum(ui->spinBoxRepeated->value());
}

void MainWindow::slotPushButtonSender()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());

    if(!button)
        return;

    QApplication::setOverrideCursor(Qt::WaitCursor);
    int classId = button->objectName().split("_").at(1).toInt();
    qDebug() << "Class ID : " << classId;
    sendData(classId);
}

void MainWindow::slotAcceptConnection()
{
    m_tcpConnection = m_tcpServer.nextPendingConnection();
    qDebug() << "Got a new Connection" ;
}

void MainWindow::on_comboBoxSubject_activated(const QString &arg1)
{
    qDebug() << arg1;
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, tr("About"), tr("This application generate fake EMG data\n"
                                                   "that previously saved. And send this data based on\n"
                                                   "button pressed.\n"
                                                   "please contact c.savur@gmail.com"));
}

void MainWindow::on_spinBoxPort_editingFinished()
{
    m_tcpServer.close();
    m_tcpServer.listen(QHostAddress::AnyIPv4, ui->spinBoxPort->value());
}
