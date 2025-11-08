#ifndef _FUNCTOR_H_
#define _FUNCTOR_H_

class Functor
{
private:
    int mniejsze;
    int rowne;
    int wieksze;
public:


    /** @breif Konstruktor bezargumentowy klasy Functor
     * 
     *  Konstruktor ustawia początkowe wartości:
     * mniejsze, rowne oraaz wieksze na zero.
     * 
     */
    Functor();




    /** @brief Funkcja wypisująca statystyki
     * 
     * Funkcja wypisuje odpowiednio ile razy pierwszy
     * argument w porownaniu z drugium przy porownaniu
     * byl mniejszy rowny oraz wiekszy
     * 
     * @return void, czyli funkcja ktora nic nie zwraca
     * 
     */
    void wypiszStatystyki(void);



    /** operator klasy Functor porownujacy dwie liczby calkowite
     * 
     * Operator porownuje liczby, i na podstawie 
     * tego zwieksza odpowiednio parametr wieszy, rowny lub 
     * mniejszy o jeden.
     * 
     * @param[in] a pierwsza liczba
     * @param[in] b druga liczna
     * 
     * @return operator zwraca wartosc porownania liczby a z b
     * 
     */
    bool operator()(int a, int b);
};







#endif