#ifndef _WEATHERGRID_H_
#define _WEATHERGRID_H_

#include <vector>
#include <iostream>

class WeatherGrid {
    friend std::ostream &operator<<(std::ostream &os, const WeatherGrid &obj);

    private:
        std::vector<std::vector<int>> _vec;
        int _x = 0;
        int _y = 0;

    public:
        WeatherGrid(int val1, int val2);
        WeatherGrid();
        int &operator()(int val1, int val2);
        std::vector<int> &operator[](int val);
        WeatherGrid& operator=(const WeatherGrid& obj);
        WeatherGrid operator+(const WeatherGrid& obj);
        WeatherGrid operator-(const WeatherGrid& obj);
        WeatherGrid operator*(const WeatherGrid& obj);

        WeatherGrid &operator++();
        WeatherGrid operator++(int);
        WeatherGrid &operator--();
        WeatherGrid operator--(int);




};

std::ostream &operator<<(std::ostream &os, const WeatherGrid &obj);


#endif