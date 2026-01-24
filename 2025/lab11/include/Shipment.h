#ifndef _SHIPMENT_H_
#define _SHIPMENT_H_

#include "Pallet.h"
#include "Item.h"
#include "Box.h"


class Shipment
{
    private:
        int _number;
        double _totalWeightShip;
        double _totalVolumeShip;


    public:

    /** Konstruktor kopiujacy klasy Shipment z obiektu Pallet
     * 
     * Konstruktor ostawia _number na rozmiar 
     * wektora obiektu Pallet, wage na wage 
     * obiektu Shipment i objetosc na objetosc 
     * obieltu shipmeny
     * 
     */
    Shipment(const Pallet &obj);

    /** Konstruktor kopiujacy klasy Shipment z obiektu Item
     * 
     * Konstruktor ostawia _number na -1, wage na wage 
     * obiektu Ite, i objetosc na objetosc 
     * obieltu Item
     * 
     */
    Shipment(const Item &item);



    /** Prezentacja obiektu Shipment
     * 
     * Funcja przedstawia wage i objetosc obiektu
     * 
     * @return void - nic nie zwraca
     * 
     */
    void Presentation();

 

};


#endif