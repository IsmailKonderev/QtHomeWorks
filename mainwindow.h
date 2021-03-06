#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QStyleOptionViewItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;


    QStandardItemModel* model;
    QList<QStandardItem*> list1;
    QList<QStandardItem*> list2;
    QList<QStandardItem*> list3;
    QList<QStandardItem*> list4;
};
#endif // MAINWINDOW_H
