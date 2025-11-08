#ifndef _ARRAY_H_
#define _ARRAY_H_


/** @brief Zaalokowanie pamieci
 * 
 * Funkcja dynamicznie alokuje
 * pamiec wyznaczoną przez
 * użytkownika
 * 
 * @param size - ilosc pamieci do zaalokowania
 * 
 * @return wskaznik do poczatku tablicy, jezeli rozmiar
 * jest mniejszy lub rowny zero, zwracany 
 * jest nullptr
 * 
 */
int *InitArray(int size);



/** @brief Tworzenie sekwencji
 * 
 * Jezeli rozmiar jest wiekszy od zera , a tablica nie jest
 * nullptr, to na elementach tablicy tworzony jest ciag
 * typu: tablica[0] =0, tablica[1] = 0 + 1, tablica[n] = tablica[n-1] + n
 * 
 * @param array - tablica, na elementach ktorej 
 * bedzoe tworzona sekwencja
 * @param size - rozmiar tablicy
 * 
 * @return funckja nic nie zwraca
 * 
 */
void CreateSequence (int *array, int size);




/** @brief Zmiana rozmiaru tablicy
 * 
 * Funkcja zmienia rozmiar tablicy na nowo podany,
 * w ten sposob ze dynamicznie tworzy nowa tablice
 * o podanym rozmiarze.
 * Kopiuje wszystkie elementy z pierwotnej tablicy
 * do nowej, jesli rozmiar nowej jest wiekszy lub
 * rowny rozmiarowi pierwotnej tablicy. W przeciwnym
 * przypadku elementy sa kopiowane az do rozmiaru
 * nowej tablicy. Zwalniana jest pamiec z tablicy
 * pierwotnej.
 * 
 *@param array pierwotna tablica
  @param size rozmiar pierwotnej tablicy
  @param NewSize rozmiar nowej tablicy
 * 
 * @return Zwracany jest wskaznik do nowej tablicy.
 * Jesli nowy rozmiar lub pierwotny rozmiar
 * sa mniejsze od jeden, lub pierwotna tablica
 * jest nullptr, to zwracany jest nullptr.
 */
int *ChangeArraySize(int* array, int size, int NewSize);



/** @brief Usuwanie tablicy
 * 
 * Jesli  tablica nie jest nullptr, to
 * Funckja zwalnia pamiec tablicy i 
 * ustawia ja na nullptr
 * 
 * @param array tablica do usuniecia
 * 
 * @return funkcja nic nie zwraca 
 * 
 */
void DeleteArray(int *array);




#endif