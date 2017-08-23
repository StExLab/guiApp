#include "ohlc.h"
#include "ui_ohlc.h"


OHLC::OHLC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OHLC)
{
    ui->setupUi(this);
}

OHLC::~OHLC()
{
    delete ui;
}

void OHLC::on_actionPlot1_triggered()
{
    //Рисуем график y=x*x

        //Сгенерируем данные
        //Для этого создадим два массива точек:
        //один для созранения x координат точек,
        //а второй для y соответственно

        double a = -1; //Начало интервала, где рисуем график по оси Ox
        double b =  1; //Конец интервала, где рисуем график по оси Ox
        double h = 0.01; //Шаг, с которым будем пробегать по оси Ox

        int N=(b-a)/h + 2; //Вычисляем количество точек, которые будем отрисовывать
        QVector<double> x(N), y(N); //Массивы координат точек

        //Вычисляем наши данные
        int i=0;
        for (double X=a; X<=b; X+=h)//Пробегаем по всем точкам
        {
            x[i] = X;
            y[i] = X*X;//Формула нашей функции
            i++;
        }

        ui->dx_1->clearGraphs();//Если нужно, но очищаем все графики
        //Добавляем один график в widget
        ui->dx_1->addGraph();
        //Говорим, что отрисовать нужно график по нашим двум массивам x и y
        ui->dx_1->graph(0)->setData(x, y);

        //Подписываем оси Ox и Oy
        ui->dx_1->xAxis->setLabel("x");
        ui->dx_1->yAxis->setLabel("y");

        //Установим область, которая будет показываться на графике
        ui->dx_1->xAxis->setRange(a, b);//Для оси Ox

        //Для показа границ по оси Oy сложнее, так как надо по правильному
        //вычислить минимальное и максимальное значение в векторах
        double minY = y[0], maxY = y[0];
        for (int i=1; i<N; i++)
        {
            if (y[i]<minY) minY = y[i];
            if (y[i]>maxY) maxY = y[i];
        }
        ui->dx_1->yAxis->setRange(minY, maxY);//Для оси Oy

        //И перерисуем график на нашем widget
        ui->dx_1->replot();


}

void OHLC::on_actionPlot2_triggered()
{

    //Рисуем график точками y=x*x

    //Сгенерируем данные
    //Для этого создадим два массива точек:
    //один для созранения x координат точек,
    //а второй для y соответственно

    double a = -1; //Начало интервала, где рисуем график по оси Ox
    double b =  1; //Конец интервала, где рисуем график по оси Ox
    double h = 0.1; //Шаг, с которым будем пробегать по оси Ox

    int N=(b-a)/h + 2; //Вычисляем количество точек, которые будем отрисовывать
    QVector<double> x(N), y(N); //Массивы координат точек

    //Вычисляем наши данные
    int i=0;
    for (double X=a; X<=b; X+=h)//Пробегаем по всем точкам
    {
        x[i] = X;
        y[i] = X*X;//Формула нашей функции
        i++;
    }

    ui->dx_2->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->dx_2->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    ui->dx_2->graph(0)->setData(x, y);

    ui->dx_2->graph(0)->setPen(QColor(50, 50, 50, 255));//задаем цвет точки
    ui->dx_2->graph(0)->setLineStyle(QCPGraph::lsNone);//убираем линии
    //формируем вид точек
    ui->dx_2->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));

    //Подписываем оси Ox и Oy
    ui->dx_2->xAxis->setLabel("x");
    ui->dx_2->yAxis->setLabel("y");

    //Установим область, которая будет показываться на графике
    ui->dx_2->xAxis->setRange(a, b);//Для оси Ox

    //Для показа границ по оси Oy сложнее, так как надо по правильному
    //вычислить минимальное и максимальное значение в векторах
    double minY = y[0], maxY = y[0];
    for (int i=1; i<N; i++)
    {
        if (y[i]<minY) minY = y[i];
        if (y[i]>maxY) maxY = y[i];
    }
    ui->dx_2->yAxis->setRange(minY, maxY);//Для оси Oy

    //И перерисуем график на нашем widget
    ui->dx_2->replot();

}

void OHLC::on_actionPlot3_triggered()
{


    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
      x[i] = i/50.0 - 1; // x goes from -1 to 1
      y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    ui->dx_3->addGraph();
    ui->dx_3->graph(0)->setData(x, y);


    // give the axes some labels:
    ui->dx_3->xAxis->setLabel("x");
    ui->dx_3->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->dx_3->xAxis->setRange(-1, 1);
    ui->dx_3->yAxis->setRange(0, 1);
    ui->dx_3->replot();


}

void OHLC::on_actionRtPlot_triggered()
{

    QTimer dataTimer;


    // Setup function:

    ui->basicChart->addGraph(); // blue line
    ui->basicChart->graph(0)->setPen(QPen(QColor(40, 110, 255)));
    ui->basicChart->addGraph(); // red line
    ui->basicChart->graph(1)->setPen(QPen(QColor(255, 110, 40)));

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->basicChart->xAxis->setTicker(timeTicker);
    ui->basicChart->axisRect()->setupFullAxesBox();
    ui->basicChart->yAxis->setRange(-1.2, 1.2);

    // make left and bottom axes transfer their ranges to right and top axes:
    connect(ui->basicChart->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->basicChart->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->basicChart->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->basicChart->yAxis2, SLOT(setRange(QCPRange)));

    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
    connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    dataTimer.start(0); // Interval 0 means to refresh as fast as possible



    // realtimeDataSlot, called by timer:

    static QTime time(QTime::currentTime());
    // calculate two new data points:
    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
    static double lastPointKey = 0;
    if (key-lastPointKey > 0.002) // at most add point every 2 ms
    {
      // add data to lines:
      ui->basicChart->graph(0)->addData(key, qSin(key)+qrand()/(double)RAND_MAX*1*qSin(key/0.3843));
      ui->basicChart->graph(1)->addData(key, qCos(key)+qrand()/(double)RAND_MAX*0.5*qSin(key/0.4364));

      // rescale value (vertical) axis to fit the current data:
      ui->basicChart->graph(0)->rescaleValueAxis();
      ui->basicChart->graph(1)->rescaleValueAxis(true);
      lastPointKey = key;
    }
    // make key axis range scroll with the data (at a constant range size of 8):
    ui->basicChart->xAxis->setRange(key, 8, Qt::AlignRight);
    ui->basicChart->replot();

    // calculate frames per second:
    static double lastFpsKey;
    static int frameCount;
    ++frameCount;




    if (key-lastFpsKey > 2) // average fps over 2 seconds
    {
        /*
      ui->statusBar->showMessage(
            QString("%1 FPS, Total Data points: %2")
            .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
            .arg(ui->basicChart->graph(0)->data()->size() + ui->basicChart->graph(1)->data()->size())
            , 0);
        */
      lastFpsKey = key;
      frameCount = 0;
    }




}

void OHLC::on_actionPlt_triggered()
{

    ui->basicChart->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom)); // period as decimal separator and comma as thousand separator
    ui->basicChart->legend->setVisible(true);
    QFont legendFont = font();  // start out with MainWindow's font..
    legendFont.setPointSize(9); // and make a bit smaller for legend
    ui->basicChart->legend->setFont(legendFont);
    ui->basicChart->legend->setBrush(QBrush(QColor(255,255,255,230)));
    // by default, the legend is in the inset layout of the main axis rect. So this is how we access it to change legend placement:
    ui->basicChart->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom|Qt::AlignRight);

    // setup for graph 0: key axis left, value axis bottom
    // will contain left maxwell-like function
    ui->basicChart->addGraph(ui->basicChart->yAxis, ui->basicChart->xAxis);
    ui->basicChart->graph(0)->setPen(QPen(QColor(255, 100, 0)));
    ui->basicChart->graph(0)->setBrush(QBrush(QPixmap("./balboa.jpg"))); // fill with texture of specified image
    ui->basicChart->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->basicChart->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));
    ui->basicChart->graph(0)->setName("Left maxwell function");

    // setup for graph 1: key axis bottom, value axis left (those are the default axes)
    // will contain bottom maxwell-like function with error bars
    ui->basicChart->addGraph();
    ui->basicChart->graph(1)->setPen(QPen(Qt::red));
    ui->basicChart->graph(1)->setBrush(QBrush(QPixmap("./balboa.jpg"))); // same fill as we used for graph 0
    ui->basicChart->graph(1)->setLineStyle(QCPGraph::lsStepCenter);
    ui->basicChart->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, Qt::red, Qt::white, 7));
    ui->basicChart->graph(1)->setName("Bottom maxwell function");
    QCPErrorBars *errorBars = new QCPErrorBars(ui->basicChart->xAxis, ui->basicChart->yAxis);
    errorBars->removeFromLegend();
    errorBars->setDataPlottable(ui->basicChart->graph(1));

    // setup for graph 2: key axis top, value axis right
    // will contain high frequency sine with low frequency beating:
    ui->basicChart->addGraph(ui->basicChart->xAxis2, ui->basicChart->yAxis2);
    ui->basicChart->graph(2)->setPen(QPen(Qt::blue));
    ui->basicChart->graph(2)->setName("High frequency sine");

    // setup for graph 3: same axes as graph 2
    // will contain low frequency beating envelope of graph 2
    ui->basicChart->addGraph(ui->basicChart->xAxis2, ui->basicChart->yAxis2);
    QPen blueDotPen;
    blueDotPen.setColor(QColor(30, 40, 255, 150));
    blueDotPen.setStyle(Qt::DotLine);
    blueDotPen.setWidthF(4);
    ui->basicChart->graph(3)->setPen(blueDotPen);
    ui->basicChart->graph(3)->setName("Sine envelope");

    // setup for graph 4: key axis right, value axis top
    // will contain parabolically distributed data points with some random perturbance
    ui->basicChart->addGraph(ui->basicChart->yAxis2, ui->basicChart->xAxis2);
    ui->basicChart->graph(4)->setPen(QColor(50, 50, 50, 255));
    ui->basicChart->graph(4)->setLineStyle(QCPGraph::lsNone);
    ui->basicChart->graph(4)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    ui->basicChart->graph(4)->setName("Some random data around\na quadratic function");

    // generate data, just playing with numbers, not much to learn here:
    QVector<double> x0(25), y0(25);
    QVector<double> x1(15), y1(15), y1err(15);
    QVector<double> x2(250), y2(250);
    QVector<double> x3(250), y3(250);
    QVector<double> x4(250), y4(250);
    for (int i=0; i<25; ++i) // data for graph 0
    {
      x0[i] = 3*i/25.0;
      y0[i] = qExp(-x0[i]*x0[i]*0.8)*(x0[i]*x0[i]+x0[i]);
    }
    for (int i=0; i<15; ++i) // data for graph 1
    {
      x1[i] = 3*i/15.0;;
      y1[i] = qExp(-x1[i]*x1[i])*(x1[i]*x1[i])*2.6;
      y1err[i] = y1[i]*0.25;
    }
    for (int i=0; i<250; ++i) // data for graphs 2, 3 and 4
    {
      x2[i] = i/250.0*3*M_PI;
      x3[i] = x2[i];
      x4[i] = i/250.0*100-50;
      y2[i] = qSin(x2[i]*12)*qCos(x2[i])*10;
      y3[i] = qCos(x3[i])*10;
      y4[i] = 0.01*x4[i]*x4[i] + 1.5*(rand()/(double)RAND_MAX-0.5) + 1.5*M_PI;
    }

    // pass data points to graphs:
    ui->basicChart->graph(0)->setData(x0, y0);
    ui->basicChart->graph(1)->setData(x1, y1);
    errorBars->setData(y1err);
    ui->basicChart->graph(2)->setData(x2, y2);
    ui->basicChart->graph(3)->setData(x3, y3);
    ui->basicChart->graph(4)->setData(x4, y4);
    // activate top and right axes, which are invisible by default:
    ui->basicChart->xAxis2->setVisible(true);
    ui->basicChart->yAxis2->setVisible(true);
    // set ranges appropriate to show data:
    ui->basicChart->xAxis->setRange(0, 2.7);
    ui->basicChart->yAxis->setRange(0, 2.6);
    ui->basicChart->xAxis2->setRange(0, 3.0*M_PI);
    ui->basicChart->yAxis2->setRange(-70, 35);
    // set pi ticks on top axis:
    ui->basicChart->xAxis2->setTicker(QSharedPointer<QCPAxisTickerPi>(new QCPAxisTickerPi));
    // add title layout element:
    ui->basicChart->plotLayout()->insertRow(0);
    ui->basicChart->plotLayout()->addElement(0, 0, new QCPTextElement(ui->basicChart, "Way too many graphs in one plot", QFont("sans", 12, QFont::Bold)));
    // set labels:
    ui->basicChart->xAxis->setLabel("Bottom axis with outward ticks");
    ui->basicChart->yAxis->setLabel("Left axis label");
    ui->basicChart->xAxis2->setLabel("Top axis label");
    ui->basicChart->yAxis2->setLabel("Right axis label");
    // make ticks on bottom axis go outward:
    ui->basicChart->xAxis->setTickLength(0, 5);
    ui->basicChart->xAxis->setSubTickLength(0, 3);
    // make ticks on right axis go inward and outward:
    ui->basicChart->yAxis2->setTickLength(3, 3);
    ui->basicChart->yAxis2->setSubTickLength(1, 1);




}
