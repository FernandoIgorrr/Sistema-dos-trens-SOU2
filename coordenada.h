#ifndef COORDENADA_H
#define COORDENADA_H


class Coordenada
{
public:
    Coordenada(int,int);
    Coordenada();

    int getX();
    int getY();
    void setX(int);
    void setY(int);

private:
    int x;
    int y;

};

#endif // COORDENADA_H
