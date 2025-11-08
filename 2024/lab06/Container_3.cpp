#include "Container_3.h"
#include <iostream>


Container_3::Container_3()
{
    maxCapacity =4;
    tabLen = 0;
    tab = new int[maxCapacity];
}

Container_3::Container_3(int size)
{
    maxCapacity =size;
    tabLen = 0;
    tab = new int[maxCapacity];
}

Container_3::~Container_3()
{
    delete [] tab;
}

int Container_3::Delete(void)
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

bool Container_3::IsEmpty(void)
{
    if (tabLen == 0)
    {
        return 1;
    }

    return 0;
}

bool Container_3::IsFull(void)
{
    if (tabLen == maxCapacity)
    {
        return 1;
    }

    return 0;
}

void Container_3::Add(int number)
{

    tabLen++;


    if (tabLen > maxCapacity)
    {
        maxCapacity = maxCapacity*2;

        int * newTab = new int [maxCapacity];


        for (int i=0; i<tabLen; i++)
        {
            newTab[i] = tab[i];
        }

        delete [] tab;

        tab = newTab;


        
    }

    tab[tabLen-1] = number;

}

void Container_3::Print(void)
{
    std::cout << "#Zawartosc obiektu:\n";
    for (int i=0; i<tabLen; i++)
    {
        std::cout << tab[i] << ",";
    }

    std::cout << "\n";
}

int Container_3::Size(void)
{
    return tabLen;
}

void Container_3::Clear(void)
{
    tabLen = 0;
    
}