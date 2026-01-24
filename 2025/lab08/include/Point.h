#ifndef _POINT_H_
#define _POINT_H_

#include <string>
#include <iostream>

class Point
{
    friend class Polygon;
    private:
        std::string _name;
        int _x;
        int _y;
        bool _presmode;

        static int _sumX;
        static int _sumY;

    public:

        //Point();
        // Point(std::string name);
        //Point(std::string name, int x);
        Point(std::string name="", int x=0, int y=0);

        //Point& operator=()


        void Presentation(void);
        void SetName(std::string name);
        void SetX(int x);
        void SetY(int y);
	    void SetPresentationMode(bool val);

        int GetX(void);
	    void GetStatistics(void);
        int GetY(void);
         

};


#endif