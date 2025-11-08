#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <string>

class Product
{
    friend class Shop;
    friend int Compare(Product p1, Product p2);
private:


    int typ;
    int ileSztuk;
public:


    /** @brief Wyswietla informacje o produkcie
     * 
     *  Funkcja wyswietla typ oraz ilosc sztuk
     * produktu
     * 
     * @return void, czyli funkcja ktora nic nie zwraca
     */
    void Print();




    /** @brief Konstruktor dwuargumentowy Product
     * 
     * Konstruktor Product ktory ustawia dwa
     * parametry na podane przez uzytkownika
     * 
     *  @param[in] typN ustawia typ produktu
     *  @param[in] ileSztukN ustawia ilosc sztuk produktu
     * 
     * 
     */
    Product(int typN, int ileSztukN);


    /** @brief Konstruktor jednoargumentowy Product
     * 
     * Konstruktor Product parament "typ", ilosc
     * sztuk zostaje ustawiona na zero
     * 
     *  @param[in] typN ustawia typ produktu
     * 
     * 
     */
    Product(int typN);



    /** @brief ustawia ilosc sztuk
     * 
     * Funkcja ustawia ilosc sztuk
     * danego produktu
     * 
     * @return void, czyli funkcja ktora nic
     * nie zwraca
     */
    void SetCard(int number);

    
    
    /** @brief Zwraca string z Produktu
     * 
     * Funkcja zwraca string z Produktu
     * w postaci : <typ= ... , ilosc= ... >
     * 
     * @return string w postaci powyzej
     */
    std::string ToString();



    /** @brief Operator konwersji typu
     * 
     *  Zwracany jest string w postaci:
     * <typ= ... , ilosc= ... >
     * 
     * @return string w postaci powyzej
     * 
     */
    operator std::string();



    /** @brief Operator konwersji typu
     * 
     *  Zwracany jest int czyli 
     * typ produktu
     * 
     * @return sint
     * 
     */
    operator int();

    


    
    



};






#endif


