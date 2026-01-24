#include "../include/Shop.h"

Shop::Shop():
    _tab(nullptr), _size(0), _tabSize(0) {};


Shop::Shop(const Shop& shop)
{
    _size = shop._size;

    _tabSize = shop._size;

    _tab = new Product[_tabSize];

    for (int i = 0; i<_size; i++)
    {
        _tab[i] = shop._tab[i];
    }
}

Shop::~Shop()
{
    if (_tab)
        delete [] _tab;
}

void Shop::Remove()
{
    if (_size >0)
    {
        _size--;
    } else {
        std::cout << "BLAD: Pusto !\n";
    }
}

void Shop::Clear()
{
    _size = 0;
}

void Shop::Add(Product prod)
{
    if (_size +1 > _tabSize)
    {
        
        Product* tempTab = new Product[_tabSize*2];

        for (int i = 0; i< _size; i++)
        {
            tempTab[i] = _tab[i];
        }


        _tabSize*=2;

        delete [] _tab;

        _tab = tempTab;
    } 

    
    _tab[_size] = prod;

    _size++;

    
}





Shop Shop::operator-(int val)
{
    Shop shop = *this;

    for (int i = 0; i<shop._size; i++)
    {
        shop[i] = shop[i] - val;
    }

    return shop;
}

Shop Shop::operator+(int val)
{
    Shop shop = *this;

    for (int i = 0; i<shop._size; i++)
    {
        shop[i] = shop[i] + val;
    }

    return shop;    
}
Shop Shop::operator*(int val)
{
    Shop shop = *this;

    for (int i = 0; i<shop._size; i++)
    {
        shop[i] = shop[i] * val;
    }

    return shop;    
}

std::ostream &operator<<(std::ostream &os, const Shop& shop)
{
    os << "---\n";
    os << "# Zawartosc/sklad:\n";

    for (int i = 0; i<shop._size; i++ )
    {
        os << shop._tab[i];
    }

    os << "---\n";

    return os;

}


Product &Shop::operator[](int val)
{
    return _tab[val];
}

Shop& Shop::operator=(const Shop& shop)
{
    if (this == &shop)
        return *this;

    Product* newTab = new Product[shop._tabSize];

    for (int i = 0; i < shop._size; i++)
    {
        newTab[i] = shop._tab[i];
    }

    delete[] _tab;

    _tab = newTab;
    _size = shop._size;
    _tabSize = shop._tabSize;

    return *this;
}

Shop operator+(const Shop& shop1, const Shop& shop2)
{
    Shop result;
    
    result._size = shop1._size + shop2._size;
    result._tabSize = shop1._size + shop2._size;
    result._tab = new Product[result._tabSize];

    for (int i = 0; i< shop1._size; i++)
    {
        result._tab[i] = shop1._tab[i];
    }

    for (int i = shop1._size; i< result._size; i++)
    {
        result._tab[i] = shop2._tab[i - shop1._size];
    }

    return result;

}
    