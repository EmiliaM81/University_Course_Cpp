#ifndef _Shop_B_H_
#define _Shop_B_H_

#include "Product.h"
#include <iostream>

class ShopB
{
private:
    Product* _tab;
    int _tabSize;
    int _dynamicSize;
    
  

    
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
     *  Funkcja usuwa ostatni 
     * produkt w tablicy sklepu
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





    /** @brief Konstruktor bezagrumentowy ShopB
     * 
     * Konstruktor bezagrumentowy Product,
     * nie pobiera argumentow
     * 
     */
    ShopB();


    /** @brief Konstruktor kopiujący
     * 
     *  Konstuktor kopiuje inny obiekt ( w
     * tym przypadku robi głabokie kowiowanie) ShopB
     *  i na podstawie tego tworzy nowy
     * 
     * @param[in] source Obiekt klasy ShopB, którego zawartość ma zostać skopiowana.
     */
    ShopB(const ShopB &source);



    /** @brief operator przypisywania kopiujący
     * 
     * Operator przypisuje do istniejącego juz opiektu
     *  ShopB inny obiekt ShopB, kopiując jego zawartość
     * 
     * param[in] source Obiekt klasy ShopB, na podstawie
     * kotorego przypisujemy 
     * 
     * @return Referencja do obiektu ShopB
     */
    ShopB& operator=(const ShopB &rhs);


};




#endif