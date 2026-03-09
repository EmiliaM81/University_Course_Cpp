#pragma once

#include "Classes.h"

class Enemy : public GameObject, public Renderable, public Collidable
{
private:

public:
    Enemy():
        GameObject() {};

    Enemy(std::string name):
        GameObject(name) {};

    ~Enemy() = default;

    inline void action() const override
    {
        std::cout << "Performing enemy-specific action for " << this->Name() << "\n";
        render();
        collide();
        update();
    }
};


