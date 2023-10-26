#ifndef LINHA_H
#define LINHA_H

#include "direcao.h"
#include "coordenada.h"

class Linha

{

public:
    Linha();
    virtual ~Linha() {}
protected:
    int ID;
    int tamanho;
    Direcao direcao;
    Coordenada coordenada;

};

#endif // LINHA_H
