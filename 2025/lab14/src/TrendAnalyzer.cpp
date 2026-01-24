#include "../include/TrendAnalyzer.h"




void TrendAnalyzer::operator()(int val1, int val2)
{

    _totalPairs++;

    if (val1 == val2)
        _equalPairs++;
    else if (val1 < val2)
        _increasingPairs++;
    else 
        _decreasingPairs++;

    
}

std::ostream &operator<<(std::ostream &os, const TrendAnalyzer &obj)
{
    
    os << "Total pairs: " << obj._totalPairs << "\n";
    os << "Equal pairs: " << obj._equalPairs << "\n";
    os << "Increasing pairs: " << obj._increasingPairs << "\n";
    os << "Decreasing pairs: " << obj._decreasingPairs << "\n";

    

    return os;



}