#include "timingchartwindow.h"
#include "ui_timingchartwindow.h"

TimingChartWindow::TimingChartWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimingChartWindow)
{
    ui->setupUi(this);
}

TimingChartWindow::~TimingChartWindow()
{
    delete ui;
}

