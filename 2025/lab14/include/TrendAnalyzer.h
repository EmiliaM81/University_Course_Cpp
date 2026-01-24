#ifndef _TRENDANALYZER_H_
#define _TRENDANALYZER_H_

#include <iostream>
#include <vector>
#include <limits>

class TrendAnalyzer{
    friend std::ostream &operator<<(std::ostream &os, const TrendAnalyzer &obj);
    private:
        int _totalPairs = 0;
        int _equalPairs = 0;
        int _increasingPairs = 0;
        int _decreasingPairs = 0;



    public:
        void operator()(int val1, int val2);
};

std::ostream &operator<<(std::ostream &os, const TrendAnalyzer &obj);


#endif