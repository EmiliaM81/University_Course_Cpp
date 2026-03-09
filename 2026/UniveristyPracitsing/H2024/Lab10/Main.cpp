/*
Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się, 
a wynik jego działania był taki sam jak podany na końcu tego pliku.

Wymagania:
    Napisać klasy Company i Worker/Employee tak by program wykonywał się
    Zdefiniować wyrażenia lambda przekazywane do metod w taki sposób by program wykonywał się
    Zdefiniować metody addEmployee, displayEmployees, removeEmployees jak i sortEmployees w klasie company 
    Proszę się upewnić czy importujemy to co jest potrzebne 
    Proszę dodawać pracowników w firmie za pomocą push_back()
    
Pliku Main.cpp nie wolno modyfikować, chyba że w tekście zadania podano inaczej (Oznaczenie TODO:).

Program wyjściowy powinien składać się z czytelnego kodu. Powinna być spełniona zasada D.R.Y. - Don’t Repeat Yourself.

Zadania oceniane są wg algorytmu:

    Warunkiem przystąpienia do oceniania programu jest jego poprawna kompilacja (bez błędów).
    Dokumentacja - 1 pkt.
    Poprawna kompilacja (bez ostrzeżeń) - 2 pkt.
    Poprawne wykonanie (odpowiednie wyjście, brak wycieków pamięci itp.) - 3 pkt.
    Ocena kodu (pod względem projektowym, zgodności z OOP, przejrzystości oraz sposobu implantacji) - maks. 4 pkt.


Programy niezgodne z tematem/celem zadania, 
ale kompilujące się (i dające potencjalnie "poprawne" wyjście) będą oceniane na 0 pkt.

*/

#include <iostream>
#include "Company.h"


int main() {
    Company company;


    company.addEmployee("Piotr Zieliński", "Manager", 160, 50); 
    company.addEmployee("Jan Kowalski", "Programista", 140, 131.25); // Godziny pracy, stawka godzinowa
    company.addEmployee("Anna Wysocka", "Księgowa", 180, 27); // Godziny pracy, stawka godzinowa

    company.addEmployee("Pawel", "CEO", 121, 27.90); 

    company.addEmployee("Gawel", "CTO", 1212, 12.5);
    

    company.addEmployee("Eustachy", "Eustachy", 10, 27.90); 

    // Wyświetlamy wszystkich pracowników
    company.displayEmployees();

    // Sortujemy pracowników według pensji za pomocą wyrażenia lambda
    // TODO: Napisz wyrażenie lambda, które porównuje pensje pracowników
    company.sortEmployees([](Worker &a, Worker &b){ return a.getSalary() < b.getSalary();});


    std::cout << "Posortowani pracownicy (rosnąco wg pensji):" << std::endl;
    // Ponownie wyświetlamy pracowników
    company.displayEmployees();

    // Usuwamy pracowników, którzy spełniają określone kryterium za pomocą wyrażenia lambda
    // TODO: Napisz wyrażenie lambda, które sprawdza, czy pracownik pracował poniżej 160 godzin
    company.removeEmployees([](Worker &a){ return a.getHours() < 160;});
    std::cout << "Posortowani pracownicy (po zwolnieniach):" << std::endl;

    // Ponownie wyświetlamy pracowników
    company.displayEmployees();


    // TODO: Czy pamięć wyczyszczona?
    return 0;
}

/*Spodziewany output

Jan Kowalski - 5000.0 PLN
Anna Wysocka - 4860.0 PLN
Piotr Zieliński - 8000.0 PLN

Posortowani pracownicy (rosnąco wg pensji):

Anna Wysocka - 4860.0 PLN
Jan Kowalski - 5000.0 PLN
Piotr Zieliński - 8000.0 PLN

Posortowani pracownicy (po zwolnieniach):

Anna Wysocka - 4860.0 PLN
Piotr Zieliński - 8000.0 PLN



*/