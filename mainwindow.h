#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    struct Data {
        int letterID; // A
        QStringList data;  // 20*400x8)
    };

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void loadSubjects();
    void readFile(QString fileName);
    void sendData(int classID);

private slots:
    void slotPushButtonSender();
    void slotWriteSocket();
    void slotUpdateIteration();

    void on_comboBoxSubject_activated(const QString &arg1);
    void on_actionAbout_Qt_triggered();
    void on_actionAbout_triggered();

    void on_pushButtonConnect_clicked(bool checked);

private:
    Ui::MainWindow *ui;

    QList<Data> m_subjectData;

    QTcpServer m_tcpServer;
    QTcpSocket *m_socket;

    QTimer m_timer;
    QStringList m_buffer;
};

#endif // MAINWINDOW_H
