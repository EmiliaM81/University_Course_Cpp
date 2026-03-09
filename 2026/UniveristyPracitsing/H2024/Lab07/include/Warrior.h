#pragma once

#include <Character.h>

class Warrior : public Character 
{
    public:
        Warrior(std::string name):
            Character(name) {};

        std::string GetProffesion() const override
        {
            return "Warrior";
        }

        void equip(Equipment* equipment) override
        {
            if (Sword* sword = dynamic_cast<Sword*>(equipment))
                _equipment = sword;
        }

        std::string getEquipedItemName() const override
        {
            return _equipment->getEquipment();
        }
};