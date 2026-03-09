#pragma once 

#include <string>
#include <iostream>
#include <vector>

class Item {
    protected:
        std::string _name;
        double _price;

    public:
        Item(std::string name, double price):
            _name(name), _price(price) {} ;

        virtual ~Item() = default;

        virtual double getPrice() const
        {
            return _price;
        }

        virtual std::string getName() const
        {
            return _name;
        }

        virtual std::ostream &print(std::ostream &os) const = 0;

        friend std::ostream &operator<<(std::ostream &os, const Item &obj)
        {
            return obj.print(os);
        }
};

class GroceryItem: public Item 
{
    public:
        GroceryItem(std::string name, double price):
            Item(name, price) {};

        ~GroceryItem() = default;

        std::ostream &print(std::ostream &os) const override
        {
            os <<  "Produkt spożywczy: " << _name << " , Cena: zl " << _price << "\n";

            return os;
        }
};

class ElectronicsItem : public Item
{
    private:
        int _months;

    public:
        ElectronicsItem(std::string name, double price, int months):
            Item(name, price), _months(months) {};

        ~ElectronicsItem() = default;

        std::ostream &print(std::ostream &os) const override
        {
            os <<  "Produkt elektorniczny: " << _name << " ,  Cena: zl " << _price << ", Gwarancja: " << _months << " miesiace\n";

            return os;

        }
};

class ClothingItem : public Item 
{
    private:
        std::string _size;;

    public:
        ClothingItem(std::string name, double price, std::string size):
            Item(name, price), _size(size) {};

        ~ClothingItem() = default;

        std::ostream &print(std::ostream &os) const override
        {
            os <<  "Odziez: " << _name << " , Cena: zl " << _price << ", Rozmiar: " << _size << " \n";

            return os;

        }
};