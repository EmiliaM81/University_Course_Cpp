#ifndef SERVICE_H
#define SERVICE_H

#include "Car.h"
#include <iostream>

class Service
{

public:



    /** @brief Test serwisowy samochodu
     * 
     * Funkcja wykonuje serie testow na samochodzie
     * 
     * @param[in] MyCar wskaznik do obiektu Car
     * @param[in] road droga przejechana podczas testu
     * 
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
     */
    void Test(Car *MyCar, double road);

    /** @brief Test serwisowy identycznej wersji samochodu
     * 
     * Funkcja wykonuje serie testow na samochodzie
     * 
     * @param[in] MyCar obiekt Car
     * @param[in] road droga przejechana podczas testu
     * 
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
     */
    void TestCopy(Car MyCar, double road);
    
};









#endif