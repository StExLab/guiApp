#ifndef OHLC_H
#define OHLC_H

#include <QMainWindow>
#include "qcustomplot.h"


namespace Ui {
    class OHLC;
}

class OHLC : public QMainWindow
{
        Q_OBJECT

    public:
        explicit OHLC(QWidget *parent = 0);
        ~OHLC();

    private slots:
        void on_actionPlot1_triggered();

        void on_actionPlot2_triggered();

        void on_actionPlot3_triggered();

        void on_actionRtPlot_triggered();

        void on_actionPlt_triggered();

    private:
        Ui::OHLC *ui;

};

#endif // OHLC_H
