#ifndef _CONTAINER_3_H_
#define _CONTAINER_3_H_

#include <iostream>

class Container_3{
    

    private:
        int* _tab;
        int _currSize;
        int _tabSize;


    public:

    /** @brief kontruktor jednoargumentowy klasy Container_3 
     *  
     *  Konstrukotr dynamicznie alukuje pamiec na wskazana przez
     * parametr size, ustawia ilosc elementow na zero, oraz 
     * roamiar tablizy na parametr size
     * 
     *  @param[in] size rozmiar tablicy
    */ 
    Container_3(int size);

        /** @brief destruktor klasy Container_3 */
        ~Container_3();

        /** @brief Usuwanie pierwszego elementu tablicy
         * 
         * Jezeli tablica jest pusta, wyswietlany jest
         * komunikat o bledzie, jezeli nie, usuwany
         * jest pierwszy element listy
         * 
         * @return funkcja zwraca 1 w przypadku sukcesu
         * lub 0 w przypadku pustej tablicy
         */
        int Delete();


        /** @brief Sprawdzanie czy tablica jest pelna
         * 
         *  Funkcja sprawdzam czy tablica ma zapelnione
         * wszystkie elementy (czy ilosc elementow jest rowna
         * rozmiarowi tabliicy)
         * 
         * @return zwracana jest wartosc true jesli tablica
         * jest zapelniona lub false jesli nie
        */
        bool IsFull();




        /** @brief Sprawdzanie czy tablica jest pusta
         * 
         *  Funkcja sprawdzam czy tablica ma jakikolwiek element
         * 
         * @return zwracana jest wartosc true jesli tablica
         * jest pusta lub false jesli nie
        */
        bool IsEmpty();


        /** @brief Dodawanie elementu do tablicy
         * 
         *  Jeseli tablica jest zapelnioa, jej 
         * rozmiar jest dwukotnie zwikszaony
         *  Do tablicy dodawany jest element num
         * 
         *  @param[in] num element do dodania
         * 
         *  @return funkcja nic nie zwraca
         */
        void Add(int num);

        /** @brief Wyswietlanie elementow tablicy
         * 
         *  Funkcja wypisuje elementy tablicy
         * 
         * @return funkcja nic nie zwraca
         */
        void Print();

        /** @brief  Zwracanie ilosci elementow tablicy
         * 
         *  
         * 
         * @return Funkcja zwraca ilosc elementow tablicy
         */
        int Size();

        /** @brief Usuwanie elementow tablicy
         * 
         *  Funkcja ustawia ilosc elementow tablicy na 0
         * 
         * @return funkcja nic nie zwraca
         */
        void Clear();

};

#endif