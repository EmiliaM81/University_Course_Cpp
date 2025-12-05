#include "Product.h"

std::ostream &operator<<(std::ostream &os, const Product &obj)
{
    os << "typ: " << obj._typ << " ilosc sztuk: " << obj._ileSztuk << "\n";
    return os;
}

Product::Product(int typ, int ileSztuk):
    _typ {typ}, _ileSztuk {ileSztuk} 
    {};



Product Product::operator-(int x)  
{
    Product temp = *this;

    if (temp._ileSztuk - x >= 0)
    {
        temp._ileSztuk -= x;
    } else {
        temp._ileSztuk = 0;
    }

    return temp;
    
}

Product Product::operator+(int x)  
{
    Product temp = *this;

    temp._ileSztuk +=x;

    return temp;
    
}

Product Product::operator*(int x)
{   
    Product temp = *this;
    temp._ileSztuk *= x;

    return temp;
    
}


Product& Product::operator++()
{
    ++_ileSztuk;
    return *this;
}   



Product Product::operator++(int)
{
    Product temp = *this;
    _ileSztuk++;
    return temp;
}

Product& Product::operator--()
{
    if (_ileSztuk >= 1)
        --_ileSztuk;
    return *this;
}



Product Product::operator--(int)
{
    Product temp = *this;

    if (_ileSztuk >= 1)
        _ileSztuk--;

    return temp;
}




