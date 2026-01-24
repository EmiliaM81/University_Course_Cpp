#include "../include/WeatherGrid.h"

WeatherGrid::WeatherGrid(int val1, int val2)
{

    _x = val1;
    _y = val2;

    _vec = std::vector<std::vector<int>>(val1, std::vector<int>(val2));
    
}


std::vector<int> &WeatherGrid::operator[](int val)
{
    return _vec[val];
}

int &WeatherGrid::operator()(int val1, int val2)
{
    return _vec.at(val1).at(val2);
}

std::ostream &operator<<(std::ostream &os, const WeatherGrid &obj)
{
    for (int i = 0 ; i<obj._x; i++)
    {
        for (int j = 0 ; j<obj._y; j++)
        {
            os << "    " << obj._vec[i][j];
        }
        os << "\n";
    }

    return os;
}

WeatherGrid::WeatherGrid()
{

}


WeatherGrid& WeatherGrid::operator=(const WeatherGrid& obj)
{
    _vec = obj._vec;
    _x = obj._x;
    _y = obj._y;

    return *this;
    
}

WeatherGrid WeatherGrid::operator+(const WeatherGrid& obj)
{
    WeatherGrid res = WeatherGrid(obj._x, obj._y);

    for (int i = 0; i< res._x; ++i)
    {
        for (int j = 0; j< res._y; ++j)
        {
            res._vec[i][j] = _vec[i][j] + obj._vec[i][j];
        }
    }

    return res;


}

WeatherGrid WeatherGrid::operator-(const WeatherGrid& obj)
{
    WeatherGrid res = WeatherGrid(obj._x, obj._y);

    for (int i = 0; i< res._x; ++i)
    {
        for (int j = 0; j< res._y; ++j)
        {
            res._vec[i][j] = _vec[i][j] - obj._vec[i][j];
        }
    }

    return res;


}

WeatherGrid WeatherGrid::operator*(const WeatherGrid& other)
{
    WeatherGrid x(this->_vec.size(),this->_vec[0].size());
    //x=*this;

    for(int i{}; i<x._vec.size(); ++i)
    {
        for(int j{}; j<x._vec[0].size(); ++j)
        {
            //x._grid[i][j]*=other._grid[i][j];
            for(int k{}; k < x._vec.size(); ++k)
            {
                x._vec[i][j]+=_vec[i][k]*other._vec[k][j];
                //std::cout<<x._grid[i][j]<<' '<<_grid[i][k]<<' '<<other._grid[k][j]<<" \n";
            }
        }
        
    }

    return x;
}

WeatherGrid &WeatherGrid::operator++()
{
    for (int i = 0 ; i< _x; i++)
    {
        for (int j = 0 ; j< _y; j++)
        {
            _vec[i][j]++;
        }
    }

    return *this;

}


WeatherGrid WeatherGrid::operator++(int)
{
    WeatherGrid res = WeatherGrid(*this);


    for (int i = 0 ; i< _x; i++)
    {
        for (int j = 0 ; j< _y; j++)
        {
            _vec[i][j]++;
        }
    }

    return res;
}


WeatherGrid &WeatherGrid::operator--()
{
    for (int i = 0 ; i< _x; i++)
    {
        for (int j = 0 ; j< _y; j++)
        {
            _vec[i][j]--;
        }
    }

    return *this;

}


WeatherGrid WeatherGrid::operator--(int)
{
    WeatherGrid res = WeatherGrid(*this);


    for (int i = 0 ; i< _x; i++)
    {
        for (int j = 0 ; j< _y; j++)
        {
            _vec[i][j]--;
        }
    }

    return res;
}