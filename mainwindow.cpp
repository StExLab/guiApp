#include "mainwindow.h"
#include "ui_mainwindow.h"


#define customPlot ui->sber


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_newChart_triggered()
{

    mDialog = new MyDialog(this);
    mDialog ->show();

    /*
    MyDialog mdl;
    mdl.setModal(true);
    mdl.exec();
    */
}

void MainWindow::on_ohlc_triggered()
{
    ohlc = new OHLC(this);
    ohlc->showMaximized();
}

void MainWindow::on_actionPlot_triggered()
{

}

void MainWindow::on_actionOne_triggered()
{

}
