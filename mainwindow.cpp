#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tipo.h"
#include "trilho.h"
#include "coordenada.h"

 #include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cri as coordenadas das linhas
    Coordenada coordenada_linha_1(ui->label_trem1->x(),ui->label_trem1->y());


    //Cria as coordenadas dos trens
    Coordenada coordenada_trem_1(ui->label_trem1->x(),ui->label_trem1->y());

    //Ciar as linhas do trem


    //Cria o trem com seu (ID, Coordenada(x,y))
    trem1 = new Trem(1,coordenada_trem_1,ui->label_trem1);
    //trem2 = new Trem(2,Coordenada coordenada(330,30));


    /*
     * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
     * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
     * Os 3 parâmetros INT do sinal serão utilizados na função.
     * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
     * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
     */
    connect(trem1,SIGNAL(updateGUI(Trem*)),SLOT(updateInterface(Trem*)));
    //connect(trem2,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));



}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(Trem* trem){
    trem->label_trem->setGeometry(trem->getX(),trem->getY(),21,17);
    //cout << "Deu certo!!! updateInterface" << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Ao clicar, trens começam execução
 */
void MainWindow::on_pushButton_clicked()
{
    trem1->start();
   // trem2->start();
}

/*
 * Ao clicar, trens param execução
 */
void MainWindow::on_pushButton_2_clicked()
{
    trem1->terminate();
   // trem2->terminate();
}
