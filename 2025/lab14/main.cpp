// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
//  
// Prosze uzupelnic niniejsze kody tak, aby program wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Pliku Main.cpp oraz funkcji zdefiniowanych juz w zalaczonych plikach cpp nie wolno modyfikowac.
//
// Uwaga: Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
//
// !!! W implementowanych klasach mozna uzywac tylko tablic dynamicznych (new, delete) !!! 
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem labNN/ (gdzie NN to nr laboratorium np. lab01)
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar.gz
// * wszystkie funkcje w plikach *.h powinny być okomentowane zgodnie z wczesniej ustalonym wzorem (format pod Doxygena)
// * do szybkiej weryfikacji poprawnosci wyjscia mozna uzyc diff-a (np.: diff -B plik_z_outputem_z_main plik_z_outputem_z_programu > wyniki_porownania.out)



#include <iostream>
#include "TemperatureStats.h"
#include "TrendAnalyzer.h"
#include "WeatherGrid.h"
using namespace std;

int main() {
    int v[] = {3,7,9,7,8,0,2,6,7,3,1,5,3,0,0,4,1,8,9,9};
    int n = sizeof(v)/sizeof(v[0]);

    TemperatureStats s;
    for(int i = 0; i < n; i++)
        s(v[i]); 
    cout << "= 1 ==============================\n";
    cout << s;

    TrendAnalyzer ps;
    for(int i = 1; i < n; i++)
        ps(v[i-1], v[i]); 
    cout << "\n= 2 ==============================\n";
    cout << ps;

    cout << "\n= 3 ==============================\n";
    WeatherGrid A(2,2);
    A(0,0)=1; A(0,1)=2;
    A(1,0)=3; A(1,1)=4;
    cout << "A:\n" << A;

    cout << "\n= 4 ==============================\n";
    cout << "A(0,1) = " << A(0,1) << ", A[1][0] = " << A[1][0] << endl;

    cout << "\n= 5 ==============================\n";
    WeatherGrid B;
    {
        WeatherGrid X(2,2);
        X(0,0)=5; X(0,1)=6;
        X(1,0)=7; X(1,1)=8;
        cout << "X:\n" << X << "\n";

        B = X; 
        cout << "B:\n" << B << "\n";
    } 

    cout << "B:\n" << B << "\n";
    
    B = B;
    cout << "B:\n" << B << "\n";
 
    cout << "\n= 6 ==============================\n";
    WeatherGrid C = A + B;
    cout << "C = A + B:\n" << C << "\n";

    C = A - B;
    cout << "C = A - B:\n" << C << "\n";

    C = A * B;
    cout << "C = A * B:\n" << C << "\n";

    cout << "\n= 7 ==============================\n";
    ++A;
    cout << "++A:\n" << A << "\n";

    A++;
    cout << "A++:\n" << A << "\n";

    --B;
    cout << "--B:\n" << B << "\n";

    B--;
    cout << "B--:\n" << B << "\n";

    cout << "\n= 8 ==============================\n";
    C = A;
    cout << "C:\n" << C << "\n";
    C(0,0) = 99;
    cout << "C:\n" << C << "\n";
    cout << "A:\n" << A << "\n";

    return 0;
}

/** Wynik dzialania programu:
= 1 ==============================
Count: 20, Sum: 92, Min: 0, Max: 9, Mean: 4.6

= 2 ==============================
Total pairs: 19
Equal pairs: 2
Increasing pairs: 10
Decreasing pairs: 7

= 3 ==============================
A:
    1    2
    3    4

= 4 ==============================
A(0,1) = 2, A[1][0] = 3

= 5 ==============================
X:
    5    6
    7    8

B:
    5    6
    7    8

B:
    5    6
    7    8

B:
    5    6
    7    8


= 6 ==============================
C = A + B:
    6    8
   10   12

C = A - B:
   -4   -4
   -4   -4

C = A * B:
   19   22
   43   50


= 7 ==============================
++A:
    2    3
    4    5

A++:
    3    4
    5    6

--B:
    4    5
    6    7

B--:
    3    4
    5    6


= 8 ==============================
C:
    3    4
    5    6

C:
   99    4
    5    6

A:
    3    4
    5    6
*/

