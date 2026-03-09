#pragma once 

#include <iostream>

class Calculator
{
private:
    int _res;
public:
    Calculator(int init):
        _res(init) {};

    ~Calculator() = default;

    int operator()()
    {
        return _res;
    }

    int operator()(std::function<int(int)> f)
    {
        return f(_res);
    }

    int operator()(std::function<int(int, int)> f, int val)
    {
        return f(_res, val);
    }

    Calculator operator++(int)
    {
        Calculator newCalc(_res);
        _res++;
        return newCalc;
    }

    Calculator& operator--()
    {
        _res--;
        return *this;
    }

    Calculator& operator*(int val)
    {
        _res *= val;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Calculator &obj)
    {
        os << obj._res;
        return os;
    }

    friend Calculator& operator*(int val, Calculator &obj)
    {
       obj._res *= val;
       return obj;
    }



};

