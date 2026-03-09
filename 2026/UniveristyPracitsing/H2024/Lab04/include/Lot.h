#pragma once 

#include "PasazerBiznesowy.h"
#include "PasazerPremiumEconomy.h"
#include "PasazerEkonomiczny.h"

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Lot
{
private:
    std::vector<IPasazer*> _pasazerowie;
    std::string _nrLotu;
    std::string _data;
    std::string _skad;
    std::string _gdzie;

public:
    Lot(std::string nrLotu, std::string data, std::string skad, std::string gdzie):
        _nrLotu(nrLotu), _data(data), _skad(skad), _gdzie(gdzie) {};

    ~Lot()
    {
        for (IPasazer* pasazer: _pasazerowie)
        {
            delete pasazer;
        }
    }


    void rezerwujBilet(IPasazer* pasazer)
    {
        _pasazerowie.push_back(pasazer);
    }

    std::string getNumerLotu()
    {
        return _nrLotu;
    }

    void wyswietlRezerwacje()
    {
        for (IPasazer* pasazer: _pasazerowie)
        {
            std::cout << *pasazer;
        }
    }

    void zwolnijPojedynczegoPaszera(std::string karta)
    {
        auto it = std::remove_if(_pasazerowie.begin(), _pasazerowie.end(),
            [karta](IPasazer* pasazer)
            {
                if (pasazer->getKarta() == karta)
                {
                    delete pasazer;   // zwolnienie pamięci
                    return true;      // oznacz do usunięcia z wektora
                }
                return false;
            });

        _pasazerowie.erase(it, _pasazerowie.end());

    }

    void zwolnijWszystkichPaszazerow()
    {
        for (IPasazer* pasazer: _pasazerowie)
        {
            delete pasazer;
            pasazer = nullptr;
        }
        
        _pasazerowie.clear();
    }
};


