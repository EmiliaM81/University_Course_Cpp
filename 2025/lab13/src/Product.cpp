#include "Product.h"


Product::Product(int type, int count) :
    _type(type), _count(count) {};

Product::Product():
    _type(0), _count(0) {};


Product Product::operator+(int val)
{
    return Product(_type, _count + val);
}

Product Product::operator-(int val)
{
    if (_count - val >= 0)
        return Product(_type, _count - val);
    
    return Product(_type, 0);
}

Product Product::operator*(int val)
{
    return Product(_type, _count * val);
}

std::ostream &operator<<(std::ostream &os, const Product& prod)
{
    return os << "typ: " << prod._type << " ilosc sztuk: " << prod._count << "\n";
}

Product operator*(int val, Product const &prod)
{
    return Product(prod._type, prod._count * val);
}



