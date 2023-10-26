#include "coordenada.h"

Coordenada::Coordenada(){};
Coordenada::Coordenada(int x, int y)
{
    this->x = x;
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
void Coordenada::setX(int x)
{
    this->x = x;
}
void Coordenada::setY(int y)
{
    this->y = y;
}
