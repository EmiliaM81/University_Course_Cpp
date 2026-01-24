#ifndef _POLYGON_H_
#define _POLYGON_H_

#include "Point.h"

class Polygon
{

    private:
        std::string _name;
        Point* _tab;
        int _len;
        bool _presmode;


    public:
        void Presentation();
        void SetName(std::string name);
        Point* GetVertices(void);
        void SetNewVertices(int len, Point* tab);
        void SetPresentationMode(bool val);
        void SetVertice(int place, std::string name, int x, int y);

        Polygon();
        Polygon(std::string name);
        Polygon(std::string name, Point p1);
        Polygon(std::string name, Point p1, Point p2, Point p3);
        Polygon(std::string name, Point p1, Point p2, Point p3, Point p4);
        Polygon(std::string name, int len, Point* tab);

        ~Polygon();


};

#endif