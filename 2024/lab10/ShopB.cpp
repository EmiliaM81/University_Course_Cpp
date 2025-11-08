#include "ShopB.h"



void ShopB::Print()
{
    std:: cout << "---\n";
    std:: cout << "# Zawartosc/sklad:\n";


    if (_tabSize == 0)
    {
        return;
    }

    for (int i=0; i<_tabSize; i++)
    {
        _tab[i].Print();
    }


    std::cout<<"---\n";
}

void ShopB::Remove()
{

    if (_tabSize == 0)
    {
        std::cout << "BLAD: Pusto !\n";
        return;
    }

    _tabSize--;

}

void ShopB::Add(Product prod)
{
    if (_tabSize >= _dynamicSize)
    {
        _dynamicSize *= 2;
        Product* tab = new Product[_dynamicSize];

        for (int i=0; i<_tabSize; i++)
        {
            tab[i] = _tab[i];
        }

        delete [] _tab;
        _tab = tab;
        tab = nullptr;
    }

    _tab[_tabSize] = prod;
    _tabSize++;

}

void ShopB::Clear()
{
    _tabSize = 0;
}

ShopB::ShopB()
{
    _tab = new Product [20];
    _dynamicSize = 20;
    _tabSize = 0;
}


ShopB::ShopB(const ShopB &source)
{
    _tabSize = source._tabSize;
    _dynamicSize = source._dynamicSize;

    _tab = new Product[_dynamicSize];


    for(int i = 0; i < _tabSize; i++)
    {
        _tab[i] = source._tab[i];
    }


}

ShopB& ShopB::operator=(const ShopB &rhs)
{
    if (this == &rhs)
    {
        return *this;
    }

    _tabSize = rhs._tabSize;
    _dynamicSize = rhs._dynamicSize;

    if (_tab != nullptr)
    {
        delete [] _tab;
    }

    _tab = new Product[_dynamicSize];

    for(int i=0; i<_tabSize; i++)
    {
        _tab[i] = rhs._tab[i];
    }

    return *this;

}

