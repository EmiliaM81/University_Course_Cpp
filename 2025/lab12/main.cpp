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
#include "Container_1.h"
#include "Container_2.h"
#include "Container_3.h"
#include "Container_4.h"
using namespace std;


int main(int argc, char** argv) 
{
	int r;

	// Obiekt oparty o tablice statyczna rozmiaru 4	
	cout << endl << "--------------------------------"<< endl;
	Container_1 C_1;
	C_1.Delete();
	cout << C_1.IsEmpty() << endl;
	cout << C_1.IsFull() << endl;
	for(int i = 1; i <= 6; i++)
		C_1.Add(i);
	C_1.Print();
	cout << C_1.IsEmpty() << endl;
	cout << C_1.IsFull() << endl;
	r = C_1.Delete();
	r = C_1.Delete();
	C_1.Print();
	C_1.Add(10);
	C_1.Print();
	cout << C_1.Size() << endl;
	cout << C_1.IsEmpty() << endl;
	cout << C_1.IsFull() << endl;
	C_1.Clear();
	C_1.Print();
		
	// Obiekt oparty o tablice dynamiczna o rozmiarze poczatkowym podanym w konstruktorze
	// W przypadku zapelnienia tablica jest re-alokowana do nowego, dwukrotnie wiekszego rozmiaru 	
	cout << endl << "--------------------------------"<< endl;
	Container_3 C_3(4);
	C_3.Delete();
	cout << C_3.IsEmpty() << endl;
	cout << C_3.IsFull() << endl;
	for(int i = 1; i <= 6; i++)
		C_3.Add(i);
	C_3.Print();
	cout << C_3.IsEmpty() << endl;
	cout << C_3.IsFull() << endl;
	r = C_3.Delete();
	r = C_3.Delete();
	C_3.Print();
	C_3.Add(10);
	C_3.Print();
	cout << C_3.Size() << endl;
	cout << C_3.IsEmpty() << endl;
	cout << C_3.IsFull() << endl;
	C_3.Clear();
	C_3.Print();
	

	return 0;
}

/** Wynik dzialania programu:

--------------------------------
#BLAD: Obiekt pusty
1
0
#BLAD: Obiekt zapelniony
#BLAD: Obiekt zapelniony
#Zawartosc obiektu:
1,2,3,4,
0
1
#Zawartosc obiektu:
3,4,
#Zawartosc obiektu:
3,4,10,
3
0
0
#Zawartosc obiektu:


--------------------------------
#BLAD: Obiekt pusty
1
0
#Zawartosc obiektu:
1,2,3,4,5,6,
0
0
#Zawartosc obiektu:
3,4,5,6,
#Zawartosc obiektu:
3,4,5,6,10,
5
0
0
#Zawartosc obiektu:

*/
