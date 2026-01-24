#include "../include/TemperatureStats.h"



void TemperatureStats::operator()(int val)
{
    _vec.push_back(val);
}

std::ostream &operator<<(std::ostream &os, const TemperatureStats &obj)
{
    int count = obj._vec.size();

    int sum = 0;

    for (int el: obj._vec)
    {
        sum += el;
    }

    int min = obj._vec.at(0);

    for (int el: obj._vec)
    {
        min = std::min(el, min);
    }

    int max = obj._vec.at(0);

    for (int el: obj._vec)
    {
        max = std::max(el, min);
    }

    double mean = 1.0 * sum / count;

    os << "Count: " << count << ", Sum: " << sum << ", Min: " << min << ", Max: " << max << ", Mean: " << mean << "\n";

    return os;



}