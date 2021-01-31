#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>             //定时器相关库
#include <QMovie>
#include <QSerialPort>        //提供访问串口的功能
#include <QSerialPortInfo>    //提供系统中存在的串口的信息
#include <advanced.h>
#include "database.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void WindowInit();
    void Serial_start();

public slots:
    void Check_Serial_Dynamic();
    void Update_Com_Serial(QStringList);
    void on_OpenCom_clicked();
    void on_ClearRX_clicked();
    void on_clearsend_clicked();
    void on_senddata_clicked();
    void on_AdvancedOpen_clicked();
    void Upate_ComPara(ComPara_t);
    void Update_ComSum(QString);
    void ChangeBD();
    void DecideToAddTime(int);
    void DecideToChange16(int);

private:
    Ui::MainWindow *ui;
    QStringList oldPortStringList;
    QSerialPort serial;
    int AddTimeFlag;
    int ToChange16;
    QTimer *TimeSerial = new QTimer;
    QMovie *movie = new QMovie("I:/com/gif/dance.gif");
    Advanced *advanced;
    void serialPort_readyRead();
    struct ComPara_t OldComPara;
    DataBase database;

signals:
    void onNewSerialPort(QStringList);
};



#endif // MAINWINDOW_H
