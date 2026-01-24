// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main.cpp
//  
// Prosze uzupelnic niniejsze kody tak, aby program wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Pliku Main.cpp oraz funkcji zdefiniowanych juz w zalaczonych plikach cpp nie wolno modyfikowac.
//
// Uwaga: Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/enkapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
//
// !!! W wersji na najwyzsza liczbe punktow w implementowanych klasach mozna uzywac tylko tablic dynamicznych 

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
#include "Point.h"
#include "Polygon.h"
using namespace std;


int main(int argc, char** argv) 
{
	cout << endl << "=== 1 ===============================" << endl;

	Point p1;
	p1.Presentation();
	p1.SetName("A");
	p1.Presentation();
	Point p2("B");
	p2.SetX(1);
	p2.SetY(2); 
	p2.Presentation();
	Point p3("C", 6);
	p3.Presentation();
	Point p4("D", 3, 5);
	p4.SetPresentationMode(1);
	p4.Presentation();
	Point p5("X", p3.GetX());
	p5.SetName("E");
	p5.SetY(-5);
	p5.SetPresentationMode(1);
	p5.Presentation();
	
	p5.GetStatistics();


 	cout << endl << "=== 2 ===============================" << endl;
	
	Polygon poly1; 
	poly1.Presentation();
	poly1.SetName("Zerokat");
	poly1.Presentation();
	Polygon poly2("Nastepny zerokat"); 
	poly2.Presentation();
	Polygon poly3("Trojkat", p1, p2, p3); 
	poly3.Presentation();
	Polygon poly4("Czworokat", p1, p2, p3, p4); 
	poly4.Presentation();
	
	p5.GetStatistics();
	

	cout << endl << "=== 3 ===============================" << endl;
	
	Point points[5]; 
	points[0].SetX(p1.GetX()); points[0].SetY(p1.GetY());
	points[1].SetX(p2.GetX()); points[1].SetY(p2.GetY());
	points[2].SetX(p3.GetX()); points[2].SetY(p3.GetY());
	points[3].SetX(p4.GetX()); points[3].SetY(p4.GetY());
	points[4].SetX(p5.GetX()); points[4].SetY(p5.GetY());

	points[2].GetStatistics();
	

	cout << endl << "=== 4 ===============================" << endl;
	
	Polygon * pPoly5 = new Polygon("Pieciokat", 5, points); 
	pPoly5->Presentation();
	
	Point * pPoints = pPoly5->GetVertices();
	
	Polygon poly6("Nastepny pieciokat", 5, pPoints); 
	poly6.Presentation();
	
	points[0].GetStatistics();
	

	cout << endl << "=== 5 ===============================" << endl;

	poly1.SetNewVertices(5, pPoints);
	poly1.SetName("ZerokatKtoryZostalPieciokatem");
	poly1.Presentation();
	
	p1.GetStatistics();

	
	cout << endl << "=== 6 ===============================" << endl;
	
	delete pPoly5;
	
	p5.GetStatistics();
	
	
	cout << endl << "=== 7 ===============================" << endl;
	
	poly6.SetPresentationMode(1);
	
	poly6.Presentation();
	poly1.Presentation();

	
	cout << endl << "=== 8 ===============================" << endl;

	poly3.Presentation();
	poly3.SetVertice(1, "F", 8, 2);
	poly3.Presentation();
	
	points[4].GetStatistics();
	

	cout << endl << "=== 9 ===============================" << endl;
	
	p1.SetPresentationMode(0);

	poly4.Presentation();
	poly4.SetVertice(0, "G", 6, 1);
	poly4.Presentation();
	
	points[0].GetStatistics();
	
	poly3.Presentation();
	poly3.SetVertice(4, "H", 9, -3);
	poly3.Presentation();
	
	p2.GetStatistics();


	return 0;
}

/** Wynik dzialania programu:

=== 1 ===============================
Punkt:  Nazwa = ?, Wspolrzedna X = 0, Wspolrzedna Y = 0
Punkt:  Nazwa = A, Wspolrzedna X = 0, Wspolrzedna Y = 0
Punkt:  Nazwa = B, Wspolrzedna X = 1, Wspolrzedna Y = 2
Punkt:  Nazwa = C, Wspolrzedna X = 6, Wspolrzedna Y = 0
Punkt:  D(3,5)
Punkt:  E(6,-5)

Suma wspolrzednych x wszystkich punktow: 16
Suma wspolrzednych y wszystkich punktow: 2


=== 2 ===============================

Wielokat:  Nazwa = ?, Liczba wierzcholkow = 0


Wielokat:  Nazwa = Zerokat, Liczba wierzcholkow = 0


Wielokat:  Nazwa = Nastepny zerokat, Liczba wierzcholkow = 0


Wielokat:  Nazwa = Trojkat, Liczba wierzcholkow = 3
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)


Wielokat:  Nazwa = Czworokat, Liczba wierzcholkow = 4
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)
Punkt:  ?(3,5)


Suma wspolrzednych x wszystkich punktow: 33
Suma wspolrzednych y wszystkich punktow: 11


=== 3 ===============================

Suma wspolrzednych x wszystkich punktow: 49
Suma wspolrzednych y wszystkich punktow: 13


=== 4 ===============================

Wielokat:  Nazwa = Pieciokat, Liczba wierzcholkow = 5
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)
Punkt:  ?(3,5)
Punkt:  ?(6,-5)


Wielokat:  Nazwa = Nastepny pieciokat, Liczba wierzcholkow = 5
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)
Punkt:  ?(3,5)
Punkt:  ?(6,-5)


Suma wspolrzednych x wszystkich punktow: 81
Suma wspolrzednych y wszystkich punktow: 17


=== 5 ===============================

Wielokat:  Nazwa = ZerokatKtoryZostalPieciokatem, Liczba wierzcholkow = 5
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)
Punkt:  ?(3,5)
Punkt:  ?(6,-5)


Suma wspolrzednych x wszystkich punktow: 97
Suma wspolrzednych y wszystkich punktow: 19


=== 6 ===============================

Suma wspolrzednych x wszystkich punktow: 81
Suma wspolrzednych y wszystkich punktow: 17


=== 7 ===============================

Wielokat (nazwa, liczba wierzcholkow):  Nastepny pieciokat, 5
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)
Punkt:  ?(3,5)
Punkt:  ?(6,-5)


Wielokat (nazwa, liczba wierzcholkow):  ZerokatKtoryZostalPieciokatem, 5
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)
Punkt:  ?(3,5)
Punkt:  ?(6,-5)


=== 8 ===============================

Wielokat (nazwa, liczba wierzcholkow):  Trojkat, 3
Punkt:  ?(0,0)
Punkt:  ?(1,2)
Punkt:  ?(6,0)


Wielokat (nazwa, liczba wierzcholkow):  Trojkat, 3
Punkt:  F(8,2)
Punkt:  ?(1,2)
Punkt:  ?(6,0)


Suma wspolrzednych x wszystkich punktow: 89
Suma wspolrzednych y wszystkich punktow: 19


=== 9 ===============================

Wielokat (nazwa, liczba wierzcholkow):  Czworokat, 4
Punkt:  Nazwa = ?, Wspolrzedna X = 0, Wspolrzedna Y = 0
Punkt:  Nazwa = ?, Wspolrzedna X = 1, Wspolrzedna Y = 2
Punkt:  Nazwa = ?, Wspolrzedna X = 6, Wspolrzedna Y = 0
Punkt:  Nazwa = ?, Wspolrzedna X = 3, Wspolrzedna Y = 5


Wielokat (nazwa, liczba wierzcholkow):  Czworokat, 4
Punkt:  Nazwa = ?, Wspolrzedna X = 0, Wspolrzedna Y = 0
Punkt:  Nazwa = ?, Wspolrzedna X = 1, Wspolrzedna Y = 2
Punkt:  Nazwa = ?, Wspolrzedna X = 6, Wspolrzedna Y = 0
Punkt:  Nazwa = ?, Wspolrzedna X = 3, Wspolrzedna Y = 5


Suma wspolrzednych x wszystkich punktow: 89
Suma wspolrzednych y wszystkich punktow: 19


Wielokat (nazwa, liczba wierzcholkow):  Trojkat, 3
Punkt:  Nazwa = F, Wspolrzedna X = 8, Wspolrzedna Y = 2
Punkt:  Nazwa = ?, Wspolrzedna X = 1, Wspolrzedna Y = 2
Punkt:  Nazwa = ?, Wspolrzedna X = 6, Wspolrzedna Y = 0


Wielokat (nazwa, liczba wierzcholkow):  Trojkat, 3
Punkt:  Nazwa = F, Wspolrzedna X = 8, Wspolrzedna Y = 2
Punkt:  Nazwa = ?, Wspolrzedna X = 1, Wspolrzedna Y = 2
Punkt:  Nazwa = ?, Wspolrzedna X = 6, Wspolrzedna Y = 0


Suma wspolrzednych x wszystkich punktow: 89
Suma wspolrzednych y wszystkich punktow: 19

*/
