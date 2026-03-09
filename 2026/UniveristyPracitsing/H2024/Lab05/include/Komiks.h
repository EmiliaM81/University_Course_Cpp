#pragma once

#include<iostream>
#include <vector>
#include <string>

#include "IKsiazka.h"

class Komiks: public IKsiazka
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
    Komiks(std::string tytul, std::string autor, int id, std::string gatunek);
    
};
