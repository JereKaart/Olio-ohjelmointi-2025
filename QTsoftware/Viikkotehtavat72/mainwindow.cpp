#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(1)
    , operand(-1)
{
    ui->setupUi(this);

    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);

    connect(ui->add0, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub1, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul2, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div3, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClickHandler()
{

}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(1);

    if(state == 1)
    {
        QString t = ui->num1->text();
        t = t + numberName.at(1);

        ui->num1->setText(t);
    }
    else
    {
        QString t = ui->num2->text();
        t = t + numberName.at(1);

        ui->num2->setText(t);
    }

}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString buttonName = button->objectName();
    qDebug() << buttonName;

    if (buttonName == "clear")
    {
        resetLineEdits();
    }
    else if (buttonName == "enter")
    {
        Number1 = ui->num1->text();
        Number2 = ui->num2->text();
        bool nro1, nro2;
        float tulos1 = Number1.toFloat(&nro1);
        float tulos2 = Number2.toFloat(&nro2);

        switch (operand) {
        case 0: result = tulos1 + tulos2; break;
        case 1: result = tulos1 - tulos2; break;
        case 2: result = tulos1 * tulos2; break;
        case 3: if (tulos2 != 0) result = tulos1 / tulos2;
        }
        ui->result->setText(QString::number(result));
}
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString op = button->objectName();
    qDebug() << op;

    if(op == "add0") operand = 0;
    else if (op == "sub1") operand = 1;
    else if (op == "mul2") operand = 2;
    else if (op == "div3") operand = 3;

    state = 2;
}

void MainWindow::resetLineEdits()
{
    Number1.clear();
    Number2.clear();
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    state = 1;
    operand = -1;
}
