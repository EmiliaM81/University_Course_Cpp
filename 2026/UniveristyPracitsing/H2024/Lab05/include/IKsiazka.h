#pragma once

#ifndef IKSIAZKA_H
#define IKSIAZKA_H

#include<iostream>
#include <vector>
#include <string>
/// @brief 
class IKsiazka
{
    private:
    std::string Tytul;
    std::string Autor;
    int ID;
    std::string Gatunek;  
    int NrPolki;
    mutable bool Wypozyczona;
    std::vector<float> Ocena;
    

    public: 



    /// @brief Konstruktor - wypełnia składowe predefiniowanymi wartościami.
    IKsiazka();

    /// @brief Konstruktor
    /// @param tytul - Tytuł
    /// @param autor - Autor
    /// @param id - ID
    /// @param gatunek - Gatunek 
    /// @param nrPolki - Numer Połki
    IKsiazka(std::string tytul, std::string autor, int id, std::string gatunek);
    
    /// @brief Wyswietla informacje o ksiazce
    virtual void wyswietlInformacje() const;

    /// @brief getter func
    /// @return Zwraca wartość składowej Tytuł 
    std::string getTitle() const;
    
    /// @brief Zwraca status wypozyczenia ksiazki
    /// @return Wypozyczona value
    bool getStatus() const;

    /// @brief Dodaje ocene do ksiazki
    /// @param rating - Ocena ksiazki
    void addRating(float rating);

    /// @brief getter func
    /// @return ID
    int getID();

    /// @brief oblicza i zwraca ocene ksiazki
    /// @return ocena
    std::string getRatingStr() const;

    /// @brief zmienia wartość składowej Wypozyczona
    void toogleWypozyczona() const;

    /// @brief Wyswietla pelne informacje o obiekcie
    void displayBook() const;

};



#endif