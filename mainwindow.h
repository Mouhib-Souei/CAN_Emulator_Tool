#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"device.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ON_clicked();

    void on_pushButton_OFF_clicked();
    void Display_info();


private:
    Ui::MainWindow *ui;
    Device dv;
    QByteArray d_read;
};
#endif // MAINWINDOW_H
