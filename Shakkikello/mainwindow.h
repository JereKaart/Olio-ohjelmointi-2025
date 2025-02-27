#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
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

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime = 120;
    void updateProgressBar();
    void setGameInfoText(QString,short);
    QTimer *qtimer;

private slots:
    void startHandler();
    void stopHandler();
    void secHandler();
    void minHandler();
    void switchHandler();
    void timeout();

};
#endif // MAINWINDOW_H
