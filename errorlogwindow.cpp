#include "errorlogwindow.h"
#include "ui_errorlogwindow.h"

#include <QStandardItemModel>

ErrorLogWindow::ErrorLogWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ErrorLogWindow)
{
    ui->setupUi(this);
}

ErrorLogWindow::~ErrorLogWindow()
{
    delete ui;
}

void ErrorLogWindow::FillSystemLogs()
{
    QStandardItemModel * model = new QStandardItemModel(10,6,this); //10Rows and 6Cols

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("IDX")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("TYPE")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("DETAIL")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("OCCURED_DATETIME")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("ACCOUNT_ID")));
    model->setHorizontalHeaderItem(5, new QStandardItem(QString("MEMO")));


    for(int i = 0; i<10 ; i++)
    {
        model->setVerticalHeaderItem(i, new QStandardItem(QString("  ")));
    }

    ui->tableView->setModel(model);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("IDX")));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}
