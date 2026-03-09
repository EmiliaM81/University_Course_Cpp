#include "Wektor3D.h"

Wektor3D::~Wektor3D()
{
    delete [] _tab;
}

Wektor3D::Wektor3D(int val1, int val2, int val3):
    _tab(new int[3]) {
    _tab[0] = val1;
    _tab[1] = val2;
    _tab[2] = val3;
}

Wektor3D::Wektor3D(const Wektor3D &obj):
    _tab(new int[3]) {
        _tab[0] = obj._tab[0];
        _tab[1] = obj._tab[1];
        _tab[2] = obj._tab[2];
}

int& Wektor3D::operator[](int index)
{
    return _tab[index];
}


Wektor3D& Wektor3D::operator=(const Wektor3D &obj)
{
    if (this == &obj) // ochrona przed samoprzydzieleniem
        return *this;

    _tab[0] = obj._tab[0];
    _tab[1] = obj._tab[1];
    _tab[2] = obj._tab[2];

    return *this;
}

Wektor3D Wektor3D::operator+(const Wektor3D &obj) const
{
    Wektor3D newObj;

    newObj._tab[0] = _tab[0] + obj._tab[0];
    newObj._tab[1] = _tab[1] + obj._tab[1];
    newObj._tab[2] = _tab[2] + obj._tab[2];

    return newObj;

}

Wektor3D Wektor3D::operator-(const Wektor3D &obj) const
{
    Wektor3D newObj;

    newObj._tab[0] = _tab[0] - obj._tab[0];
    newObj._tab[1] = _tab[1] - obj._tab[1];
    newObj._tab[2] = _tab[2] - obj._tab[2];

    return newObj;

}

Wektor3D Wektor3D::operator*(const Wektor3D &obj) const
{
    Wektor3D newObj;

    newObj._tab[0] = _tab[0] * obj._tab[0];
    newObj._tab[1] = _tab[1] * obj._tab[1];
    newObj._tab[2] = _tab[2] * obj._tab[2];

    return newObj;

}

Wektor3D Wektor3D::operator*(int val)
{
    Wektor3D newObj;

    newObj._tab[0] = _tab[0] * val;
    newObj._tab[1] = _tab[1] * val;
    newObj._tab[2] = _tab[2] * val;

    return newObj;

}

Wektor3D Wektor3D::operator-()
{
    Wektor3D newObj;

    newObj._tab[0] = -_tab[0];
    newObj._tab[1] = -_tab[1];
    newObj._tab[2] = -_tab[2];

    return newObj;

}




Wektor3D operator*(double val, const Wektor3D &vec)
{
    Wektor3D newObj;

    newObj._tab[0] = vec._tab[0] * val;
    newObj._tab[1] = vec._tab[1] * val;
    newObj._tab[2] = vec._tab[2] * val;

    return newObj;

}

std::ostream& operator<<(std::ostream &os, const Wektor3D &vec)
{
    os << "{ " << vec._tab[0] << ", "  << vec._tab[1] << ", "  << vec._tab[2] << " }";

    return os;
}
