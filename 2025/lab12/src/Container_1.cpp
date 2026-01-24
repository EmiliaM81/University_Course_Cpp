#include "../include/Container_1.h"

int Container_1::Delete()
{
    if (IsEmpty())
    {
        std::cout << "#BLAD: Obiekt pusty\n";
        return 0; 
    }



    for (int i = 1; i< _currSize; i++)
    {
        _tab[i-1] = _tab[i];
    }

    _currSize--;
    return 1;
   
}

bool Container_1::IsEmpty()
{
    if (_currSize == 0)
        return true;
    else
        return false;
}
bool Container_1::IsFull()
{
    if (_currSize == 4)
        return true;
    else
        return false;
}

void Container_1::Add(int num)
{
    if (IsFull())
    {
        std::cout << "#BLAD: Obiekt zapelniony\n";
        return;
    }

    _tab[_currSize] = num;
    _currSize++;
}

void Container_1::Print()
{

    std::cout << "#Zawartosc obiektu: \n";
    for (int i = 0; i<_currSize; ++i)
    {
        std::cout << _tab[i] << ",";
    }
    std::cout << "\n";
}

int Container_1::Size()
{
    return _currSize;
}

void Container_1::Clear()
{
    _currSize = 0;
}