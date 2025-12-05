#include "Shop.h"


std::ostream& operator<<(std::ostream &os, const Shop &obj)
{
    os << "---\n";

    os << "# Zawartosc/sklad:\n";

    if (obj.vec.empty())
    {
        os << "---\n";
        os << "BLAD: Pusto !\n";
        return os;
    }


    for (const auto & var: obj.vec)
    {
        os << var;
        
    }
    
    os << "---\n";


    return os;
}



void Shop::Remove()
{
    if (!vec.empty()) {
        vec.pop_back();
    }
}

void Shop::Add(Product prod)
{
    vec.push_back(prod);
}


void Shop::Clear()
{
    vec.clear();
}

Product& Shop::operator[](int index)
{
    return vec.at(index);
}

Shop Shop::operator-(int value)
{
    Shop temp = *this;

    for (auto& el: temp.vec)
    {
        el = el - value;
    }

    return temp;
    


}


Shop Shop::operator+(int value)
{
    Shop temp = *this;

    for (auto& el: temp.vec)
    {
        el = el + value;
    }

    return temp;
    


}
