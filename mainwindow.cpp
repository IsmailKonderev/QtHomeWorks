#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStandardItemModel(this);
    ui->listView->setModel(model);

    strModel = new QStringListModel(this);

    list = {{"C++","C++.png"},
            {"Python","Python.png"},
            {"Java","Java.png"},
            {"C#","CSh.png"},
            {"PHP","PHP.png"},
            {"JavaScript","JavaScript.png"}
           };

    for(auto it: list){
        model->appendRow(new QStandardItem(QIcon(it.second),it.first));
        strList.push_back(it.first);
    }
    strModel->setStringList(strList);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    if(!ui->lineEdit->text().isEmpty()){

        QString text = ui->lineEdit->text();

        list.push_back({text,"0"});

        strList.push_back(text);
        strModel->setStringList(strList);

        ui->lineEdit->clear();
        model->clear();

        for(auto it: list)
            if(it.second != "0")
                model->appendRow(new QStandardItem(QIcon(it.second),it.first));
            else
                model->appendRow(new QStandardItem(QIcon(QApplication::style()->standardIcon(QStyle::SP_FileIcon)),it.first));

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(!list.isEmpty()){

        list.erase(list.begin()+ui->listView->currentIndex().row());
        strList.erase(strList.begin()+ui->listView->currentIndex().row());
        strModel->setStringList(strList);

        model->clear();

        for(auto it: list)
            model->appendRow(new QStandardItem(QIcon(it.second),it.first));
    }
}

void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->checkState())
        ui->listView->setModel(strModel);
    else
        ui->listView->setModel(model);
}

