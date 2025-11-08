#ifndef CAR_H
#define CAR_H

class Car
{
private:
    int id;
    bool state;
    double tankCapacity;
    double consumption;
    double fuel;

public:

    /** @brief Ustawianie ID samochodu
     * 
     * Funkcja nadaje samochodowi ID
     * 
     * @param[in] newID numer ID 
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */
    void SetID(int newID);



    /** @brief Ustawianie stanu samochodu
     * 
     * Funkcja uruchamia (1) bądź wyłącza samochod (0)
     * 
     * @param[in] newState stan samochodu
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */
	void SetState(bool newState);



    /** @brief Ustawianie pojemnosci zbiornika na paliwo
     * 
     * Funkcja ustawia pojemnosc na paliwo
     * 
     * @param[in] newTankCapacity pojemnosc znbiornika na paliwo
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */
	void SetTankCapacity(double newTankCapacity);



    /** @brief Ustawianie zuzycia paliwa samochodu
     * 
     * Funkcja ustawia zuzycia paliwa samochodu w [l/100km]
     * 
     * @param[in] newConsumption zuzycie paliwa 
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */
	void SetConsumption(double newConsumption);



    /** @brief Ustawianie ilosci paliwa samochodu
     * 
     * Funkcja ustawia ilosc paliwa w samochodzie
     * w przypadku większej ilosci niz maksymalna pojemnosc
     * ilosc paliwa jest ustawiana na maksymalna
     * 
     * @param[in] newFuel ilosc paliwa 
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */    
	void SetFuel(double newFuel);



    /** @brief Prezentacja samochodu
     * 
     * Funkcja prezentuje parametry samochodu
     * 
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */
    void Presentation(void);



    /** @brief Ustawianie ile przejedzie samochod 
     * 
     * Funkcja ustawia ile przejdzie samochod 
     * pod warunkiem, ze jest wlaczony i poziom 
     * benzyny jest wiekszy od zera
     * Jezeli poziom benzyny jest nie wystarczajacy do
     * przejazdu podango dystansu to samochod
     * przejezdza taki dystans, na ile wystarczy
     * z ilosci benzyny
     * 
     * Ze zbiornika odejmowana jest ilosc benzyny
     * zuzyta na przejechanie podanego dystansu
     * 
     * @param[in] distance stan samochodu
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
    */
	void Drive(double distance);



    /** @brief Uruchamiamie samochodu
     * 
     * Funkcja uruchamia samochod jesli jest wylaczony
     * 
     * @return funkcja typu void - dlatego nic nie zwraca
     * 
     */
	void Start(void);



    /** @brief Tankowanie samochodu
     * 
     * Funkcja dodaje samochodowi paliwa
     * Jezeli ilosc paliwa jest ujemna lub
     * razem z paliwem samochodu przekracza
     * maksymalna pojemnosc to ilosc paliwa
     * ustawiana jest na maksymalna
     * 
     * @param[in] howMuch ile paliwa dolewamy
     * @return funkcja typu void, dlatego nic nie zwraca
     * 
     */
	void Refuel(double howMuch);



    /** @brief Wylaczanie samochodu
     * 
     * Funkcja wylacza samochod jesli jest wlaczony
     * 
     * @return funkcja typu void - dlatego nic nie zwraca
     * 
     */    
	void Stop(void);
    
    
    double getTankCapacity(void);
    double getFuel(void);





};








#endif