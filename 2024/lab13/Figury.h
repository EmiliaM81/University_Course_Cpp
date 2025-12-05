#ifndef _FIGURY_H_
#define _FIGURY_H_

#include <vector>

#include "Figura.h"

class Figury
{
private:
    std::vector< Figura*> _vec;
public:

    void DodajFigure(Figura* obj)
    {
        _vec.push_back(obj);
    }


    void Rysuj(void) const
    {
        for (auto el: _vec)
            el->Rysuj();
    }





};
#endif