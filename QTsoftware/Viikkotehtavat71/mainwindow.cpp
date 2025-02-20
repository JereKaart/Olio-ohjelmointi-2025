#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Count,&QPushButton::clicked,
            this,&MainWindow::clickHandler);

    connect(ui->Reset,&QPushButton::clicked,
          this,&MainWindow::resetclickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickHandler()
{
    counter++;
    QString t = QString :: number(counter);
    ui->tekstiLaatikko->setText(t);
}

void MainWindow::resetclickHandler()
{
    counter = 0;
    //QString t = QString :: number(counter);
    ui->tekstiLaatikko->setText(QString :: number(counter));
}
