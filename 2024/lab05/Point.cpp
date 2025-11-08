#include "Point.h"



void Point::Presentation(void)
{
    std::cout <<"\n### Prezentacja punktu ###\n";
    std::cout <<"Nazwa: " << name <<'\n'; 
    std::cout <<"Wspolrzedna X: " << xData << '\n';
    std::cout <<"Wspolrzedna X: " << yData << '\n';

}

std::string Point::getName(void)
{
    return name;
}



double Point::getX(void)
{
    return xData;
}



double Point::getY(void)
{
    return yData;
}


void Point::SetName(std::string newName)
{
    name = newName;
}

void Point::SetX(double x)
{
    xData = x;
}
void Point::SetY(double y)
{
    yData = y;
}

Point::Point()
{
    std::cout << "\nWywolanie konstruktora Point...\n";
    name = "";
    xData = 0;
    yData = 0;
}


Point::Point(std::string newName)
{
    std::cout << "\nWywolanie konstruktora Point...\n";
    name =newName;
    xData = 0;
    yData = 0;
}

Point::Point(std::string newName, double newX, double newY)
{
    std::cout << "\nWywolanie konstruktora Point...\n";

    name = newName;
    xData = newX;
    yData = newY;
}

Point::~Point()
{
    std::cout << "\nWywolanie destruktora Point...\n";

}



