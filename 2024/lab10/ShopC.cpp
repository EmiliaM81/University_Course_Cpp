#include "ShopC.h"



void ShopC::Print()
{
    std:: cout << "---\n";
    std:: cout << "# Zawartosc/sklad:\n";

    if (_tabSize == 0 || _tab == nullptr)
    {

        return;
    }

    int len = _tabSize;

    for (int i=0; i<len; i++)
    {
        _tab[i].Print();
    }


    std::cout<<"---\n";
}

void ShopC::Remove()
{

    if (_tabSize > 0)
        _tabSize--;  

}

void ShopC::Add(Product prod)
{
    

    if (_tabSize >= _dynamicSize)
    {
        _dynamicSize *= 2;
        Product *tab = new Product[_dynamicSize];

        for (int i=0; i<_tabSize; i++)
        {
            tab[i] = _tab[i];
        }

        if (_tab != nullptr)
            delete [] _tab;

        _tab = tab;
        tab = nullptr;
    }

    _tab[_tabSize] = prod;
    _tabSize++;
}

void ShopC::Clear()
{
    _tabSize = 0;
}

ShopC::ShopC()
{
    _dynamicSize = 20;
    _tabSize = 0;
    _tab = new Product[_dynamicSize];
}




ShopC::ShopC(const ShopC &source)
{
    _dynamicSize = source._dynamicSize;
    _tabSize = source._dynamicSize;

    _tab = new Product [_dynamicSize];

    for (int i=0; i<_tabSize; i++)
    {
        _tab[i] = source._tab[i];
    }
}


    
ShopC::~ShopC()
{
    if (_tab != nullptr)
    {
        delete [] _tab;
    }

    _tab = nullptr;

}



ShopC& ShopC::operator=(ShopC&& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }

    if (_tab != nullptr)
    {
        delete [] _tab;
    }

    _tabSize = rhs._tabSize;
    _dynamicSize = rhs._dynamicSize;

    _tab = rhs._tab;

    rhs._tab = nullptr;
    rhs._dynamicSize =0;
    rhs._tabSize = 0;



    return *this;
}




ShopC::ShopC(ShopC &&source)
{
    _tab = source._tab;
    _dynamicSize = source._dynamicSize;
    _tabSize = source._tabSize;

    source._tab = nullptr;
}





ShopC& ShopC::operator=(const ShopC &rhs)
{
    if (this == &rhs)
    {
        return *this;
    }

    if (_tab != nullptr)
    {
        delete [] _tab;
    }

    _tabSize = rhs._tabSize;
    _dynamicSize = rhs._dynamicSize;

    _tab = new Product[_dynamicSize];

    for (int i=0; i<_tabSize; i++)
    {
        _tab[i] = rhs._tab[i];
    }

    return *this;
}