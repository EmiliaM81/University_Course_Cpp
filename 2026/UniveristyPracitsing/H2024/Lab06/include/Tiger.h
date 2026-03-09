#pragma once 

#include "Animal.h"
#include "Lion.h"
#include "Tiger.h"
#include "Bear.h"

class Tiger : public Animal
{
private:

public:
    Tiger();
    ~Tiger();
    void makeSound() const override;
    void eat() const override;
    void interact(Animal* other) const override;
    void useSkill() const override;
};
