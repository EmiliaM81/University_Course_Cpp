#ifndef _Shop_C_H_
#define _Shop_C_H_

#include "Product.h"
#include <iostream>

class ShopC
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
     *  Funkcja ustawia ilosc produktow 
     * w tablicy na zero
     * 
     * @return void, czyli funkcja ktora
     * nic nie zwraca
     */        
    void Clear();







    /** @brief Konstruktor bezagrumentowy ShopC
     * 
     * Konstruktor bezagrumentowy Product,
     * nie pobiera argumentow
     * 
     */
    ShopC();




    /** @brief Konstruktor kopiujący
     * 
     *  Konstuktor kopiuje inny obiekt ( w
     * tym przypadku robi głabokie kowiowanie) ShopC
     *  i na podstawie tego tworzy nowy
     * 
     * @param[in] source Obiekt klasy ShopC, którego zawartość ma zostać skopiowana.
     */
    ShopC(const ShopC &source);

    



    /** @brief operator przypisywania kopiujący
     * 
     * Operator przypisuje do istniejącego juz opiektu
     *  ShopC inny obiekt ShopC, kopiując jego zawartość
     * 
     * @param[in] source Obiekt klasy ShopC, na podstawie
     * kotorego przypisujemy 
     * 
     * @return Referencja do obiektu ShopC
     */    
    ShopC& operator=(const ShopC &rhs);



    /** @brief konstruktor przenoszący
     * 
     * Konstruktor działa na zasadzie przenoszenia,
     * tzn. przenosi zawartosc z source do nowo
     * tworzonego obiektu ( r- value ), a zawartosc source "zeruje"
     * 
     *  @param[in] source - obiekt, z ktorego przenosimy zawartosc
     * 
     */
    ShopC(ShopC &&source);





    /** @brief Destruktor ShopC
     * 
     * Destruktor ShopC, uwalnia
     * zaalokowaną wczesniej pamiec
     * 
     */
    ~ShopC();


    ShopC& operator=(ShopC&& rhs);
};

#endif