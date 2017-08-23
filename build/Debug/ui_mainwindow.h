/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newDialog;
    QAction *ohlc;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QToolBox *toolBox;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget_3;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_2;
    QTableView *symbols;
    QWidget *tab_6;
    QGridLayout *gridLayout_8;
    QWidget *page_7;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidget_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QTableView *tableView;
    QWidget *tab_4;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QTreeWidget *treeWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    QCalendarWidget *calendarWidget;
    QSpacerItem *verticalSpacer;
    QWidget *page_9;
    QToolBar *toolBar_2;
    QToolBar *toolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuInsert;
    QMenu *menuCharts;
    QMenu *menuTools;
    QMenu *menuWindows;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1329, 786);
        MainWindow->setBaseSize(QSize(1920, 1080));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        MainWindow->setMouseTracking(true);
        MainWindow->setFocusPolicy(Qt::TabFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setAcceptDrops(true);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setIconSize(QSize(12, 12));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        newDialog = new QAction(MainWindow);
        newDialog->setObjectName(QStringLiteral("newDialog"));
        newDialog->setCheckable(false);
        newDialog->setChecked(false);
        newDialog->setIconVisibleInMenu(true);
        newDialog->setPriority(QAction::HighPriority);
        ohlc = new QAction(MainWindow);
        ohlc->setObjectName(QStringLiteral("ohlc"));
        ohlc->setCheckable(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        centralWidget->setPalette(palette1);
        centralWidget->setMouseTracking(true);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMaximumSize(QSize(300, 16777215));
        toolBox->setBaseSize(QSize(100, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        toolBox->setPalette(palette2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        toolBox->setFont(font);
        toolBox->setAcceptDrops(true);
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(true);
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        page_8->setGeometry(QRect(0, 0, 300, 660));
        verticalLayout_3 = new QVBoxLayout(page_8);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        treeWidget_3 = new QTreeWidget(page_8);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget_3);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_3);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget_3->setObjectName(QStringLiteral("treeWidget_3"));

        verticalLayout_3->addWidget(treeWidget_3);

        toolBox->addItem(page_8, QStringLiteral("Accounts"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 300, 660));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit->setFont(font1);

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        comboBox_2 = new QComboBox(page);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font1);

        gridLayout_3->addWidget(comboBox_2, 0, 2, 1, 1);

        tabWidget_3 = new QTabWidget(page);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setSizeIncrement(QSize(1, 1));
        QPalette palette3;
        QBrush brush5(QColor(0, 170, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        tabWidget_3->setPalette(palette3);
        tabWidget_3->setFont(font1);
        tabWidget_3->setTabPosition(QTabWidget::South);
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tabWidget_3->setIconSize(QSize(0, 0));
        tabWidget_3->setTabsClosable(false);
        tabWidget_3->setTabBarAutoHide(true);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_2 = new QGridLayout(tab_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        symbols = new QTableView(tab_5);
        symbols->setObjectName(QStringLiteral("symbols"));
        symbols->viewport()->setProperty("cursor", QVariant(QCursor(Qt::SizeAllCursor)));
        symbols->setMouseTracking(true);
        symbols->setDragEnabled(true);
        symbols->setDragDropMode(QAbstractItemView::DragDrop);
        symbols->setAlternatingRowColors(true);
        symbols->horizontalHeader()->setVisible(false);

        gridLayout_2->addWidget(symbols, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_8 = new QGridLayout(tab_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tabWidget_3->addTab(tab_6, QString());

        gridLayout_3->addWidget(tabWidget_3, 1, 0, 1, 3);

        toolBox->addItem(page, QStringLiteral("Market Watch"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 300, 660));
        toolBox->addItem(page_7, QStringLiteral("Plugins"));
        splitter_2->addWidget(toolBox);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        tabWidget->setPalette(palette4);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_4->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout_5->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);
        tabWidget_2 = new QTabWidget(splitter);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setMaximumSize(QSize(16777215, 400));
        tabWidget_2->setMouseTracking(true);
        tabWidget_2->setToolTipDuration(-1);
        tabWidget_2->setTabPosition(QTabWidget::South);
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tabWidget_2->setElideMode(Qt::ElideRight);
        tabWidget_2->setTabsClosable(false);
        tabWidget_2->setMovable(true);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_7->addWidget(tableView, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        splitter->addWidget(tabWidget_2);
        splitter_2->addWidget(splitter);
        toolBox_2 = new QToolBox(splitter_2);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setMaximumSize(QSize(300, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        toolBox_2->setPalette(palette5);
        toolBox_2->setFont(font);
        toolBox_2->setLineWidth(0);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 192, 651));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        treeWidget = new QTreeWidget(page_3);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
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

        gridLayout_6->addWidget(treeWidget, 0, 0, 1, 1);

        toolBox_2->addItem(page_3, QStringLiteral("Properties"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 314, 634));
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        toolBox_2->addItem(page_4, QStringLiteral("Calender"));
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        page_9->setGeometry(QRect(0, 0, 192, 651));
        toolBox_2->addItem(page_9, QStringLiteral("Chat"));
        splitter_2->addWidget(toolBox_2);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setMaximumSize(QSize(30, 100));
        toolBar_2->setCursor(QCursor(Qt::CrossCursor));
        toolBar_2->setMouseTracking(true);
        toolBar_2->setFocusPolicy(Qt::ClickFocus);
        toolBar_2->setAutoFillBackground(false);
        toolBar_2->setMovable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_2);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMaximumSize(QSize(30, 300));
        toolBar->setCursor(QCursor(Qt::SizeAllCursor));
        toolBar->setMouseTracking(true);
        toolBar->setFocusPolicy(Qt::ClickFocus);
        toolBar->setAutoFillBackground(false);
        toolBar->setMovable(true);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setMaximumSize(QSize(16777215, 15));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(220, 220, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush7(QColor(237, 237, 237, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(110, 110, 110, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(147, 147, 147, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        statusBar->setPalette(palette6);
        statusBar->setMouseTracking(true);
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1329, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuInsert = new QMenu(menuBar);
        menuInsert->setObjectName(QStringLiteral("menuInsert"));
        menuCharts = new QMenu(menuBar);
        menuCharts->setObjectName(QStringLiteral("menuCharts"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuWindows = new QMenu(menuBar);
        menuWindows->setObjectName(QStringLiteral("menuWindows"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        toolBar_2->addAction(newDialog);
        toolBar_2->addSeparator();
        toolBar_2->addAction(ohlc);
        toolBar_2->addSeparator();
        toolBar->addSeparator();
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuInsert->menuAction());
        menuBar->addAction(menuCharts->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuWindows->menuAction());
        menuBar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(1);
        toolBox->layout()->setSpacing(3);
        tabWidget_3->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        toolBox_2->setCurrentIndex(0);
        toolBox_2->layout()->setSpacing(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QChartApplication", 0));
        newDialog->setText(QApplication::translate("MainWindow", "new dialog", 0));
        newDialog->setIconText(QApplication::translate("MainWindow", "new", 0));
#ifndef QT_NO_TOOLTIP
        newDialog->setToolTip(QApplication::translate("MainWindow", "new dialog", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        newDialog->setWhatsThis(QApplication::translate("MainWindow", "new chart", 0));
#endif // QT_NO_WHATSTHIS
        ohlc->setText(QApplication::translate("MainWindow", "ohlc", 0));
#ifndef QT_NO_TOOLTIP
        ohlc->setToolTip(QApplication::translate("MainWindow", "ohlc", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_3->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "State", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Name", 0));

        const bool __sortingEnabled = treeWidget_3->isSortingEnabled();
        treeWidget_3->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_3->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Quik", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "q1", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "q2", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "q3", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget_3->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "MT", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "m1", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "m2", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem5->child(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "m3", 0));
        treeWidget_3->setSortingEnabled(__sortingEnabled);

        toolBox->setItemText(toolBox->indexOf(page_8), QApplication::translate("MainWindow", "Accounts", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "symbol", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "ticks", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Market Watch", 0));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("MainWindow", "Plugins", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->headerItem();
        ___qtreewidgetitem9->setText(1, QApplication::translate("MainWindow", "Value", 0));
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Property", 0));

        const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem10->child(1);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem10->child(2);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "New Subitem", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem14->child(1);
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem14->child(2);
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem14->child(3);
        ___qtreewidgetitem18->setText(0, QApplication::translate("MainWindow", "New Item", 0));
        treeWidget->setSortingEnabled(__sortingEnabled1);

        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QApplication::translate("MainWindow", "Properties", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QApplication::translate("MainWindow", "Calender", 0));
        toolBox_2->setItemText(toolBox_2->indexOf(page_9), QApplication::translate("MainWindow", "Chat", 0));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuInsert->setTitle(QApplication::translate("MainWindow", "Insert", 0));
        menuCharts->setTitle(QApplication::translate("MainWindow", "Charts", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuWindows->setTitle(QApplication::translate("MainWindow", "Window", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
