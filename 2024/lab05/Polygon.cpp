#include "Polygon.h"

    void Polygon::Presentation(void)
    {
        std::cout <<"\n### Prezentacja wielokata ###\n";
        std::cout << "nazwa: " << name <<'\n';
        std::cout <<"Liczba wierzcholkow: " << countVertices<<"\n";

        for (int i=0; i<countVertices; i++)
        {
            std::cout<<"Wierzcholek - nazwa: "<<arr[i].getName() << ", X = "<<arr[i].getX()<<", Y = "<<arr[i].getY()<<'\n';
        }

    }

    void Polygon::SetName(std::string newName)
    {
        name = newName;
    }

    void Polygon::SetVertice(size_t whichOne, std::string newName, double x, double y)
    {
        if (whichOne <= countVertices && whichOne>0)
        {
            arr[whichOne-1].SetName(newName);
            arr[whichOne-1].SetX(x);
            arr[whichOne-1].SetY(y);
        }

    
    }


    void Polygon::SetNewVertices(size_t count, Point* pointArr)
    {
        if (countVertices > 0)
        {
            delete [] arr;
        }

        countVertices = count;
        
        arr = new Point[count];

        for (int i=0 ; i< count; i++)
        {
            arr[i] = pointArr[i];
        }
    }



    Point* Polygon::GetVertices(void)
    {
        return arr;
    }
    
    
    
    Polygon::Polygon()
    {
        std::cout <<"\nWywolanie konstruktora Polygon...\n";
        name = "";
        countVertices=0;

    }


    Polygon::Polygon(std::string newName)
    {
        std::cout <<"\nWywolanie konstruktora Polygon...\n";
        name = newName;
        countVertices=0;

    }


    Polygon::Polygon(std::string newName, Point p1, Point p2, Point p3)
    {
        std::cout <<"\nWywolanie konstruktora Polygon...\n";
        countVertices=3;



        name = newName;
        arr = new Point[3];
        arr[0] = p1;
        arr[1] = p2;
        arr[2] = p3;


    }


    Polygon::Polygon(std::string newName, Point p1, Point p2, Point p3, Point p4)
    {
        std::cout <<"\nWywolanie konstruktora Polygon...\n";

        countVertices=4;

        name = newName;
        arr = new Point[4];
        arr[0] = p1;
        arr[1] = p2;
        arr[2] = p3;
        arr[3] = p4;

    }


    Polygon::Polygon(std::string newName, size_t pointCount, Point* pointArr)
    {
        std::cout <<"\nWywolanie konstruktora Polygon...\n";

        name = newName;
        countVertices=pointCount;

        arr = new Point[pointCount];
        

        for (int i=0; i<pointCount; i++)
        {
            arr[i] = pointArr[i];
        }
        
    }

    Polygon::~Polygon()
    {
        std::cout<<"\nWywolanie destruktora Polygon...\n";

        if (countVertices >0)
            delete [] arr;
    }