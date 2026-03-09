#pragma once

#include<iostream>
#include <vector>
#include <string>

#include "IKsiazka.h"

class Czasopismo: public IKsiazka
{
private:
    /// @brief Konstruktor
    /// @param tytul - Tytuł
    /// @param autor - Autor
    /// @param id - ID
    /// @param gatunek - Gatunek 
    /// @param nrPolki - Numer Połki
    
public:
    //Czasopismo(/* args */);
    //~Czasopismo();
    Czasopismo(std::string tytul, std::string autor, int id, std::string gatunek);
    
};


