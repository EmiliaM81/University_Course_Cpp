#pragma once

#include <iostream>

class Animal
{
private:
    /* data */
public:
    Animal() = default;
    virtual ~Animal() = default;
    virtual void makeSound() const = 0;
    virtual void eat() const = 0;
    virtual void interact(Animal* other) const = 0;
    virtual void useSkill() const = 0;
    virtual void sleep() const
    {
        std::cout << "\n";
    }



};

