#ifndef _ITEM_H_
#define _ITEM_H_

#include <string>
#include <iostream>

class Item
{
    friend class Box;
    friend class Shipment;

    private:
    std::string _name;
    double _weight;
    double _volume;

    public:
    /** Konstruktor klasy Item
     * 
     * Konstruktor nadaje parametry _name, _weight, _volume
     * 
     * @param[in] name - nazwa itemu
     * @param[in] weight - waga itemu
     * @param[in] volume - objetosc itemu
     * 
     */
    Item(std::string name, double weight, double volume);


    /** Prezentacja obiektu Item
     * 
     * Funcja przedstawia nazwe, wage i objetosc obiektu
     * 
     * @return void - nic nie zwraca
     * 
     */
    void Presentation();


};


#endif