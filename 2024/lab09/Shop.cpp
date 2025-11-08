#include "Shop.h"



void Shop::Print()
{
    std:: cout << "---\n";
    std:: cout << "# Zawartosc/sklad:\n";


    int len = vec.size();

    for (int i=0; i<len; i++)
    {
        vec.at(i).Print();
    }


    std::cout<<"---\n";
}

void Shop::Remove()
{

    if (vec.size() == 0)
    {
        std::cout << "BLAD: Pusto !\n";
        return;
    }

    vec.pop_back();

}

void Shop::Add(Product prod)
{
    vec.push_back(prod);
}

void Shop::Clear()
{
    vec.clear();
}

Shop::Shop()
{
    
}

    
Shop::Shop(Product prod1)
{
    Add(prod1);
}

Shop::Shop(Product prod1, Product prod2)
{
    Add(prod1);
    Add(prod2);
}

Shop::Shop(std::vector <Product> newVec )
{
    vec = newVec;
}


Shop::Shop(int len, Product** prodPtr )
{
    
    for (int i=0; i<len; i++)
    {
        vec.push_back( *prodPtr[i]);
    }
}


Shop::operator int()
{
    int sum = 0;

    for (Product every: vec)
    {
        sum += every.ileSztuk;
    }


    return sum;
}


