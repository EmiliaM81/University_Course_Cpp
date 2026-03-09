#pragma once
#include <iostream>


#include "Figura.h"

class Prostokat : public Figura
{

private:
    double _a;
    double _b;


public:
    Prostokat(double _a, double _b):
        _a(_a), _b(_b) {};
    ~Prostokat() = default;

    inline double Pole() override
    {
        return _a*_b;
    }

    inline double Obwod() override
    {
        return 2*_a + 2*_b;
    }

    friend std::ostream& operator<<(std::ostream &os, Prostokat &obj)
    {
        os << "Prostokąt o bokach a=" << obj._a << ", b="<< obj._b << ", Pole: " << obj.Pole() << ", Obwód: " << obj.Obwod();
        return os;
    }
};
