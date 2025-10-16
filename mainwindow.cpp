#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int ret = dv.Port_Config();
    if(ret==0)
    {
        qDebug() <<"Device is available and connected";
    }
    else
    {
        qDebug() << "Device is not available and not connected";
    }
    QObject::connect(dv.getSerial(),SIGNAL(readyRead()),this,SLOT(Display_info()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ON_clicked()
{
    dv.write_to_stm("1");
}


void MainWindow::on_pushButton_OFF_clicked()
{
    dv.write_to_stm("0");
}
void MainWindow::Display_info()
{
    d_read=dv.read_From_Stm();
    if("1"==d_read)
    {
        ui->lineEdit->setText("LED GREEN ON");
    }
    if("0"==d_read)
    {
        ui->lineEdit->setText("LED GREEN OFF");
    }
}
