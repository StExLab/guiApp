#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mydialog.h"
#include "ohlc.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();



    void on_actionNew_triggered();

    private slots:



        void on_newChart_triggered();

        void on_ohlc_triggered();

    private:
        Ui::MainWindow *ui;
        MyDialog *mDialog;
        OHLC *ohlc;

};

#endif // MAINWINDOW_H
