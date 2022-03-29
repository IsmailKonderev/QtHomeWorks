#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->textEdit_2->setText(ui->textEdit_2->toPlainText()+ui->textEdit->toPlainText());
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setText(ui->textEdit_2->toPlainText());
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->setHtml("<fontcolor='red'>Hello</font>");
}
