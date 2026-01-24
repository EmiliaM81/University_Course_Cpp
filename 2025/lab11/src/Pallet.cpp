#include "Pallet.h"

Pallet::Pallet(Box box)
{
    _vecPal.push_back(box);
    _totalWeightPal = box._totalWeight;
    _totalVolumePal = box._totalVolume;

}
void Pallet::AddBox(Box item)
{
    _vecPal.push_back(item);
    _totalWeightPal += item._totalWeight;
    _totalVolumePal += item._totalVolume;
}

void Pallet::Presentation()
{


    std::cout << "Pallet: contains " << _vecPal.size() << " items, weight: " << _totalWeightPal << "g total, volume: " << _totalVolumePal << "L total\n";

}