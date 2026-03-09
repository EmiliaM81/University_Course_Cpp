#pragma once 

#include "IPasazer.h"

class PasazerEkonomiczny : public IPasazer
{
private:
 
public:
    PasazerEkonomiczny(std::string imie, std::string nazwisko, std::string karta):
        IPasazer(imie, nazwisko, karta) {}
    ~PasazerEkonomiczny() = default;

    std::ostream &print(std::ostream &os) const override
    {
        os << "Jestem pasażerem ekonomicznym.\n";
        os << "Mam na imię: " + _imie + " " + _nazwisko +" i moj nr karty kredytowej to: "+ _karta + "\n\n";

        return os;
    }
};

