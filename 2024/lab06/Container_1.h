#ifndef _CONTAINER_1_H_
#define _CONTAINER_1_H_

class Container_1
{
private:
    int maxLen;
    int tabLen;
    int tab[4];

public:

    /** @brief konstruktor bezargumentowy Container_1
     * 
     *  konstruktor ustawia maxLen na 4 i tabLen na 0
     * 
     */
    Container_1();



    /** Funkcja usuwa ostatni element tablicy
     * 
     *  Funkcja usuwa ostatni element tablicy (tj zmniejsza
     * wartosc zmiennej przechowujacej wartosc ilosci elementow
     * tablicy o jeden). Jezeli tablica jest pusta to wyswietlany
     * jest komunikat o bledzie.
     * 
     *  @return zwracany jest element ktory zostal usuniety lub 0 jesli
     * wystapil blad
     * 
     */
    int Delete(void);



    /** @brief sprawdza czy tablica jest pusta
     * 
     *  Funkcja sprawdza czy tablica statyczna 
     * jest pusta
     * 
     *  @return zwraca 1 jesli jest pusta, 0 jesli
     * nie jest pusta
     */
    bool IsEmpty(void);


    /** @brief sprawdza czy tablica jest pelna
     * 
     *  Funkcja sprawdza czy tablica ma wszystkie 4
     * elementy
     * 
     *  @return zwraca 1 jesli jest pelna, 0 jesli
     * nie jest pelna
     */
    bool IsFull(void);



    /** @brief dodaje element do tablicy
     * 
     * Funkcja dodaje element do tablicy, pod warunkiem,
     * ze nie jest ona zapelniona. Jesli tablica jest zapelniona
     * wyswietlony zostaje komunikat o bledzie
     * 
     *  @param[in] number element ktory ma zostac dodany do tablicy
     * 
     * @return void - czyli funkcja ktora nic nie zwraca
     */
    void Add(int number);



    /** @brief wyswietla zawartosc tablicy
     * 
     * Funkcja wypisuje wszystkie elementy tablicy
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
     */
    void Print(void);



    /** @brief zwraca ilosc elementow tablicy
     * 
     *  Funckja zwraca ile elementow ma ustawionych
     * tablica (tj. zwraca wartosc zmiennej okreslajacej
     * ilosc elementow tablicy)
     * 
     *  @return funkcja zwraca ilosc elementow tablicy
     */
    int Size(void);



    /** @brief usuwa wszystkie elementy tablicy
     * 
     * 
     * Funkcja usuwa wszystke elementy tablicy
     * (tj. ustawia ilosc elementow tablicy na 0)
     * 
     *  @return void - czyli funkcja, ktora nic 
     * nie zwraca
     */
    void Clear(void);


};







#endif