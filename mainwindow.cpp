#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "systemlogwindow.h"
#include "loginwindow.h"
#include "timingchartwindow.h"
#include "errorlogwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SystemLogWindow* systemLogWindow = new SystemLogWindow();
    systemLogWindow->FillSystemLogs();
    systemLogWindow->setWindowTitle("SystemLog");
    systemLogWindow->show();

    ErrorLogWindow* errorLogWindow = new ErrorLogWindow();
    errorLogWindow->FillSystemLogs();
    errorLogWindow->setWindowTitle("ErrorLog");
    errorLogWindow->show();

    LoginWindow* loginWindow = new LoginWindow();
    loginWindow->setWindowTitle("Login");
    loginWindow->show();

    TimingChartWindow* timingChartWindow = new TimingChartWindow();
    timingChartWindow->setWindowTitle("TimingChart");
    timingChartWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
