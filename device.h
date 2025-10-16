#ifndef DEVICE_H
#define DEVICE_H

#include<QtSerialPort/QSerialPort>
#include<QDebug>

class Device
{
    QString portname;
    QSerialPort * portserie;
    QByteArray data;
public:
    Device();
    ~Device();
    int Port_Config();
    void write_to_stm(QByteArray d);
    QByteArray read_From_Stm();
    QSerialPort* getSerial();
};

#endif // DEVICE_H
