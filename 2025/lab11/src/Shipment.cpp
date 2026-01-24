#include "Shipment.h"



Shipment::Shipment(const Pallet &obj):
_number(obj._vecPal.size()), _totalWeightShip(obj._totalWeightPal), _totalVolumeShip(obj._totalVolumePal){


}

Shipment::Shipment(const Item& obj):
    _number(-1), _totalWeightShip(obj._weight), _totalVolumeShip(obj._volume){


}


void Shipment::Presentation()
{


    std::cout << "Shipment:"  << " , weight: " << _totalWeightShip << "g total, volume: " << _totalVolumeShip << "L total\n";

}