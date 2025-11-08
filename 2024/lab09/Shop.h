#ifndef _SHOP_H_
#define _SHOP_H_

#include "Product.h"
#include <vector>
#include <iostream>

class Shop
{
private:
    std::vector<Product> vec; // initialize to empty
  

    
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
    
    void Clear();





    /** @brief Konstruktor bezagrumentowy Shop
     * 
     * Konstruktor bezagrumentowy Product,
     * nie pobiera argumentow
     * 
     */
    Shop();




    /** @brief Konstruktor jednoargumentowy Shop
     * 
     * Konstruktor Product, dodoaje jeden prdodukt
     * do wektora klasy Shop
     * 
     * @param[in] prod1 Produkt ktory bedzie dodoany
     * do wektora 
     * 
     */    
    Shop(Product prod1);




    /** @brief Konstruktor dwuargumentowy Shop
     * 
     * Konstruktor Product, dodoaje dwa prdodukty
     * do wektora klasy Shop
     * 
     * @param[in] prod1 Produkt ktory bedzie dodoany
     * do wektora 
     * @param[in] prod2 Produkt ktory bedzie dodoany
     * do wektora 
     * 
     */   
    Shop(Product prod1, Product prod2);

    
    Shop(int len, Product** prodPtr );





    Shop(std::vector <Product> newVec );



    
    /** @brief Operator konwersji typu
     * 
     *  Zwracany jest int czyli 
     * suma ilosci sztuk wszystkich
     * produktow 
     * 
     * @return int
     * 
     */
    operator int();

};




#endif