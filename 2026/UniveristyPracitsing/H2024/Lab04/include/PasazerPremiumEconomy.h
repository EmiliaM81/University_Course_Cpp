#pragma once 

#include "IPasazer.h"

class PasazerPremiumEconomy : public IPasazer
{
private:
    bool _salonVIP;;
public:
    PasazerPremiumEconomy(std::string imie, std::string nazwisko, std::string karta, bool salonVIP):
        IPasazer(imie, nazwisko, karta), _salonVIP(salonVIP) {}
    ~PasazerPremiumEconomy() = default;

    std::ostream &print(std::ostream &os) const override
    {
        os << "Jestem pasażerem Premium Economy.\n";
        os << "Mam na imię: " + _imie + " " + _nazwisko +" i moj nr karty kredytowej to: "+ _karta + "\n";
        if (_salonVIP)
            os << "Posiadam dostęp do Salonu VIP.\n\n";
        return os;
    }
};

