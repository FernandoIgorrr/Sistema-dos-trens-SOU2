#ifndef LINHAHORIZONTAL_H
#define LINHAHORIZONTAL_H

#include "linha.h"
#include "direcao.h"
#include "coordenada.h"

class LinhaHorizontal: Linha
{
public:
    LinhaHorizontal(int, int, Direcao, Coordenada);
};

#endif // LINHAHORIZONTAL_H
