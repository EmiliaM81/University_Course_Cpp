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
        Histogram():
            _tab(nullptr), _size(0) {   
            std::cout << "konstruktor klasy Histogram\n";
        }
        ~Histogram()
        {
            std::cout << "Destruktor klasy Histogram\n";
            if (_tab)
                delete [] _tab;
            
            _tab = nullptr;

            
        }
    
        void add_series(std::string name)
        {
            Series a(name);

            Series* newTab = new Series[_size + 1];

            for (int i = 0; i < _size; i++)
                newTab[i] = _tab[i];

            newTab[_size] = a; 

            if (_tab)
                delete [] _tab;

            _tab = newTab;
            _size++;
        }


        Series& operator[](std::string name)
        {
            for (int i = 0; i< _size; i++)
            {
                if (_tab[i]._name == name)
                    return _tab[i];
            }

            return _tab[0];
        }
        
        
        std::vector<std::string> get_series_names()
        {
            std::vector<std::string> vec;
            for (int i = 0; i<_size; i++)
            {
                vec.push_back(_tab[i]._name);
            }

            return vec;
        }
    




};

#endif