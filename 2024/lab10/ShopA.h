#ifndef _Shop_A_H_
#define _Shop_A_H_

#include "Product.h"
#include <iostream>

class ShopA
{
private:
    int _tabSize = 0;
    Product _tab[20];
    
  

    
public:

    /** @brief Wyswietla informacje o sklepie
     * 
     *  Funkcja wyswietla wszystkie produkty
     *  w sklepie i informacje na ich temat
     * 
     * @return void, czyli funkcja ktora
     * nic nie zwraca
     */
    void Print();




    /** @brief Usuwa produkt
     * 
     *  Funkcja usuwa ostatni produkt 
     * w wektorze sklepu
     * 
     * @return void, czyli funkcja ktora
     * nic nie zwraca
     */
    void Remove();




    /** @brief Dodaje produkt
     * 
     *  Funkcja dodaje produkt 
     * w wektorze sklepu
     * 
     * @param[in] prod produkt do dodania
     * 
     * @return void, czyli funkcja ktora
     * nic nie zwraca
     */    
    void Add(Product prod);
    

    /** @brief Usuwa wszystkie produktu
     * 
     *  Funkcja usuwa wszystkie produkty
     * w tablicy sklepu (ustawia size na 0)
     * 
     * @return void, czyli funkcja ktora
     * nic nie zwraca
     */        
    void Clear();





    /** @brief Konstruktor bezagrumentowy ShopA
     * 
     * Konstruktor bezagrumentowy Product,
     * nie pobiera argumentow
     * 
     */
    ShopA();


};




#endif