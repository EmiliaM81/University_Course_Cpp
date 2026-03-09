#pragma once
#include <iostream>
#include <cmath>

#include "Figura.h"

class Kolo : public Figura
{

private:
    double _r;

public:
    Kolo(double _r):
        _r(_r) {};
    ~Kolo() = default;

    inline double Pole() override
    {
        double pole = _r*_r*M_PI;
        return pole;
    }

    inline double Obwod() override
    {
        double obw = 2*_r*M_PI;
        return obw;
    }

    friend std::ostream& operator<<(std::ostream &os, Kolo &obj)
    {
        os << "Koło o promieniu a=" << obj._r << ", Pole: " << obj.Pole() << ", Obwód: " << obj.Obwod();
        return os;
    }
};


