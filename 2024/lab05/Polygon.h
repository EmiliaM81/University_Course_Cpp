#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <vector>

class Polygon
{
private:
    std::string name;
    Point* arr;
    int countVertices;
public:


    /** @brief Prezentacja wielokata
     * 
     * Funkcja prezentuje wielokat
     * Wypisuje jego nazwe oraz 
     * wszystkie informacje na temat jego wierzcholkow
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */
    void Presentation(void);


    /** @brief Ustawianie nazwe wielokata
     * 
     * Funkcja ustawia nazwe wielokata
     * 
     * @param[in] newName nowa nazwa wielokata
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */
    void SetName(std::string newName);
    



    /** @brief Ustawianie puntku wielokata
     * 
     * Funkcja ustawia punkt wielokata
     * 
     * @param[in] whichOne ktory to ma byc wierzcholek
     * @param[in] newName nowa nazwa punktu tego wierzhloka
     * @param[in] x nowa wspolrzedna x punktu tego wierzhloka
     * @param[in] y nowa wspolrzedna y punktu tego wierzhloka
     * 
     * 
     *  @return void - czyli funkcja ktora nic nie zwraca
    */    
    void SetVertice(size_t whichOne, std::string newName, double x, double y);
    


    /** @brief Zwracaine punktow wielokta
     * 
     * Funkcja zwraca wskaznik do tablicy
     * gdzie sa inofrmacje o punktach wielokata
     * 
     * @return Funkcja zwraca wskaznik do tablicy z 
     * punktami wielokata
    */
    Point* GetVertices(void);


    /** @breif Ustawianie nowych wierzcholkow
     * 
     * Funkcja ustawia nowa liczbe wierzcholkow 
     * z listy
     * 
     * @param[in] count ilosc wierzcholkow
     * @param[in] pointArr tablica wierzcholkow
     * 
     * @return void, czyli funkcja, ktora nic nie zwraca
     * 
     */
    void SetNewVertices(size_t count, Point* pointArr);

    
    /** @brief Konstruktor Polygon bez argumentow
     * 
    */
    Polygon();



    /** @brief Konstruktor Polygon ustawiajacy nazwe
     * 
     * @param[in] newName nazwa wielokata 
    */
    Polygon(std::string newName);


    /** @brief Konstruktor Polygon ustawiajacy nazwe i trzy punkty
     * 
     * Konstruktor ustawia nazwe wilokata i trzy jego punkty
     * 
     * @param[in] newName nazwa wielokata
     * @param[in] p1 pierwszy punkt wielokata
     * @param[in] p2 drugi punkt wielokata
     * @param[in] p3 trzeci punkt wielokata
     * 
    */
    Polygon(std::string newName, Point p1, Point p2, Point p3);



    /** @brief Konstruktor Polygon ustawiajacy nazwe i cztery punkty
     * 
     * Konstruktor ustawia nazwe wilokata i cztery jego punkty
     * 
     * @param[in] newName nazwa wielokata
     * @param[in] p1 pierwszy punkt wielokata
     * @param[in] p2 drugi punkt wielokata
     * @param[in] p3 trzeci punkt wielokata
     * @param[in] p4 czwarty punkt wielokata
     * 
     * 
    */
    Polygon(std::string newName, Point p1, Point p2, Point p3, Point p4);




    /** @brief Konstruktor Polygon ustawiajacy nazwe i szereg punktow
     * 
     * Konstruktor ustawia nazwe wilokata i podana ilosc jego punktow
     * zawartych w tabilicy 
     * 
     * @param[in] newName nazwa wielokata
     * @param[in] pointCount ilosc puntktow 
     * @param[in] pointArr tablica z punktami ktore zostana
     * zapisane do wielokata
     * 
     * 
    */
    Polygon(std::string newName, size_t pointCount, Point* pointArr);



    /** @brief destruktor Wielokata
     * 
     */
    ~Polygon();
};




#endif