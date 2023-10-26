#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"
#include "linha.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void updateInterface(int,int,int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    //Cria os objetos TREM's
    Trem *trem1;
    Trem *trem2;
    Trem *trem3;
    Trem *trem4;
    Trem *trem5;

    Linha *linha1;
    Linha *linha2;
    Linha *linha3;
    Linha *linha4;
    Linha *linha5;
    Linha *linha6;
    Linha *linha7;
    Linha *linha8;
    Linha *linha9;
    Linha *linha10;
};

#endif // MAINWINDOW_H
