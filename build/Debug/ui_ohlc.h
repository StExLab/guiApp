/********************************************************************************
** Form generated from reading UI file 'ohlc.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OHLC_H
#define UI_OHLC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OHLC
{
public:
    QAction *actionPlot1;
    QAction *actionPlot2;
    QAction *actionPlot3;
    QAction *actionRtPlot;
    QAction *actionPlt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QSplitter *splitter_3;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QWidget *tab_6;
    QGridLayout *gridLayout;
    QCustomPlot *tickChart;
    QSpacerItem *verticalSpacer;
    QWidget *page_5;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QTreeWidget *treeWidget_2;
    QWidget *page_6;
    QWidget *page_7;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_4;
    QWidget *tab_7;
    QWidget *tab_8;
    QSplitter *splitter_2;
    QCustomPlot *basicChart;
    QSplitter *splitter;
    QCustomPlot *dx_1;
    QCustomPlot *dx_2;
    QCustomPlot *dx_3;
    QCustomPlot *dx_4;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QTreeWidget *treeWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    QCalendarWidget *calendarWidget;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_9;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *OHLC)
    {
        if (OHLC->objectName().isEmpty())
            OHLC->setObjectName(QStringLiteral("OHLC"));
        OHLC->resize(1224, 768);
        actionPlot1 = new QAction(OHLC);
        actionPlot1->setObjectName(QStringLiteral("actionPlot1"));
        actionPlot2 = new QAction(OHLC);
        actionPlot2->setObjectName(QStringLiteral("actionPlot2"));
        actionPlot3 = new QAction(OHLC);
        actionPlot3->setObjectName(QStringLiteral("actionPlot3"));
        actionRtPlot = new QAction(OHLC);
        actionRtPlot->setObjectName(QStringLiteral("actionRtPlot"));
        actionPlt = new QAction(OHLC);
        actionPlt->setObjectName(QStringLiteral("actionPlt"));
        centralwidget = new QWidget(OHLC);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter_3);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMaximumSize(QSize(300, 16777215));
        toolBox->setBaseSize(QSize(100, 30));
        QPalette palette;
        QBrush brush(QColor(170, 170, 170, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        toolBox->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        toolBox->setFont(font);
        toolBox->setAcceptDrops(true);
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(true);
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 300, 587));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit);

        comboBox_2 = new QComboBox(page);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_2);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget_3 = new QTabWidget(page);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setSizeIncrement(QSize(1, 1));
        QPalette palette1;
        QBrush brush3(QColor(0, 170, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        tabWidget_3->setPalette(palette1);
        tabWidget_3->setFont(font1);
        tabWidget_3->setTabPosition(QTabWidget::South);
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tabWidget_3->setIconSize(QSize(0, 0));
        tabWidget_3->setTabsClosable(false);
        tabWidget_3->setTabBarAutoHide(true);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_2 = new QGridLayout(tab_5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout = new QGridLayout(tab_6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tickChart = new QCustomPlot(tab_6);
        tickChart->setObjectName(QStringLiteral("tickChart"));

        gridLayout->addWidget(tickChart, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        tabWidget_3->addTab(tab_6, QString());

        gridLayout_5->addWidget(tabWidget_3, 1, 0, 1, 1);

        toolBox->addItem(page, QStringLiteral("Market Watch"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 300, 587));
        gridLayout_4 = new QGridLayout(page_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(92, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        comboBox = new QComboBox(page_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 1);

        treeWidget_2 = new QTreeWidget(page_5);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QStringLiteral("3"));
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_2->setHeaderItem(__qtreewidgetitem);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        treeWidget_2->setMouseTracking(true);
        treeWidget_2->setTabKeyNavigation(true);
        treeWidget_2->setSortingEnabled(true);
        treeWidget_2->setWordWrap(true);
        treeWidget_2->setHeaderHidden(true);
        treeWidget_2->setColumnCount(3);
        treeWidget_2->header()->setVisible(false);
        treeWidget_2->header()->setCascadingSectionResizes(true);
        treeWidget_2->header()->setDefaultSectionSize(65);
        treeWidget_2->header()->setHighlightSections(true);
        treeWidget_2->header()->setMinimumSectionSize(50);
        treeWidget_2->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_4->addWidget(treeWidget_2, 1, 0, 1, 2);

        toolBox->addItem(page_5, QStringLiteral("Indicators"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setGeometry(QRect(0, 0, 300, 587));
        toolBox->addItem(page_6, QStringLiteral("Experts"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 300, 587));
        toolBox->addItem(page_7, QStringLiteral("Plugins"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 300, 587));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget_4 = new QTabWidget(page_2);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        tabWidget_4->setPalette(palette2);
        tabWidget_4->setTabPosition(QTabWidget::South);
        tabWidget_4->setTabShape(QTabWidget::Rounded);
        tabWidget_4->setTabsClosable(false);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget_4->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tabWidget_4->addTab(tab_8, QString());

        gridLayout_3->addWidget(tabWidget_4, 0, 0, 1, 1);

        toolBox->addItem(page_2, QStringLiteral("Scripts"));
        splitter_3->addWidget(toolBox);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        basicChart = new QCustomPlot(splitter_2);
        basicChart->setObjectName(QStringLiteral("basicChart"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        basicChart->setPalette(palette3);
        splitter_2->addWidget(basicChart);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setMaximumSize(QSize(16777215, 200));
        splitter->setMidLineWidth(2);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(5);
        dx_1 = new QCustomPlot(splitter);
        dx_1->setObjectName(QStringLiteral("dx_1"));
        dx_1->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(dx_1);
        dx_2 = new QCustomPlot(splitter);
        dx_2->setObjectName(QStringLiteral("dx_2"));
        dx_2->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(dx_2);
        dx_3 = new QCustomPlot(splitter);
        dx_3->setObjectName(QStringLiteral("dx_3"));
        dx_3->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(dx_3);
        dx_4 = new QCustomPlot(splitter);
        dx_4->setObjectName(QStringLiteral("dx_4"));
        dx_4->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(dx_4);
        splitter_2->addWidget(splitter);
        splitter_3->addWidget(splitter_2);
        toolBox_2 = new QToolBox(splitter_3);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setMaximumSize(QSize(300, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush5(QColor(127, 127, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        toolBox_2->setPalette(palette4);
        toolBox_2->setFont(font);
        toolBox_2->setLineWidth(1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 300, 626));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        treeWidget = new QTreeWidget(page_3);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMaximumSize(QSize(16777215, 16777215));
        treeWidget->setBaseSize(QSize(0, 30));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        treeWidget->setFont(font2);
        treeWidget->setAcceptDrops(true);
        treeWidget->setLineWidth(0);
        treeWidget->setIndentation(15);
        treeWidget->setAllColumnsShowFocus(true);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setDefaultSectionSize(95);
        treeWidget->header()->setMinimumSectionSize(20);

        gridLayout_7->addWidget(treeWidget, 0, 0, 1, 1);

        toolBox_2->addItem(page_3, QStringLiteral("Properties"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 314, 609));
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        calendarWidget = new QCalendarWidget(page_4);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setMaximumSize(QSize(300, 16777215));
        QFont font3;
        font3.setPointSize(7);
        calendarWidget->setFont(font3);
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setMouseTracking(false);
        calendarWidget->setFocusPolicy(Qt::WheelFocus);
        calendarWidget->setContextMenuPolicy(Qt::PreventContextMenu);
        calendarWidget->setAutoFillBackground(true);
        calendarWidget->setGridVisible(true);
        calendarWidget->setNavigationBarVisible(true);

        verticalLayout_4->addWidget(calendarWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        toolBox_2->addItem(page_4, QStringLiteral("Calender"));
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        page_9->setGeometry(QRect(0, 0, 300, 626));
        toolBox_2->addItem(page_9, QStringLiteral("Chat"));
        splitter_3->addWidget(toolBox_2);

        gridLayout_6->addWidget(splitter_3, 0, 0, 1, 1);

        OHLC->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(OHLC);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        OHLC->setStatusBar(statusbar);
        toolBar = new QToolBar(OHLC);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        OHLC->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionPlot1);
        toolBar->addAction(actionPlot2);
        toolBar->addAction(actionPlot3);
        toolBar->addAction(actionRtPlot);
        toolBar->addAction(actionPlt);

        retranslateUi(OHLC);

        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(3);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        toolBox_2->setCurrentIndex(0);
        toolBox_2->layout()->setSpacing(6);


        QMetaObject::connectSlotsByName(OHLC);
    } // setupUi

    void retranslateUi(QMainWindow *OHLC)
    {
        OHLC->setWindowTitle(QApplication::translate("OHLC", "MainWindow", 0));
        actionPlot1->setText(QApplication::translate("OHLC", "plot1", 0));
        actionPlot2->setText(QApplication::translate("OHLC", "plot2", 0));
        actionPlot3->setText(QApplication::translate("OHLC", "plot3", 0));
        actionRtPlot->setText(QApplication::translate("OHLC", "rtPlot", 0));
#ifndef QT_NO_TOOLTIP
        actionRtPlot->setToolTip(QApplication::translate("OHLC", "rt plot of data signal", 0));
#endif // QT_NO_TOOLTIP
        actionPlt->setText(QApplication::translate("OHLC", "plt", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("OHLC", "symbol", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("OHLC", "ticks", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("OHLC", "Market Watch", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("OHLC", "type", 0)
         << QApplication::translate("OHLC", "autor", 0)
         << QApplication::translate("OHLC", "type -> autor", 0)
         << QApplication::translate("OHLC", "autor -> type", 0)
        );
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("OHLC", "Indicators", 0));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("OHLC", "Experts", 0));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("OHLC", "Plugins", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_7), QApplication::translate("OHLC", "Tab 1", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("OHLC", "Tab 2", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("OHLC", "Scripts", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("OHLC", "Value", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("OHLC", "Property", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("OHLC", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("OHLC", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("OHLC", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("OHLC", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("OHLC", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("OHLC", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("OHLC", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem5->child(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("OHLC", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem5->child(3);
        ___qtreewidgetitem9->setText(0, QApplication::translate("OHLC", "New Item", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QApplication::translate("OHLC", "Properties", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QApplication::translate("OHLC", "Calender", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_9), QApplication::translate("OHLC", "Chat", 0));
        toolBar->setWindowTitle(QApplication::translate("OHLC", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class OHLC: public Ui_OHLC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OHLC_H
