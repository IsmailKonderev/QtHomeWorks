#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_2->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString resText = "";

    double b = ui->lineEdit->text().toDouble();
    double c = ui->lineEdit_2->text().toDouble();
    double y = ui->lineEdit_3->text().toDouble();

    if(ui->radioButton->isChecked())
        y = y*M_PI/180;

    double res = sqrt(b*b+c*c-2*b*c*cos(y));

    resText.setNum(res);

    ui->lineEdit_4->setText(resText);

}

