#ifndef _WEKTOR3D_H
#define _WEKTOR3D_H

#include <iostream>

class Wektor3D {
    friend Wektor3D operator*(double num, const Wektor3D &vec); 
    friend std::ostream& operator<<(std::ostream &os, const Wektor3D &vec);

    private:
        int* _tab;
    public:
        ~Wektor3D();
        Wektor3D(int val1 = 0, int val2 = 0, int val3 = 0);
        Wektor3D(const Wektor3D &);
        Wektor3D& operator=(const Wektor3D &);
        Wektor3D operator+(const Wektor3D &) const;
        Wektor3D operator-(const Wektor3D &) const;
        Wektor3D operator*(const Wektor3D &) const;

        Wektor3D operator*(int);
        Wektor3D operator-();
        int& operator[](int);


};

Wektor3D operator*(double num, const Wektor3D &vec);
std::ostream& operator<<(std::ostream &os, const Wektor3D &vec);



#endif
