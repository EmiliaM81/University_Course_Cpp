#ifndef _OKRAG_H_
#define _OKRAG_H_

class Okrag : public Figura
{
private:
    /* data */
public:
    void Rysuj() const override
    {
        std::cout << "Rysuje okrag" << "\n";
    }
    Okrag(/* args */);
    ~Okrag();
};

Okrag::Okrag(/* args */)
{
}

Okrag::~Okrag()
{
}




#endif