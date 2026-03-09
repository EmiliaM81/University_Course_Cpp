#pragma once

#include <Character.h>

class Thief : public Character 
{
    public:
        Thief(std::string name):
            Character(name) {};

        std::string GetProffesion() const override
        {
            return "Thief";
        }

        void equip(Equipment* equipment) override
        {
            if (Lockpick* lockpick = dynamic_cast<Lockpick*>(equipment))
                _equipment = lockpick;
        }

        std::string getEquipedItemName() const override
        {
            return _equipment->getEquipment();
        }
};