#include "trem.h"
#include <QtCore>

//Construtor
Trem::Trem(int ID, Coordenada coordenada, QLabel *label_trem){
    this->ID            = ID;
    this->coordenada    = coordenada;
    this->direcao       = Direcao::DIREITA;
    this->label_trem    = label_trem;
    velocidade          = 100;
}

//Função a ser executada após executar trem->START
void Trem::run()
{
    while(true)
    {
        move();
        emit updateGUI(this);    //Emite um sinal
        msleep(velocidade);
    }
}

bool Trem::mudar_direcao(){
    return false;
}

void Trem::move(){
    switch(direcao)
    {
        case Direcao::DIREITA:
            coordenada.setX(getX()+10);
            break;
        case Direcao::BAIXO:
            coordenada.setY(getY()+10);
            break;
        case Direcao::ESQUERDA:
            coordenada.setX(getX()-10);
            break;
        case Direcao::CIMA:
            coordenada.setY(getY()-10);
            break;
    }
    //emit updateGUI(this);
}

bool Trem::checkVelocidade(int velocidade){
    if(velocidade > 125)
            return false;
    if(velocidade < 75)
            return false;
    return true;
}

void Trem::setVelocidade(int velocidade){
    if(checkVelocidade(velocidade))
    this->velocidade = velocidade;
}

int Trem::getX(){
    return coordenada.getX();
}

int Trem::getY(){
    return coordenada.getY();
}
