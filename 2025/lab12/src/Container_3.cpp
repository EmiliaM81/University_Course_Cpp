#include "../include/Container_3.h"


Container_3::Container_3(int size):
 _currSize(0), _tab(new int[size]), _tabSize(size){
    

}

int Container_3::Delete()
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
bool Container_3::IsEmpty()
{
    if (_currSize == 0)
        return true;
    else
        return false;
}

bool Container_3::IsFull()
{
    if (_currSize == _tabSize)
        return true;
    else
        return false;
}

void Container_3::Add(int num)
{
    if (IsFull())
    {
        _tabSize*=2;
        int* newTab = new int[_tabSize];

        for (int i = 0; i< _currSize; i++)
        {
            newTab[i] = _tab[i];

        }

        delete [] _tab;
        _tab = newTab;

    }

    _tab[_currSize] = num;
    _currSize++;
}
void Container_3::Print()
{    std::cout << "#Zawartosc obiektu: \n";
    for (int i = 0; i<_currSize; ++i)
    {
        std::cout << _tab[i] << ",";
    }
    std::cout << "\n";
}

int Container_3::Size()
{
    return _currSize;
}

void Container_3::Clear()
{
    _currSize = 0;
}

Container_3::~Container_3()
{
    delete [] _tab;
}
