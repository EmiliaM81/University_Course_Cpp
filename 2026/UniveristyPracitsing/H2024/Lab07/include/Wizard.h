#pragma once

#include <Character.h>

class Wizard : public Character 
{
    public:
        Wizard(std::string name):
            Character(name) {};

        std::string GetProffesion() const override
        {
            return "Wizard";
        }

        void equip(Equipment* equipment) override
        {
            if (Staff* staff = dynamic_cast<Staff*>(equipment))
                _equipment = staff;
        }

        std::string getEquipedItemName() const override
        {
            return _equipment->getEquipment();
        }
};