#ifndef TRILHO_H
#define TRILHO_H

#include "tipo.h"
#include "coordenada.h"

class Trilho

{

public:
    Trilho(int, int, Tipo, Coordenada);
    virtual ~Trilho() {}

protected:
    int ID; // id da linha
    int tamanho; // tamanho da linha que vai ser padrão
    Tipo tipo; // se é vertical ou horizontal
    Coordenada coordenada; // e as coordenadas para desenhá-la
};

#endif // TRILHO_H
