#ifndef _PRODUCT_H_
#define _PRODUCT_H_


class Product
{
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




    /** @brief Konstruktor Product
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


    /** @brief ustawia ilosc sztuk
     * 
     * Funkcja ustawia ilosc sztuk
     * danego produktu
     * 
     * @return void, czyli funkcja ktora nic
     * nie zwraca
     */
    void SetCard(int number);


};





#endif