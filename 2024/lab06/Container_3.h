#ifndef _Container_3_H_
#define _Container_3_H_


class Container_3
{
private:
    int maxCapacity;
    int tabLen;
    int* tab;

public:

    /** @brief konstruktor bezargumentowy Container_3
     * 
     *  konstruktor ustawia maxCapacity na 4 i tabLen na 0
     * oraz alokuje pamiec dla tab
     * 
     */
    Container_3();



    /** @brief konstruktor jednoargumentowy Container_3
     * 
     *  konstruktor ustawia maxCapacity na podane i tabLen na 0
     *  oraz alokuje pamiec tab
     * 
     * @param[in] size tak zostanie ustawiona maxCapacity
     * 
     */
    Container_3(int size);



    /** @brief destruktor Container_3
     * 
     *  destruktor zwalnia pamiec tabilcy 
     * 
     */
    ~Container_3();




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
     *  Funkcja sprawdza czy tablica
     * jest pusta
     * 
     *  @return zwraca 1 jesli jest pusta, 0 jesli
     * nie jest pusta
     */
    bool IsEmpty(void);


    /** @brief sprawdza czy tablica jest pelna
     * 
     *  Funkcja sprawdza czy tablica ma wszystkie (do maxCapacity)
     * elementy
     * 
     *  @return zwraca 1 jesli jest pelna, 0 jesli
     * nie jest pelna
     */
    bool IsFull(void);



    /** @brief dodaje element do tablicy
     * 
     * Funkcja dodaje element do tablicy. Jesli pojemnosc
     * tablicy jest mniejsza niz nowa ilosc elementow
     * to pojemnosc zostaje zwiekoszona
     * dwukrotnie. 
     * 
     *  @param[in] number element ktory ma zostac dodany do tablicy
     * 
     * @return void - czyli funkcja ktora nic nie zwraca
     */
    void Add(int number);



    /** @brief wyswietla zawartosc tablicy
     * 
     * Funkcja wypisuje wszystkie elementy tabliyc
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