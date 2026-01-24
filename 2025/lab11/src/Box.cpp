#include "Box.h"



Box::Box(const Item& item)
{
    _vec.push_back(item);
    _totalWeight = item._weight;
    _totalVolume = item._volume;

}


void Box::AddItem(Item item)
{
    _vec.push_back(item);
    _totalWeight += item._weight;
    _totalVolume += item._volume;
}

void Box::Presentation()
{


    std::cout << "Box: contains " << _vec.size() << " items, weight: " << _totalWeight << "g total, volume: " << _totalVolume << "L total\n";

}

