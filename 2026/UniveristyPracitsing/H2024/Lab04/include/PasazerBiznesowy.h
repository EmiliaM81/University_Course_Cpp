#pragma once 

#include "IPasazer.h"

class PasazerBiznesowy : public IPasazer
{
private:
    int _konto;
public:
    PasazerBiznesowy(std::string imie, std::string nazwisko, std::string karta, int konto):
        IPasazer(imie, nazwisko, karta), _konto(konto) {}
    ~PasazerBiznesowy() = default;

    std::ostream &print(std::ostream &os) const override
    {
        os << "Jestem pasażerem biznesowym.\n";
        os << "Mam na imię: " + _imie + " " + _nazwisko +" i moj nr karty kredytowej to: "+ _karta + "\n";
        os << "Stan konta: " << _konto << "\n\n";
        return os;
    }


};

