#ifndef _HISTOGRAM_HPP_
#define _HISTOGRAM_HPP_

#include "Series.hpp"

#include <vector>

class Histogram
{
    private:
        Series* _tab;
        int _size;


    public:
        Histogram();
        ~Histogram();
    
        void add_series(std::string name);


        Series& operator[](std::string name);
        
        std::vector<std::string> get_series_names();
    
        double& operator()(std::string name,unsigned row);



};

#endif