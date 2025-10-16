#include "device.h"

Device::Device()
{
    portname="COM15";
    portserie= new QSerialPort;
    data="";
}
int Device::Port_Config()
{
    portserie->setPortName(portname);
    if(portserie->open(QSerialPort::ReadWrite))
    {
        portserie->setBaudRate(QSerialPort::Baud115200);
        portserie->setDataBits(QSerialPort::Data8);
        portserie->setParity(QSerialPort::NoParity);
        portserie->setStopBits(QSerialPort::OneStop);
        portserie->setFlowControl(QSerialPort::NoFlowControl);
        return 0;
    }
    else {
        return -1;
    }
}
void Device::write_to_stm(QByteArray d)
{
    if(portserie->isWritable())
    {
        portserie->write(d);
    }
    else
    {
        qDebug()<<"couldn't write to stm";
    }
}
QByteArray Device::read_From_Stm()
{
    if(portserie->isReadable())
    {
        data=portserie->readAll();
        qDebug()<<"les valeurs sont"<<data;
    }
    return data;
}
QSerialPort* Device::getSerial()
{
    return portserie;
}
Device::~Device()
{

    delete portserie;
}


