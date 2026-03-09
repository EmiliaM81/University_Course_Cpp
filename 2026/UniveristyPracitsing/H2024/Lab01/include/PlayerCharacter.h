#pragma once

#include <iostream>



class GameObject {
    public:
        virtual void rendering(void) const 
        {
            std::cout << "Rendering GameObject\n";
        }
        virtual ~GameObject() = default;


};

class Renderable {
    public:
        virtual void drawing(void) const 
        {
            std::cout << "Drawing renderable\n";
        }

        virtual ~Renderable() = default;

    
};


class PlayerCharacter: public GameObject, public Renderable {
    public:
        void attack()
        {
            std::cout << "PlayerCharacter attacking!\n";
        }

        ~PlayerCharacter() = default;
        

};

namespace gutils {
    void handleGameObject(GameObject* obj) 
    {
        obj->rendering();
        PlayerCharacter* pc = dynamic_cast<PlayerCharacter*>(obj);
        pc->attack();
    }

    void handleRenderable(Renderable* obj) 
    {
        obj->drawing();
        PlayerCharacter* pc = dynamic_cast<PlayerCharacter*>(obj);
        pc->attack();
    }
};