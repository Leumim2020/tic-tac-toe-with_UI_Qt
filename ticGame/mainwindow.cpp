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

void MainWindow::on_pushButton_1_clicked()
{
    close();// closed the main window
}

void MainWindow::on_pushButton2_clicked()
{
   f2 = new form2(this);
   f2->show();// show the form2 with level easy
}

void MainWindow::on_pushButton_3_clicked()
{
    f3 = new form3(this);
    f3->show();// show the form2 with level medium
}


void MainWindow::on_pushButton_4_clicked()
{
    f4 = new form4(this);
    f4->show();// show the form2 with level hard
}

