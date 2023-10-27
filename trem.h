#ifndef TREM_H
#define TREM_H

#include "coordenada.h"
#include "trilho.h"
#include "direcao.h"


#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

#include <list>
#include <QThread>

using namespace std;
/*
 * Classe Trem herda QThread
 * Classe Trem passa a ser uma thread.
 * A função START inicializa a thread. Após inicializada, a thread irá executar a função RUN.
 * Para parar a execução da função RUN da thread, basta executar a função TERMINATE.
 *
*/
class Trem: public QThread{
 Q_OBJECT
public:
    Trem(int,Coordenada,QLabel*);  //construtor
    void run();         //função a ser executada pela thread

    void move();
    bool mudar_direcao();
    bool checkVelocidade(int);

    void setVelocidade(int);

    int getX();
    int getY();

    QLabel* label_trem;

//Cria um sinal
signals:
    void updateGUI(Trem *trem);

private:
   int ID;          //ID do trem
   Coordenada coordenada; // posição x,y do trem na tela
   //list<Trilho> trilhos; // lista de trilhos que o trem vai andar
   //Trilho trilho_atual; // o trilho atual onde o trem ta passando
   Direcao direcao;// direção ao qual o trem vai andar;
   int velocidade;  //Velocidade. É o tempo de dormir em milisegundos entre a mudança de posição do trem
};

#endif // TREM_H
