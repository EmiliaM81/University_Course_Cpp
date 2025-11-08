#include "Container_2.h"
#include <iostream>


Container_2::Container_2()
{
    maxLen = 4;
    tabLen = 0;
}

int Container_2::Delete(void)
{
    if (IsEmpty())
    {
        std::cout << "#BLAD: Obiekt pusty\n";
        return 0;
    }

    int deletedEl = tab[tabLen-1];

    tabLen--;

    return deletedEl;
}


bool Container_2::IsEmpty(void)
{
    if (tabLen == 0)
    {
        return 1;
    }

    return 0;
}

bool Container_2::IsFull(void)
{
    if (tabLen == 4)
    {
        return 1;
    }

    return 0;
}

void Container_2::Add(int number)
{
    if (IsFull())
    {
        std::cout << "#BLAD: Obiekt zapelniony\n";
        return;
    }

    tab[tabLen] = number;
    tabLen++;
}

void Container_2::Print(void)
{
    std::cout << "#Zawartosc obiektu:\n";
    for (int i=0; i<tabLen; i++)
    {
        std::cout << tab[i] << ",";
    }

    std::cout << "\n";
}

int Container_2::Size(void)
{
    return tabLen;
}

void Container_2::Clear(void)
{
    tabLen = 0;
}