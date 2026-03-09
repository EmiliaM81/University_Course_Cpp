#pragma once
#include <iostream>


#include "Figura.h"

class Trojkat : public Figura
{

private:
    double _a;
    double _b;
    double _c;



public:
    Trojkat(double _a, double _b, double _c):
        _a(_a), _b(_b), _c(_c) {};
    ~Trojkat() = default;

    inline double Pole() override
    {
        double x = Obwod()/2;
        return sqrt(x*(x-_a)*(x-_b)*(x-_c));
    }

    inline double Obwod() override
    {
        return _a + _b + _c;
    }

    friend std::ostream& operator<<(std::ostream &os, Trojkat &obj)
    {
        os << "Trojkat o bokach a=" << obj._a << ", b="<< obj._b << ", c=" << obj._c <<", Pole: " << obj.Pole() << ", Obwód: " << obj.Obwod();
        return os;
    }
};
