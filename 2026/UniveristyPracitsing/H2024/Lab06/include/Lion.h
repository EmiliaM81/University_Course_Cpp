#pragma once 

#include "Animal.h"
#include "Lion.h"
#include "Tiger.h"
#include "Bear.h"

#include "string.h"

class Lion : public Animal
{
private:

public:
    Lion();
    ~Lion();
    void makeSound() const override;
    void eat() const override;
    void interact(Animal* other) const override;
    void useSkill() const override;
};