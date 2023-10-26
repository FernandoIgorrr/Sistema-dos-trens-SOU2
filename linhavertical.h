#ifndef LINHAVERTICAL_H
#define LINHAVERTICAL_H

#include "linha.h"
#include "direcao.h"
#include "coordenada.h"

class LinhaVertical: Linha
{
public:
    LinhaVertical(int, int, Direcao, Coordenada);
};

#endif // LINHAVERTICAL_H
