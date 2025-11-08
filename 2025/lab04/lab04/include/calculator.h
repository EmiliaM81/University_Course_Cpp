#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_


/** @brief Funkja wykonuje dzialania arytmetyczne
 * 
 * Funkcja wykonuje podstawowe dzialania arytmwtyczne : 
 * +,-,*,/. Jezeli wykonywanie jest dzielenie przez zero
 * to wyswietlany jest komunikat o bledzie. Jezeli operacja nie 
 * jest zadna z powyzszych, to rowniez wyswietlany jest komunikat o bledzie.
 * 
 *  @param[in] var1 piersza zmienna
 *  @param[in] var2 druga zmienna
 *  @param[in] var3 operatoe
 * 
 *  @return zwraca wartość dzialania. Przy bledzie zwrocone 
 * jest zero
 * 
 */
double basic_operation(double var1, double var2, char var3);

#ifdef FULL_FUNCTIONALITY

/** @brief Informacja o operatorze
 * 
 * Funkcja zwraca informaje o podanym
 * przez uzytkownika operatorze, ktory moze 
 * byc zaawansowany
 * 
 *  @return funkcja nic nie zwraca
 * 
 */
void print_operation_info(char info);





/** @brief Funkja wykonuje skomplikowane dzialania arytmetyczne
 * 
 * Funkcja wykonuje zaawansowane dzialanie, ktorego
 * moze nie obslugiwac zwykly kalkulator
 * 
 *  @param[in] var1 piersza zmienna
 *  @param[in] var2 druga zmienna
 *  @param[in] var3 operatoe
 * 
 *  @return zwraca wartość dzialania. Przy bledzie zwrocone 
 * jest zero
 * 
 */
double advanced_calculation(double var1, double var2, char var3);

#endif




#endif
