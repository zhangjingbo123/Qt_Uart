#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>        //提供访问串口的功能
#include <QSerialPortInfo>    //提供系统中存在的串口的信息
#include <QTimer>             //定时器相关库
#include <QDebug>
#include <QMovie>
#include <advanced.h>
#include <QMessageBox>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WindowInit();
    this->setWindowTitle(QObject::tr("昊创上位机"));
    connect(TimeSerial, SIGNAL(timeout()), this, SLOT(Check_Serial_Dynamic()));
    connect(this, SIGNAL(onNewSerialPort(QStringList)), this, SLOT(Update_Com_Serial(QStringList)));
    connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialPort_readyRead);
    connect(ui->serialsum,SIGNAL(currentTextChanged(QString)),this,SLOT(Update_ComSum(QString)));
    connect(ui->BaudRateBox,SIGNAL(currentIndexChanged(int)),this,SLOT(ChangeBD()));
    connect(ui->AddTimekBox,SIGNAL(stateChanged(int)),this,SLOT(DecideToAddTime(int)));
    connect(ui->change16View,SIGNAL(stateChanged(int)),this,SLOT(DecideToChange16(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//动态检查串口连接
void MainWindow::Check_Serial_Dynamic()
{
    QStringList newPortStringList;
    int HaveCUCom = 0;//是否有当前串口
  //搜索串口
  foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
  {
      newPortStringList += info.portName();
  }
  if(newPortStringList.size() != oldPortStringList.size())
  {
      oldPortStringList = newPortStringList;
      emit onNewSerialPort(oldPortStringList);
  }
  else
  {
    for(int i =0; i<newPortStringList.size(); i++)
    {
        if(newPortStringList[i]!=oldPortStringList[i])
        {
            oldPortStringList = newPortStringList;
            emit onNewSerialPort(oldPortStringList);
        }
        if(newPortStringList[i] == serial.portName())
        {
            HaveCUCom = 1;
        }
    }
    if(!HaveCUCom && (ui->OpenCom->text() == "关闭串口"))
    {
        serial.close(); //关闭串口
        ui->OpenCom->setText("打开串口");
    }
  }
}

//检测到串口变更就更新
void MainWindow::Update_Com_Serial(QStringList PortStringList)
{
    ui->serialsum->clear();
    for(int i =0; i<PortStringList.size(); i++)
    {
        ui->serialsum->addItem(PortStringList[i]);
    }
}

//窗口部分参数初始化
void MainWindow::WindowInit()
{
    //开启定时器
    TimeSerial ->start(1000);
    //播放gif
    ui->gif_dance->setMovie(movie);
    movie->start();
    //设置未打开状态
    ui->OpenCom->setText("打开串口");
    database.createConnection();
    database.createTable();
    ui->BaudRateBox->setCurrentIndex(database.ReadSomeOne(baudrate));//掉电前读取的值
    if(database.ReadSomeOne(addtime))
    {
        AddTimeFlag = 1;
        ui->AddTimekBox->setCheckState(Qt::Checked);
    }
    else
    {
        AddTimeFlag = 0;
        ui->AddTimekBox->setCheckState(Qt::Unchecked);
    }
    if(database.ReadSomeOne(Change16))
    {
        ToChange16 = 1;
        ui->change16View->setCheckState(Qt::Checked);
    }
    else
    {
        ToChange16 = 0;
        ui->change16View->setCheckState(Qt::Unchecked);
    }
    OldComPara.Datenum = database.ReadSomeOne(datasum);
    OldComPara.QiOuCheck = database.ReadSomeOne(checkbit);
    OldComPara.StopFlag = database.ReadSomeOne(stopflag);
}

//串口开始控制
void MainWindow::on_OpenCom_clicked()
{
    if(ui->OpenCom->text() == "打开串口")
    {
       Serial_start();
    }
    else
    {
       ui->OpenCom->setText("打开串口");
       serial.close();
    }
}

//接收窗口清除
void MainWindow::on_ClearRX_clicked()
{
    ui->Rxtext->clear();
}

void MainWindow::on_clearsend_clicked()
{
    ui->txtext->clear();
}

void MainWindow::on_senddata_clicked()
{
    QByteArray SendData;
    if(ui->OpenCom->text() == "打开串口")
    {
        Serial_start();
    }
    QString Data = ui->txtext->toPlainText();
    Data+='\r';Data+='\n';//插入换行
    SendData = Data.toUtf8();
    serial.write(SendData);
}

//设置串口参数并开始
void MainWindow::Serial_start()
{
    //设置串口名
   serial.setPortName(ui->serialsum->currentText());
   //设置波特率
   serial.setBaudRate(ui->BaudRateBox->currentText().toInt());//转化为int值
   //设置数据位数
   switch(OldComPara.Datenum)
   {
      case 8: serial.setDataBits(QSerialPort::Data8); break;
      default: break;
   }
   //设置奇偶校验
   switch(OldComPara.QiOuCheck)
   {
      case 0: serial.setParity(QSerialPort::NoParity); break;
      default: break;
   }
   //设置停止位

   if(OldComPara.StopFlag == 1) serial.setStopBits(QSerialPort::OneStop);
   else if(OldComPara.StopFlag == 1.5) serial.setStopBits(QSerialPort::OneAndHalfStop);
   else if(OldComPara.StopFlag == 2) serial.setStopBits(QSerialPort::TwoStop);

   //设置流控制
   serial.setFlowControl(QSerialPort::NoFlowControl);
   //打开串口
   if(!serial.open(QIODevice::ReadWrite))
   {
       QMessageBox::about(NULL,"提示","无法打开串口!");
       return;
   }
   ui->OpenCom->setText("关闭串口");
}

//弹出高级设置页面
void MainWindow::on_AdvancedOpen_clicked()
{
    advanced = new Advanced(this);
    advanced->setModal(false);
    advanced->setWindowTitle(QObject::tr("高级设置"));
    connect(advanced, SIGNAL(onAllowToChange(ComPara_t)), this, SLOT(Upate_ComPara(ComPara_t)));
    advanced->SetComPara(OldComPara);
    advanced->show();
}

//高级设置传回来的参数的槽
void MainWindow::Upate_ComPara(ComPara_t ComPara)
{
    OldComPara.Datenum = ComPara.Datenum;
    OldComPara.QiOuCheck = ComPara.QiOuCheck;
    OldComPara.StopFlag = ComPara.StopFlag;

    database.queryone(datasum," ",ComPara.Datenum);
    database.queryone(checkbit," ",ComPara.QiOuCheck);
    database.queryone(stopflag," ",ComPara.StopFlag);
}

//接收并打印槽
void MainWindow::serialPort_readyRead()
{
    QByteArray buffer_1;
    QTime current_time =QTime::currentTime();
    QString Time_sql;
    if(AddTimeFlag)
    {
        Time_sql = QString("[%1:%2:%3:%4]").arg(current_time.hour()).arg(current_time.minute()).arg(current_time.second()).arg(current_time.msec());
    }
    //从接收缓冲区中读取数据
    QByteArray buffer = serial.readAll();
    //从界面中读取以前收到的数据
    QString recv = ui->Rxtext->toPlainText();
    if(AddTimeFlag)
    {
        recv += QString(Time_sql);
    }
    if(ToChange16)
    {
         QString str=buffer.toHex().data();
         str=str.toUpper(); //一个16进制占4位，8位为一字节，所以每两位16进制空一格
        for(int i=0;i<str.length();i+=2)
        {
             QString str_1 = str.mid (i,2);
             buffer_1 += str_1;
             buffer_1 += " ";
        }
        buffer_1 += "\n";
        recv += QString(buffer_1);
    }
    else
    {
        recv += QString(buffer);
    }
    //清空以前的显示
    ui->Rxtext->clear();
    //重新显示
    ui->Rxtext->append(recv);
}

//决定是否添加时间戳
void MainWindow::DecideToAddTime(int flag)
{
    AddTimeFlag = flag;
    qDebug()<<"AddTimeFlag "<<AddTimeFlag;
    database.queryone(addtime," ",AddTimeFlag);
}

//更新在打开串口过程中换新的接口名
void MainWindow::Update_ComSum(QString pornname)
{
    if(ui->OpenCom->text() == "关闭串口")
    {
        serial.close();
        serial.setPortName(pornname);
        if(!serial.open(QIODevice::ReadWrite))
        {
            QMessageBox::about(NULL,"提示","无法打开串口!");
            return;
        }
    }
}

//按下16显示后
void MainWindow::DecideToChange16(int change16flag)
{
    ToChange16 = change16flag;
    qDebug()<<"ToChange16 "<<ToChange16;
    database.queryone(Change16," ",ToChange16);
}

//更新波特率的数据库
void MainWindow::ChangeBD()
{
     database.queryone(baudrate," ",ui->BaudRateBox->currentIndex());
     qDebug()<<"Datenum "<<ui->BaudRateBox->currentIndex();
}
