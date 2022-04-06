#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStandardItemModel(this);
    ui->tableView->setModel(model);

    list1.append(new QStandardItem("1"));
    list1.append((new QStandardItem("2")));
    list1.append((new QStandardItem("3")));
    model->appendRow(list1);

    list2.append(new QStandardItem("CLAY"));
    list2.append((new QStandardItem("QWERTY")));
    list2.append((new QStandardItem("BOOM")));
    model->appendRow(list2);

    list3.append(new QStandardItem("123.313.42.4"));
    list3.append((new QStandardItem("142.124.124.1")));
    list3.append((new QStandardItem("142.142.124.412")));
    model->appendRow(list3);

    list4.append(new QStandardItem("00:00:00:a1:2b:cc"));
    list4.append((new QStandardItem("20:34:00:a1:2b:cc")));
    list4.append((new QStandardItem("10:f0:00:41:2b:ca")));
    model->appendRow(list4);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

