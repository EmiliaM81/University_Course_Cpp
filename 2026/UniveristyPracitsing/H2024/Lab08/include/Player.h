#pragma once

#include "Classes.h"
class Player : public GameObject, public Renderable, public Collidable
{
private:

public:
    Player():
        GameObject() {};

    Player(std::string name):
        GameObject(name) {};

    inline void action() const override
    {
        std::cout << "Performing player-specific action for " << this->Name() << "\n";
        render();
        update();
    }
};