#ifndef _CONTAINER_1_H_
#define _CONTAINER_1_H_

#include <iostream>

class Container_1{

    private:
        int _tab[4];
        int _currSize = 0;


    public:
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
         * wszystkie 4 elementy
         * 
         * @return zwracana jest wartosc true jesli tablica
         * jest zapelniona lub false jesli nie
        */
        bool IsEmpty();


        /** @brief Sprawdzanie czy tablica jest pusta
         * 
         *  Funkcja sprawdzam czy tablica ma jakikolwiek element
         * 
         * @return zwracana jest wartosc true jesli tablica
         * jest pusta lub false jesli nie
        */
        bool IsFull();


        /** @brief Dodawanie elementu do tablicy
         * 
         *  Jeseli tablica jest zapelnioa, wyswietalny jest komunikat
         * o bledzie. W przeciwnym wypadku do tablicy dodawany jest element
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