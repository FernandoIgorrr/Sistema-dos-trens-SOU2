#include "coordenada.h"

Coordenada::Coordenada(){
    this->x = 0;
    this->y = 0;
}

Coordenada::Coordenada(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Coordenada::setX(int x)
{
    this->x = x;
}
void Coordenada::setY(int y)
{
    this->y = y;
}


int Coordenada::getX()
{
    return x;
}
int Coordenada::getY()
{
    return y;
}
