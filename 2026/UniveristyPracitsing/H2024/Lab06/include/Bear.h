#pragma once 

#include "Animal.h"
#include "Lion.h"
#include "Tiger.h"
#include "Bear.h"

#include <iostream>
#include <string>

class Bear : public Animal
{
private:

public:
    Bear();
    ~Bear();
    void makeSound() const override;
    void eat() const override;
    void interact(Animal* other) const override;
    void useSkill() const override;
};

