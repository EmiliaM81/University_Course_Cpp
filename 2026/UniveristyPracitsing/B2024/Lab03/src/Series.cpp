#include "Series.hpp"


        Series::Series(std::string name):
            _name(name), _tab(nullptr), _size(0) {};

        Series::Series(std::string name, int size):
            _name(name), _tab(new double[size]), _size(size) {};

        Series::~Series()
        {
            std::cout << "Destruktor klasy Series\n";
            if (_tab)
                delete [] _tab;
        }



        Series& Series::operator=(const Series &obj) 
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

        void Series::append(double val)
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

        double& Series::operator[](int index)
        {
            if (index <= _size)
                return _tab[index];
            else 
                return _tab[0];
        }

        Series& Series::operator+=(const Series &obj)
        {
            for (int i= 0; i<_size; i++)
            {
                _tab[i] += obj._tab[i];
            }

            return *this;
        }
        

        Series& Series::operator=(Series &&obj)
        {
            std::cout << "Przenoszący operator przypisania klasy Series\n";
            if (this == &obj)
                return *this;

            if (_tab)
                delete [] _tab;
            
            _size = obj._size;
            _name = obj._name;
            _tab = obj._tab;
            obj._tab = nullptr;

            return *this;
        }

            Series::Series(Series&& other)
            : _name(other._name), _tab(other._tab), _size(other._size)
            {
                std::cout << "Konstruktor przenoszący klasy Series\n";

                other._tab = nullptr;
                other._size = 0;
            }


std::ostream& operator<<(std::ostream &os, const Series &obj)
{
    os << obj._name << ": ";
    os << "[";
    for (int i = 0; i< obj._size -1; i++)
    {
        os << obj._tab[i];
        os << ",";
    }
    os << obj._tab[obj._size-1] << "]";

    return os;
}


std::vector<double> Series::get_series_view(std::function<bool(double)> fun)
{
    std::vector<double> vec;

    for (int i = 0; i<_size; i++)
    {
        if (fun(_tab[i]))
            vec.push_back(_tab[i]);
    }

    return vec;
}