#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ClickHandler();
    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();


private:
    Ui::MainWindow *ui;
    QString Number1,Number2;
    int state;
    float result;
    short operand;
    void resetLineEdits();
};
#endif // MAINWINDOW_H
