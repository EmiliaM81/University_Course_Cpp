#include "Product.h"
#include <iostream>

void Product::Print()
{
    std::cout << "typ: " << typ <<", ilosc sztuk: " << ileSztuk << "\n";

}

Product::Product()
{
    typ = 0;
    ileSztuk = 0;
}

Product::Product(int typN)
{
    typ = typN;
    ileSztuk = 0;
}


Product::Product(int typN, int ileSztukN)
{
    typ = typN;
    ileSztuk = ileSztukN;
}


void Product::SetCard(int number)
{
    ileSztuk = number;
}


std::string Product::ToString()
{
    std::string s1 = "<typ=";
    std::string s2 = ", ilosc =>";
    std::string s3 = std::to_string(typ);
    std::string s4 = std::to_string(ileSztuk);


    std::string str = s1 + s3 +s2 + s4;

    return str;
}

Product::operator int()
{
    return typ;
}

Product::operator std::string()
{
    return this->ToString();
}


int Compare(Product p1, Product p2)
{
    if( p1.ileSztuk > p2.ileSztuk)
    {
        return 1;
    }

    if( p1.ileSztuk < p2.ileSztuk)
    {
        return -1;
    }

    return 0;

}

