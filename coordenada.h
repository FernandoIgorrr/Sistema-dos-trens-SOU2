#ifndef COORDENADA_H
#define COORDENADA_H


class Coordenada
{

    private:
        int x;
        int y;

    public:
        Coordenada(int,int);
        Coordenada();

        void setX(int);
        void setY(int);

        int getX();
        int getY();

};
#endif // COORDENADA_H
