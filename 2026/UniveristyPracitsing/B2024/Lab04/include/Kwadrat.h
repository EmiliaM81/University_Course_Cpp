#pragma once
#include <iostream>


#include "Figura.h"

class Kwadrat : public Figura
{

private:
    double _r;

public:
    Kwadrat(double _r):
        _r(_r) {};
    ~Kwadrat() = default;

    inline double Pole() override
    {
        return _r*_r;
    }

    inline double Obwod() override
    {
        return 4*_r;
    }

    friend std::ostream& operator<<(std::ostream &os, Kwadrat &obj)
    {
        os << "Kwadrat o boku a=" << obj._r << ", Pole: " << obj.Pole() << ", Obwód: " << obj.Obwod();
        return os;
    }
};

