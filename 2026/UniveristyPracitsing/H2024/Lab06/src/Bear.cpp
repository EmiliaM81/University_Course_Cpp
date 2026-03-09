#include "Bear.h"

    Bear::Bear() = default;

    Bear::~Bear() = default; 



    void Bear::makeSound() const 
    {
        std::cout << "Bear grunts\n";
    }

    void Bear::eat() const 
    {
        std::cout <<"Bear eats fish\n";
    }

    void Bear::interact(Animal* other) const 
    {
        if (dynamic_cast<Tiger*>(other))
            std::cout << "Bear grunts at Tiger" << "\n";
        else if (dynamic_cast<Lion*>(other))
            std::cout << "Bear grunts at Lion" << "\n";
        else if (dynamic_cast<Bear*>(other))
            std::cout << "Bear grunts at Bear" << "\n";
    }

    void Bear::useSkill() const 
    {
        std::cout << "Bear uses Belly Drum skill\n";
    }