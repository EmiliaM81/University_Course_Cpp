#ifndef _KWADRAT_H_
#define _KWADRAT_H_

class Kwadrat : public Figura
{
private:
    /* data */
public:
    void Rysuj() const override
    {
        std::cout << "Rysuje okrag" << "\n";
    }
    Kwadrat(/* args */);
    ~Kwadrat();
};

Kwadrat::Kwadrat(/* args */)
{
}

Kwadrat::~Kwadrat()
{
}


#endif