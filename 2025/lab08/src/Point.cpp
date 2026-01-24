 #include "../include/Point.h"       
        
    int Point::_sumX = 0;
    int Point::_sumY = 0;  

    // Point::Point():
    //     _name(0), _x(0), _y(0) {};

    // Point::Point():
    //     Point("")

    // Point(std::string name);
    // Point(std::string name, int x);

    Point::Point(std::string name, int x, int y):
        _name(name), _x(x), _y(y), _presmode(0)
        {
            _sumX+=x;
            _sumY+=y;
        };


    void Point::Presentation(void)
    {

        if (_presmode)
        {
            std::cout << _name << "(" << _x << "," << _y << ")\n";
            return;
        }


        std::cout << "Punkt: ";
        if (_name  == "")
        {
            std::cout << "?, ";
        } else {
            std::cout << _name <<", ";
        }

        std::cout << "Wspolrzedna X = " << _x << ", Wspolrzedna Y = " << _y << "\n";




    }

    void Point::SetName(std::string name)
    {
        _name = name;
    }

    void Point::SetX(int x)
    {
        _x = x;
        _sumX+=x;

    }

    void Point::SetY(int y)
    {
        _y = y;
        _sumY+=y;

    }

    void Point::SetPresentationMode(bool val)
    {
        _presmode = val;
    }

    int Point::GetX(void)
    {
        return _x;
    }


    int Point::GetY(void)
    {
        return _y;
    }

    void Point::GetStatistics()
    {
        std::cout << "Suma wspolrzednych x wszystkich punktow: " << _sumX << "\n";
        std::cout << "Suma wspolrzednych y wszystkich punktow: " << _sumY << "\n";

    }