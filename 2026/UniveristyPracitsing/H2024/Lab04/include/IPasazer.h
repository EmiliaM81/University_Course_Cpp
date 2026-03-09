#pragma once 

#include <string>
#include <iostream>

class IPasazer
{
    friend std::ostream &operator<<(std::ostream &os, const IPasazer &obj)
    {
        return obj.print(os);
    }
private:
    /* data */
protected:
    std::string _imie;
    std::string _nazwisko;
    std::string _karta;




public:
    IPasazer(std::string imie, std::string nazwisko, std::string karta):
        _imie(imie), _nazwisko(nazwisko), _karta(karta) {};
    virtual ~IPasazer() = 0;

     virtual std::ostream &print(std::ostream &os) const = 0;
    virtual std::string getKarta() const
    {
        return _karta;
    }
};


inline IPasazer::~IPasazer() {}