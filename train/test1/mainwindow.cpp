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

int firstnum , secondnum , result;


void MainWindow::on_btnadd_clicked()
{
    firstnum = ui -> txtfirstnum -> text() .toInt();
    secondnum = ui -> txtsecondnum -> text() .toInt();
    result = firstnum + secondnum ;
    ui -> txtresult -> setText(QString::number(result));

}



void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}


void MainWindow::on_btnsubtract_clicked()
{
    firstnum = ui -> txtfirstnum -> text() .toInt();
    secondnum = ui -> txtsecondnum -> text() .toInt();
    result = firstnum - secondnum ;
    ui -> txtresult -> setText(QString::number(result));
}


void MainWindow::on_btnDivide_clicked()
{
    firstnum = ui -> txtfirstnum -> text() .toInt();
    secondnum = ui -> txtsecondnum -> text() .toInt();
    result = firstnum / secondnum ;
    ui -> txtresult -> setText(QString::number(result));
}


void MainWindow::on_btnMultipy_clicked()
{
    firstnum = ui -> txtfirstnum -> text() .toInt();
    secondnum = ui -> txtsecondnum -> text() .toInt();
    result = firstnum * secondnum ;
    ui -> txtresult -> setText(QString::number(result));
}

