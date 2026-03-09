#include "Tiger.h"

    Tiger::Tiger() = default;

    Tiger::~Tiger() = default; 



    void Tiger::makeSound() const 
    {
        std::cout <<"Tiger growls\n";
    }

    void Tiger::eat() const 
    {
        std::cout <<"Tiger eats meet\n";
    }
    void Tiger::interact(Animal* other) const 
    {

        if (dynamic_cast<Tiger*>(other))
            std::cout << "Tiger stares at Tiger" << "\n";
        else if (dynamic_cast<Lion*>(other))
            std::cout << "Tiger stares at Lion" << "\n";
        else if (dynamic_cast<Bear*>(other))
            std::cout << "Tiger stares at Bear" << "\n";

        
    }
    void Tiger::useSkill() const 
    {
        std::cout << "Tiger uses Flare Blitz skill \n";
    }