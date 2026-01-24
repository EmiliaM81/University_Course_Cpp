#ifndef _TEMPERATURESTATS_H_
#define _TEMPERATURESTATS_H_

#include <iostream>
#include <vector>

class TemperatureStats {
    friend std::ostream &operator<<(std::ostream &os, const TemperatureStats &obj);
    private:
        std::vector <int> _vec;

    public:
        void operator()(int val);
};

std::ostream &operator<<(std::ostream &os, const TemperatureStats &obj);


#endif