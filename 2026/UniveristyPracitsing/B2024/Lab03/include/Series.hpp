#ifndef _SERIES_HPP_
#define _SERIES_HPP_

#include <string>
#include <iostream>
#include <functional>

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
        Series(std::string name = "");
        ~Series();

        Series(Series&& other);

        Series(std::string name, int size);

        Series& operator=(const Series &obj);

        Series& operator=(Series &&obj);


        void append(double val);

        double& operator[](int index);

        Series& operator+=(const Series &obj);
        
        std::vector<double> get_series_view(std::function<bool(double)>);

};

std::ostream& operator<<(std::ostream &os, const Series &obj);

#endif