#include "Functor.h"
#include <iostream>

void Functor::wypiszStatystyki(void)
{
    std::cout << "Liczba porownan:\n";
    std::cout << "'a' mniejsze 'b': "<< mniejsze << "\n";
    std::cout << "'a' rowne 'b': "<< rowne << "\n";
    std::cout << "'a' wieksze 'b': "<< wieksze << "\n";

}

bool Functor::operator()(int a, int b)
{
    if (a<b)
    {
        mniejsze++;
    } else if (a>b) {
        wieksze++;
    } else {
        rowne++;
    }


    return a< b;
}

Functor::Functor()
{
    mniejsze = 0;
    wieksze = 0;
    rowne = 0;
}

