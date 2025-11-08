#ifndef _CAR_H_
#define _CAR_H_

class Car
{
private:
    int id;
    bool state;
    double tankCapacity;
    double consumption; //litrow na 100 km
    double fuel;
public:

    /** @brief konstruktor bezargumentowy
     * klasy Car
     * 
     *  Konstruktor ustawia wszystkir parametry
     *  na wyzerowane
     * 
     */
    Car();

    /** @brief Ustawianie ID
     * 
     * Funnkcja ustawia ID samochodu
     * 
     *  @param[in] id id do ustwienie
     * 
     *  @return void,czyli funkcja ktora nic nie zwraca
     */
    void SetID(int id);


    /** @brief Ustawianie stanue
     * 
     * Funnkcja ustawia stan samochodu
     * 
     *  @param[in] state stan do ustawienia
     * 
     *  @return void,czyli funkcja ktora nic nie zwraca
     */    
	void SetState(bool state);



    /** @brief Ustawianie pojemnosci baku
     * 
     * Funnkcja ustawia pojemnosc baku
     * 
     *  @param[in] tankCapacity pojemnosc baku do ustawienia
     * 
     *  @return void,czyli funkcja ktora nic nie zwraca
     */        
	void SetTankCapacity(double tankCapacity);




    /** @brief Ustawianie spalania paliwa
     * 
     * Funnkcja ustawia spalannie paliwa
     * 
     *  @param[in] constumption spalanie paliwa
     * samochodu do ustawienia
     * 
     *  @return void,czyli funkcja ktora nic nie zwraca
     */        
	void SetConsumption(double consumption);



     /** @brief Ustawianie poziomu paliwa
     * 
     * Funnkcja ustawia poliom plaiwa samochodu
     * 
     *  @param[in] fuel poziom paliwa do ustawienia
     * 
     *  @return void,czyli funkcja ktora nic nie zwraca
     */       
	void SetFuel(double fuel);



    /** @brief Otrzymanie pojmenosci baku
     * 
     * Funkcja zwraca pojemnosc baku]na paliwo
     * samochodu
     * 
     * @return double, czyli pojemnosc baku
     * 
     */
    double GetTankCapacity();



    /** @brief Prezentacja samochodu
     * 
     * Funckja prezentuje parametry samochodu
     * 
     * @return void, czyli funkcja ktora nic nie zwraca
      */
    void Presentation(void);


    /** @brief Przejechanie dystansu
     * 
     * Funkcja sprawia ze samochod przejezdza
     * dany dystans. Jezeli ma za malo paliwa to
     * przejedza tyle na ile wystarczy. Jezeli nie jest
     * uruchomiony lub nie ma paliwa to wysietalny jest 
     * komunikat o bledzie
     * 
     * @param[in] distance dystans fo przejechania
     * 
     * @return void, czyli funkcja ktora nic nie zwraca
     * 
     */
    void Drive(int distance);



    /** @brief Uruchamianie samochodu
     * 
     * Funkcja ustawia stan samochodu na true
     * 
     * @return void, czyli funckja ktora nic 
     * nie zwraca
     */
    void Start();


    /** @brief Tankowanie Samochodu
     * 
     * Funkcja tankuje sampchoud na podana ilosc
     * paliwa. Jezeli paliwo w baku razem z paliwem 
     * do zatankowania przekracza maksymalna pojemnosc 
     * baku to samochod tankowany jest do pelna
     * 
     * @return void, czyli funkcja ktora nic nie zwraca
     */
    void Refuel(int newFuel);



    /** @brief Zatrzymanie samochodu
     * 
     * Funkcja ustawia stan samochodu na false
     * 
     * @return void, czyli funckja ktora nic 
     * nie zwraca
     */    
    void Stop();



};






#endif
