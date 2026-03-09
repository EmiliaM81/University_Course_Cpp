#include "IKsiazka.h"

IKsiazka::IKsiazka() : Tytul(""), Autor(""), ID(-10), Gatunek(""), NrPolki(-10), Wypozyczona(false) {}
IKsiazka::IKsiazka(std::string tytul, std::string autor, int id, std::string gatunek) : Tytul(tytul), Autor(autor), ID(id), Gatunek(gatunek), NrPolki(-10), Wypozyczona(false) {}

void IKsiazka::wyswietlInformacje() const
{

    std::cout << "- " << Tytul << ", " << Autor << ", " << Gatunek << ", " << IKsiazka::getRatingStr() << std::endl;
}

std::string IKsiazka::getTitle() const
{
    return Tytul;
}

int IKsiazka::getID()
{
    return ID;
}

bool IKsiazka::getStatus() const
{
    return Wypozyczona;
}

void IKsiazka::addRating(float rating)
{
    Ocena.push_back(rating);
}

std::string IKsiazka::getRatingStr() const
{
    float suma = 0.0;
    if (Ocena.size() > 0)
    {
        for (float elem : Ocena)
        {
            suma += elem;
        }
        return std::to_string(suma / Ocena.size());
    }
    else
    {
        return "Brak ocen";
    }
}

void IKsiazka::toogleWypozyczona() const
{
    if (Wypozyczona)
        Wypozyczona = false;
    else
        Wypozyczona = true;
}
void IKsiazka::displayBook() const
{
    std::cout << "Tytuł: " << Tytul << std::endl;
    std::cout << "Autor: " << Autor << std::endl;
    std::cout << "ID Ksiazki: " << ID << std::endl;
    std::cout << "Gatunek: " << Gatunek << std::endl;
    std::cout << "Na półce: " << NrPolki << std::endl;
    std::cout << "Status: " << (Wypozyczona ? "Niedostępna" : "Dostępna") << std::endl;
    std::cout << std::endl;
}