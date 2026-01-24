#include "Polygon.h"

    void Polygon::Presentation()
    {
        std::cout << "\nWielokat: Nazwa = ";
        if (_name  == "")
        {
            std::cout << "?, ";
        } else {
            std::cout << _name <<", ";
        }

        std::cout << "Liczba wierzcholkow = " << _len << "\n";

        for (int i =0 ; i< _len; i++)
        {
            _tab[i].Presentation();
        }

        
    }
    void Polygon::SetName(std::string name)
    {
        _name = name;
    }

    Point* Polygon::GetVertices(void)
    {
        return _tab;
    }


    void Polygon::SetNewVertices(int len, Point* tab)
    {
        if (len > _len)
        {
            Point * temp = new Point[len];

            for (int i = 0; i<len; i++)
            {
                temp[i] = tab[i];
            }

            delete [] _tab;

            _tab = temp;
            _len = len;

        } else {


            for (int i = 0; i<len; i++)
            {
                _tab[i] = tab[i];
            }

            _len = len;
        }
    }

    void Polygon::SetPresentationMode(bool val)
    {
        _presmode = val;
    }

    void Polygon::SetVertice(int place, std::string name, int x, int y)
    {
        _tab[place]._name = name;
        _tab[place]._x = x;
        _tab[place]._y = y;

    }



    Polygon::Polygon(): 
    _name(""), _len(0), _presmode(0){

        _tab = new Point[4];

    }

    Polygon::Polygon(std::string name):
    _name(name), _len(0), _presmode(0)
    {
        _tab = new Point[4]; 
    }

    Polygon::Polygon(std::string name, Point p1):
    _name(name), _len(1), _presmode(0) {
        _tab = new Point[4];
        _tab[0] = p1;
    }

    Polygon::Polygon(std::string name, Point p1, Point p2, Point p3):
    _name(name), _len(3), _presmode(0) 
    {
    
        _tab = new Point[4];
        _tab[0] = p1;
        _tab[1] = p2;
        _tab[2] = p3;
    
    }

    Polygon::Polygon(std::string name, Point p1, Point p2, Point p3, Point p4):
    _name(name), _len(4), _presmode(0) 
    {

        _tab = new Point[4];
        _tab[0] = p1;
        _tab[1] = p2;
        _tab[2] = p3;
        _tab[3] = p4;

    
    }

    Polygon::Polygon(std::string name, int len, Point* tab):
    _name(name), _len(len) , _tab(tab), _presmode(0)
    {


    }

    Polygon::~Polygon()
    {
        if (_tab)
            delete [] _tab;
    }

