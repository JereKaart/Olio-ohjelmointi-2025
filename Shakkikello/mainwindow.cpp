#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    qtimer = new QTimer(this);
    connect(qtimer,&QTimer::timeout,
            this,&MainWindow::timeout);


    ui->setupUi(this);
    connect(ui->start,&QPushButton::clicked,
            this,&MainWindow::startHandler);
    connect(ui->stop,&QPushButton::clicked,
            this,&MainWindow::stopHandler);
    ui->progressBar1->setMaximum(120);
    ui->progressBar1->setMinimum(0);

    connect(ui->sec,&QPushButton::clicked,
            this,&MainWindow::secHandler);
    connect(ui->min,&QPushButton::clicked,
            this,&MainWindow::minHandler);

    connect(ui->switch1,&QPushButton::clicked,
            this,&MainWindow::switchHandler);
    connect(ui->switch2,&QPushButton::clicked,
            this,&MainWindow::switchHandler);
    ui->label->setText("Valitse pelin pituus ja paina START");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressBar()
{

    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);
}

void MainWindow::setGameInfoText(QString, short)
{

}

void MainWindow::startHandler()
{
    qDebug()<<"startHandler";
    qtimer ->start(100);
    ui->label->setText("Aloitit pelin");
}

void MainWindow::stopHandler()
{
    qtimer->stop();
    close();
}

void MainWindow::secHandler()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar1->setMaximum(gameTime);
    ui->progressBar2->setMaximum(gameTime);
    ui->label->setText("Valitsit 120sec");
    updateProgressBar();
}

void MainWindow::minHandler()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar1->setMaximum(gameTime);
    ui->progressBar2->setMaximum(gameTime);
    ui->label->setText("Valitsit 5min");
    updateProgressBar();
}

void MainWindow::switchHandler()
{
    if(currentPlayer == 1){
        currentPlayer = 2;
    }
    else{
        currentPlayer = 1;
    }
}

void MainWindow::timeout()
{
    if(currentPlayer == 1){
        player1Time--;
        if(player1Time <= 0){
            stopHandler();
            ui->label->setText("Pelaaja2 voitti.");
        }
    }
    else{
        player2Time--;
        if(player2Time <= 0){
            stopHandler();
            ui->label->setText("Pelaaja1 voitti.");
        }
    }
    updateProgressBar();
}


