#ifndef _BOX_H_
#define _BOX_H_

#include "Item.h"
#include <vector>

class Box
{
    friend class Pallet;
    friend class Shipment;
    private:
        std::vector<Item> _vec;
        double _totalWeight;
        double _totalVolume;


    public:
    /** Konstruktor kopiujacy klasy Box
     * 
     * Konstruktor dodaje do wektora
     * obiekt item, dodaje jego wage i rozmiar
     * Jest explixit co zapobiega niejawnej konswrsji typow
     * 
     */
    explicit Box(const Item& item);

    /** Dodawanie obiektu 
     * 
     * Funckja dodaje do wektora obiektu
     * palety obiekt klasy Item i dodaje
     * jego wage i objetosc
     * 
     */
    void AddItem(Item item);


    /** Prezentacja obiektu Box
     * 
     * Funcja przedstawia rozmiar wektora, wage i objetosc obiektu
     * 
     * @return void - nic nie zwraca
     * 
     */
    void Presentation();

 

};


#endif
