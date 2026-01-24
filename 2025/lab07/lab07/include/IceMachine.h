#ifndef _ICE_MACHINE_H_
#define _ICE_MACHINE_H_

#include <iostream>

class IceMachine
{
    friend class Service;

    private:
        int _id;
        bool _state;
        double _capacity;
        double _consumption;
        double _powder;

    public:

    /** @brief ustawianie id w klasie IceMachine
     * 
     *  Funkcja ustawia parametr _id na podany w argumencie
     * 
     * @param[in] id id do ustawienia
     * 
     * 
     * @return Funckja nic nie zwraca
     */
	void SetID(int id);



    /** @brief ustawianie stanu w klasie IceMachine
     * 
     *  Funkcja ustawia parametr _state na podany w argumencie
     * 
     * @param[in] state stan do ustawienia
     * 
     * 
     * @return Funckja nic nie zwraca
     */
	void SetState(bool state);



    /** @brief ustawianie pojemnosci w klasie IceMachine
     * 
     *  Funkcja ustawia parametr _capacity na podany w argumencie
     * 
     * @param[in] capacity pojemnosc maszyny do ustawienia
     * 
     * 
     * @return Funckja nic nie zwraca
     */
	void SetCapacity(double capacity);



    /** @brief ustawianie zyzycia w klasie IceMachine
     * 
     *  Funkcja ustawia parametr _consumption na podany w argumencie
     * 
     * @param[in] consumption konsumpcja do ustawienia
     * 
     * 
     * @return Funckja nic nie zwraca
     */
	void SetConsumption(double consumption);



    /** @brief ustawianie proszku w klasie IceMachine
     * 
     *  Funkcja ustawia parametr _powder na podany w argumencie
     * 
     * @param[in] powder ilosc proszku do ustawienia
     * 
     * 
     * @return Funckja nic nie zwraca
     */
	void SetPowder(double powder);    

    

    /** @brief Przedstawienie parametrow klasy IceMchine
     * 
     * Funckja przedstawia wszystkie zmienne
     * w klasy IceMachine
     * 
     * @return  Funckja nic nie zwraca
     */
    void Presentation(void);



    /** @brief Robienie lodow
     * 
     * Funkcja robi odpowiednia ilosc
     * lodow, pod warunkiem ze ilosc >=0
     * oraz maszyna jest wlaczona, robione
     * jest tyle lodow na ile wystarczy proszku
     * 
     * @param[in] porcje ilosc lodow do zrobienia
     * 
     *  @return Funckja nic nie zwraca
     * 
     */
    void Make(int porcje);


    /** @brief Uruchamianie maszyny
     * 
     * Funckja uruchamia maszyne pod
     * warunkiem, ze jest w niej proszek
     * 
     * 
     * @return Funckja nic nie zwraca
     */
    void Start(void);




    /** @brief Zatrzymanie maszyny
     * 
     * Funckja zatrzymuje maszyne
     * 
     * @return Funckja nic nie zwraca
     */
    void Stop(void);


    /**@brief dodawanie proszku
     * 
     * Funkcja dodaje proch do maszyny,
     * pod warunkiem ze jest wylacza i ilosc porszu >0
     * 
     * @return Funckja nic nie zwraca
     * 
     */
    void Reload(int proch);
};


#endif