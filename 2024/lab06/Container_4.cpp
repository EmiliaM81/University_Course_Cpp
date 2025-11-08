#include "Container_4.h"

#include <iostream>


int Container_4::Delete(void)
{
    if (IsEmpty())
    {
        std::cout << "#BLAD: Obiekt pusty\n";
        return 0;
    }

    int deletedEl = vec.at(vec.size() -1);
    vec.pop_back();
    return deletedEl;
}


bool Container_4::IsEmpty(void)
{
    if (vec.size() == 0)
    {
        return 1;
    }

    return 0;
}

bool Container_4::IsFull(void)
{

    return 0;
}

void Container_4::Add(int number)
{
    vec.push_back(number);
}

void Container_4::Print(void)
{
    std::cout << "#Zawartosc obiektu:\n";
    
    for (int i=0; i<vec.size(); i++)
    {
        std::cout<<vec.at(i)<<",";
    }
    std::cout << "\n";
}

int Container_4::Size(void)
{
    return vec.size();
}

void Container_4::Clear(void)
{
    vec.clear();
}