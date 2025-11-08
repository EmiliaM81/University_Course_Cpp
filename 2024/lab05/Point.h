#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>

class Point
{
private:
    std::string name;
    double xData;
    double yData; 

public:

    /** @brief Prezentacja puntku
     * 
     *  Funkcja wypisuje jego nazwe oraz 
     * wspolrzedne x i y
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */
	void Presentation(void);


    /** @brief Otrzymywanie znawy punktu
     * 
     *  @return Funkcja zwraca nazwe punktu
    */
    std::string getName (void);


    /** @brief Otrzymywanie wspolrzednej x punktu
     * 
     *  @return Funkcja zwraca wspolrzedna x punktu
    */
    double getX(void);




    /** @brief Otrzymywanie wspolrzednej y punktu
     * 
     *  @return Funkcja zwraca wspolrzedna y punktu
    */
    double getY(void);


    

    /** @brief Ustawianie nazwy punktu
     * 
     * Funkcja ustawia nazwe punktu
     * 
     * @param[in] newName nowa nazwa punktu
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */
	void SetName(std::string newName);



    /** @brief Ustawianie wspolrzedniej x
     * 
     * Funkcja ustawia wsppolrzedna x
     * 
     * @param[in] x nowa wspolrzedna x
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */
	void SetX(double x);



    /** @brief Ustawianie wspolrzedniej y
     * 
     * Funkcja ustawia wsppolrzedna y
     * 
     * @param[in] y nowa wspolrzedna y
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */
	void SetY(double y);



    /** @brief Konstruktor bez argumentow
     * 
     * @return void, czyli funkcja ktora nic nie zwraca  
    */
    Point();



    /** @brief Konstruktor Point bioracy nazwe punktu
     * 
     * Funkcja ustawia nazwe punktu
     * 
     * @param[in] newName nazwa punktu 
    */
    Point(std::string newName);

    
    
    /** @brief Konstruktor Point bioracy nazwe punktu oraz jego wspolrzedne
     * 
     * Funkcja ustawia nazwe punktu oraz jego wspolrzedne
     * 
     * @param[in] newName nazwa punktu
     * @param[in] newX wspolrzedna x punktu
     * @param[in] newName wspolrzedna y punktu 
    */
    Point(std::string newName, double newX, double newY);

    /** @brief Destruktor Point
    */
    ~Point();
};





#endif