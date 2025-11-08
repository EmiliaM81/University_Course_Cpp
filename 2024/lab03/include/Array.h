#ifndef ARRAY_H
#define ARRAY_H

#define PRINT_RESULTS 1


/** @brief Tworzenie nowej tablicy
 * 
 * Funkcja dynamicznie alokujac pamiec
 * tworzy nową tablice intow 
 * o podanym rozmiarze
 * 
 * 
 * 
 * @param[in] size dlugosc tablicy
 * @return wskaznik do utworzonej tablicy intow
 * lub nullptr jesli size jest mniejszy lub 
 * rowny zero
 */
int* InitArray(int size);



/** @brief Tworzenie silni
 * 
 * Funkcja ustawia poszczegolne elementy
 * listy na kolejne wartosci silni
 * (pod warunkiem ze tablica nie jest 
 * nullptr oraz size jest większe
 * od zera)
 * 
 * @param[in] arr wskaznik do tablicy
 * @param[in] size dlugosc tablicy
 * @return void czyli funkcja, ktora nic nie zwraca
 */
void CreateSequence(int *arr, int size);



/** @brief Usuwanie tablicy
 * 
 * Funkcja zwalnia pamiec dynamicznie
 * zaalokowanej tablicy
 * 
 * @param[in] arr wskaznik do tablicy
 * @return void czyli funkcja, ktora nic nie zwraca
*/
void DeleteArray(int *arr);


#endif