#include "Product.h"
#include <iostream>

void Product::Print()
{
    std::cout << "typ: " << typ <<", ilosc sztuk: " << ileSztuk << "\n";

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

