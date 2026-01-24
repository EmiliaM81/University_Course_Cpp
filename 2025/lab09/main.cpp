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
#include "Student.h"
#include "AGH.h"
using namespace std;


int main() 
{
	cout << endl << "=== 1 ===============================" << endl;

    int n = 30;

    int* grades = new int[n]{ 2, 3, 5, 2, 4, 5, 5, 3, 2, 2,
							4, 2, 4, 4, 3, 2, 5, 3, 5, 3,
							2, 5, 5, 2, 5, 2, 3, 3, 4, 4 };
    int* grades2 = new int[n]{ 2, 3, 5, 2, 4, 5, 5, 3, 2, 2,
							4, 2, 4, 4, 3, 2, 5, 3, 5, 3,
							2, 5, 5, 2, 5, 2, 3, 3, 4, 4 };

    Student* px = new Student(grades, n);
    
    px->Set(9, 5);
    px->Set(30, 1);
    
    delete[] grades;

    for (int i = 0; i < n; i++)
		cout << px->Get(i) - grades2[i] << " ";
	cout << "\n";


    Student y = *px;
    Student z(*px);
    
    delete px;

    y.Set(19, 5);
    z.Set(29, 5);

    for (int i = 0; i < n; i++)
		cout << y.Get(i) - grades2[i] << " ";
	cout << "\n";
    for (int i = 0; i < n; i++)
		cout << z.Get(i) - grades2[i] << " ";
	cout << "\n";


    if (sizeof(z) < 100) 
	{
        cout << "99224600000\n";
    } else 
	{
        cout << "99224612894\n";
    }

    delete[] grades2;


	cout << endl << "=== 2 ===============================" << endl;

    AGH* p1 = AGH::Create();
    AGH* p2 = AGH::Create();
    AGH* p3 = AGH::Create();

    p1->SetName("Akademia Gorniczo-Hutnicza Krakow");
 	p1->Presentation();
    p2->SetName("Akademia Gorniczo-Hutnicza w Krakowie");
 	p2->Presentation();
    p3->SetName("Akademia Gorniczo-Hutnicza");
 	p3->Presentation();

 	p1->Presentation();
 	p2->Presentation();
 	p3->Presentation();
 	
    cout << p1 - p2 << ", ";
    cout << p2 - p3 << ", ";
    cout << p1 - p3 << "\n";
    
    // AGH agh;	// po odkomentowaniu powinien byc blad kompilacji

    AGH::Delete();

    return 0;
}

/** Wynik dzialania programu:

=== 1 ===============================
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
99224600000

=== 2 ===============================
Akademia Gorniczo-Hutnicza Krakow
Akademia Gorniczo-Hutnicza w Krakowie
Akademia Gorniczo-Hutnicza
Akademia Gorniczo-Hutnicza
Akademia Gorniczo-Hutnicza
Akademia Gorniczo-Hutnicza
0, 0, 0
*/
