#ifndef _PALLET_H_
#define _PALLET_H_

#include "Box.h"

class Pallet
{
    friend class Shipment;
    private:
        std::vector<Box> _vecPal;
        double _totalWeightPal;
        double _totalVolumePal;


    public:

    /** Konstruktor klasy Pallet
     * 
     * Konstrukor dodaje do wektora obiektu
     * palety obiekt klasy Box i dodaje
     * jego wage i objetosc
     * 
     */
    Pallet(Box box);

    /** Dodawanie obiektu 
     * 
     * Funckja dodaje do wektora obiektu
     * palety obiekt klasy Box i dodaje
     * jego wage i objetosc
     * 
     */
    void AddBox(Box item);

    /** Prezentacja obiektu Pallet
     * 
     * Funcja przedstawia rozmiar wektora wage i objetosc obiektu
     * 
     * @return void - nic nie zwraca
     * 
     */
    void Presentation();

};


#endif