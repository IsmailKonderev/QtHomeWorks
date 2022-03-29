#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

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
    QString textRes;

    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double c = ui->lineEdit_3->text().toDouble();

    double D = b*b - 4 * a * c;

    if(!a){
        textRes.setNum(c*(-1));
        ui->lineEdit_4->setText(textRes);
        ui->lineEdit_5->setText(textRes);
    }
    else if(D < 0) {
        ui->lineEdit_4->setText("Нет корней");
        ui->lineEdit_5->setText("Нет корней");
    }
    else if(!D){
        double x = (b/(2*a)) * -1;
        textRes.setNum(x);
        ui->lineEdit_4->setText(textRes);
        ui->lineEdit_5->setText(textRes);
    }
    else{
        double x = ((b * -1) - sqrt(D)) / (2 * a);
        textRes.setNum(x);
        ui->lineEdit_4->setText(textRes);
        x = ((b * -1) + sqrt(D)) / (2 * a);
        textRes.setNum(x);
        ui->lineEdit_5->setText(textRes);
    }
}
