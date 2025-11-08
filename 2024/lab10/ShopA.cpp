#include "ShopA.h"



void ShopA::Print()
{
    std:: cout << "---\n";
    std:: cout << "# Zawartosc/sklad:\n";


    int len = _tabSize;

    for (int i=0; i<len; i++)
    {
        _tab[i].Print();
    }


    std::cout<<"---\n";
}

void ShopA::Remove()
{

    if (_tabSize == 0)
    {
        std::cout << "BLAD: Pusto !\n";
        return;
    }

    _tabSize--;

}

void ShopA::Add(Product prod)
{
    _tab[_tabSize] = prod;
    _tabSize++;
}

void ShopA::Clear()
{
    _tabSize = 0;
}

ShopA::ShopA()
{

}



