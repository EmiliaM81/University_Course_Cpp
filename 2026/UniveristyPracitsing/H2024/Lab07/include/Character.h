#pragma once

#include <iostream>
#include <vector>
#include <string>

enum class State 
{
    Idle, Attacking, Resting
};

class Equipment
{
    protected:
        std::string _name = "";

    public:
        Equipment() = default;
        virtual ~Equipment() = default;

        virtual std::string getEquipment() const = 0;
};

class Sword : public Equipment
{
    public:
        Sword()
        { _name = "sword"; 
            std::cout << "Sword created.\n";
        };

        std::string getEquipment() const override
        {
            return _name;
        }

};

class Staff : public Equipment
{
    public:
        Staff() { 
            _name = "staff"; 
            std::cout << "Staff created.\n";};

        std::string getEquipment() const override
        {
            return _name;
        }
};

class Lockpick : public Equipment
{
    public:
        Lockpick() { 
            _name = "lockpick"; 
            std::cout << "Lockpick created.\n";};

        std::string getEquipment() const override
        {
            return _name;
        }
};


class Character
{
    protected:
        std::string _name;
        State _state;
        Equipment* _equipment;


    public:
        Character(std::string name):
            _name(name), _state(State::Idle), _equipment(nullptr) {};

        virtual ~Character()=default;

        virtual enum State get_state() const
        {
            return _state;
        };

        virtual std::string GetName() const
        {
            return _name;
        };

        virtual void set_state(enum State state)
        {
            _state = state;
        }

        virtual void equip(Equipment* equipment) = 0;

        virtual std::string GetProffesion() const = 0;

        virtual std::string getEquipedItemName() const = 0;

};