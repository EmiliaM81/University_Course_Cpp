#pragma once

#include <iostream>

class Mebel
{
private:
    int _sz;
    int _wys;
    int _dl;

public:
    Mebel(int sz, int wys, int dl):
        _sz(sz), _wys(wys), _dl(dl) {};

    virtual ~Mebel()
    {
        std::cout << "~Mebel\n";
    }

    virtual void print(std::ostream &os) const
    {
        os << "Mebel: sz: " << _sz << " wys: " << _wys << " dl: " << _dl;
    }

    friend std::ostream &operator<<(std::ostream &os, const Mebel &obj)
    {
        obj.print(os); 
        return os;
    }



};


class Sofa: virtual public Mebel 
{
    private:
        int _siedzisko;

    public:

        Sofa(int sz, int wys, int dl, int siedzisko):
            Mebel(sz,wys,dl), _siedzisko(siedzisko) {};

        ~Sofa()
        {
            std::cout << "~Sofa\n";
        }

    void print(std::ostream &os) const override
    {
        os << "Sofa: ";
        Mebel::print(os);
        os << "  siedzisko: " << _siedzisko;
    }


};


class Lozko: virtual public Mebel 
{
    private:
        int _szSpania;

    public:

        Lozko(int sz, int wys, int dl, int szSpania):
            Mebel(sz,wys,dl), _szSpania(szSpania) {};

        ~Lozko()
        {
            std::cout << "~Lozko\n";
        }
    void print(std::ostream &os) const override
    {
        os << "Lozko: ";
        Mebel::print(os);
        os << "  sz.spania: " << _szSpania;
    }
  

};

class Kanapa: public Sofa, public Lozko 
{
    public:
        Kanapa(int sz, int wys, int dl, int siedzisko, int szSpania):
            Mebel(sz, wys, dl), Sofa(sz, wys, dl, siedzisko), Lozko(sz, wys, dl, szSpania) {};

        ~Kanapa()
        {
            std::cout << "~Kanapa\n";
        }


    void print(std::ostream &os) const override
    {
        os << "jako ";
        Mebel::print(os);
        os << " \njako ";
        Sofa::print(os);
        os << " \njako ";
        Lozko::print(os);


    }



};

