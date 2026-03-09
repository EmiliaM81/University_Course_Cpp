#pragma once 
#include <iostream> 

using namespace std;

//interfejs;
class SugarDaddy{
public:
    //virtual metoda ktora jest "wzorcem" dla obliczenia Pola dla wszystkich "dzieci" tej klasy, interfejs
    virtual double Pole() = 0;
    //virtual metoda ktora jest "wzorcem" dla obliczenia Obwodu dla wszystkich "dzieci" tej klasy, interfejs
    virtual double Obwod() = 0;
private:
};
