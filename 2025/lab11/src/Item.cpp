#include "Item.h"

Item::Item(std::string name, double weight, double volume):
    _name(name), _weight(weight), _volume(volume) {};


void Item::Presentation()
{
    std::cout << _name << ", weight: " << _weight << "g, volume: " << _volume << "L\n";
}


// Item::Item(const Item& obj)
// {
//     _name = obj._name;
//     _weight = obj._weight;
//     _volume = obj._volume;
// }
