#ifndef _SERIES_HPP_
#define _SERIES_HPP_

#include <string>
#include <iostream>

class Series
{
    friend class Histogram;
    friend std::ostream& operator<<(std::ostream &os, const Series &obj);
    private:
        std::string _name;
        double* _tab;
        int _size;

    public:
        // Series(const Series &obj):
        //     _tab(new double[obj._size]), _size(obj._size), _name(obj._name){
            
        //         for (int i = 0; i<_size; i++)
        //         {
        //             _tab[i] = obj._tab[i];
        //         }
        // }
        Series(std::string name = ""):
            _name(name), _tab(nullptr), _size(0) {};

        ~Series()
        {
            std::cout << "Destruktor klasy Series\n";
            if (_tab)
                delete [] _tab;
        }

        Series(Series&& other) 
            : _name(other._name), _tab(other._tab), _size(other._size)
        {
        
            other._tab = nullptr;
            other._size = 0;
        }

        Series& operator=(const Series &obj) 
        {
            std:: cout << "Kopiujący operator przypisania klasy Series\n";
            if (this == &obj)
                return *this;

            if (_tab)
                delete [] _tab;

            _tab = new double[obj._size];

            _size = obj._size;
            _name = obj._name;

            for (int i = 0; i<_size; i++)
            {
                _tab[i] = obj._tab[i];
            }

            return *this;

        }

        void append(double val)
        {
            double* newTab = new double[_size+1];

            for (int i = 0; i<_size; i++)
            {
                newTab[i] = _tab[i];
            }

            newTab[_size] = val;

            _size++;

            delete [] _tab;

            _tab = newTab;
        }

        double& operator[](int index)
        {
            if (index <= _size)
                return _tab[index];
            else 
                return _tab[0];
        }

        Series& operator+=(const Series &obj)
        {
            for (int i= 0; i<_size; i++)
            {
                _tab[i] += obj._tab[i];
            }

            return *this;
        }
        


};

std::ostream& operator<<(std::ostream &os, const Series &obj)
{
    os << "[";
    for (int i = 0; i< obj._size -1; i++)
    {
        os << obj._tab[i];
        os << ",";
    }
    os << obj._tab[obj._size-1] << "]";

    return os;
}

#endif