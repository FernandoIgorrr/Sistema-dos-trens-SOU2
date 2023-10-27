#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"
#include "trilho.h"

namespace Ui{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void updateInterface(Trem *trem);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    //Cria os objetos Trem's
    Trem *trem1;
    Trem *trem2;
    Trem *trem3;
    Trem *trem4;
    Trem *trem5;

    //Cria os objetos Trilho's
    Trilho *trilho1;
    Trilho *trilho2;
    Trilho *trilho3;
    Trilho *trilho4;
    Trilho *trilho5;
    Trilho *trilho6;
    Trilho *trilho7;
    Trilho *trilho8;
    Trilho *trilho9;
    Trilho *trilho10;
    Trilho *trilho11;
    Trilho *trilho12;
    Trilho *trilho13;
    Trilho *trilho14;
    Trilho *trilho15;
};

#endif // MAINWINDOW_H
