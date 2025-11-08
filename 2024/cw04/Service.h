#ifndef _SERVICE_H_
#define _SERVICE_H_

#include "Car.h"

class Service
{
private:
    
public:
    /** @brief Test serwisowy samochodu
     * 
     * Funckja wykonuje serie testow 
     * na samochodzie - tankowanie do
     * pelna i jazde serwisowa
     * 
     * @param[in] car wskaznik do samochodu
     * @param[in] road droga do przejechania
     * podaczas test
     * 
     * @return void,czyli funckja ktora nic nie zwraca
     */
    void Test(Car* car, double road);



    /** @brief Test serwisowy na egzemplarzu 
     * fabrycznym o identycznych parametrach
     * 
     * Funckja wykonuje serie testow 
     * na egzemplarzu samochodu - tankowanie
     * do pelna i jazde testowa
     * 
     * @param[in] car samochod
     * @param[in] road droga do przejechania
     * podaczas test
     * 
     * @return void,czyli funckja ktora nic nie zwraca
     */
    void TestCopy(Car car, double road);

    
};






#endif