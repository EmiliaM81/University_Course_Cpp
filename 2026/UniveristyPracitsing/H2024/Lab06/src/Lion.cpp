#include "Lion.h"

    Lion::Lion() = default;

    Lion::~Lion() = default; 



    void Lion::makeSound() const 
    {
        std::cout <<"Lion roars\n";
    }

    void Lion::eat() const 
    {
        std::cout <<"Lion eats meet\n";
    }

    void Lion::interact(Animal* other) const 
    {
        if (dynamic_cast<Tiger*>(other))
            std::cout << "Lion roars at Tiger" << "\n";
        else if (dynamic_cast<Lion*>(other))
            std::cout << "Lion roars at Lion" << "\n";
        else if (dynamic_cast<Bear*>(other))
            std::cout << "Lion roars at Bear" << "\n";
    }
    void Lion::useSkill() const
    {
        std::cout << "Lion uses Hyper Voice skill\n";
    }