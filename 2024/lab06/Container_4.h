#ifndef _Container_4_H_
#define _Container_4_H_

#include <vector>

class Container_4
{
private:
    std::vector<int> vec;

public:




    /** Funkcja usuwa ostatni element wektora
     * 
     *  Funkcja usuwa ostatni element wektora. Jezeli wektor jest pusta to wyswietlany
     * jest komunikat o bledzie.
     * 
     *  @return zwracany jest element ktory zostal usuniety lub 0 jesli
     * wystapil blad
     * 
     */
    int Delete(void);



    /** @brief sprawdza czy wektor jest pusty
     * 
     *  Funkcja sprawdza czy wektor  
     * jest pusty
     * 
     *  @return zwraca 1 jesli jest pusty, 0 jesli
     * nie jest pusty
     */
    bool IsEmpty(void);


    /** @brief sprawdza czy wektor jest pelny
     * 
     *  Wektor nigdy (z wyjatkiem przepelnienia)
     * nie jest pelny
     * 
     *  @return zwraca 1
     */
    bool IsFull(void);



    /** @brief dodaje element do wektora
     * 
     * Funkcja dodaje element na koniec wektora
     * 
     *  @param[in] number element ktory ma zostac dodany do wektora
     * 
     * @return void - czyli funkcja ktora nic nie zwraca
     */
    void Add(int number);



    /** @brief wyswietla zawartosc wektora
     * 
     * Funkcja wypisuje wszystkie elementy tabliyc
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
     */
    void Print(void);



    /** @brief zwraca ilosc elementow wektora
     * 
     *  Funckja zwraca ile elementow ma wektor
     * 
     *  @return funkcja zwraca ilosc elementow wektora
     */
    int Size(void);



    /** @brief usuwa wszystkie elementy wektora
     * 
     * 
     * Fubkcja usuwa wszystke elementy wektora
     * 
     * 
     *  @return void - czyli funkcja, ktora nic 
     * nie zwraca
     */
    void Clear(void);


};







#endif
