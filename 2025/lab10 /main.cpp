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

    Student* px = new Student(grades, n, "Student_1");
    
    px->Set(9, 5);
    px->Set(30, 1);
    
    delete[] grades;

	int* pxGrades = px->GetGrades();
    for (int i = 0; i < n; i++)
		cout << pxGrades[i] - grades2[i] << " ";
	cout << "\n";


    Student y = *px;
    std::cout << y.GetName() << "\n";
    Student z(y);
    std::cout << z.GetName() << "\n";
    Student z2(grades2, n, "Student_2");
    z2.Copy(z);
    z2.Copy(z2);
    std::cout << z2.GetName() << "\n";
    
    delete px;

    y.Set(19, 5);
    z.Set(29, 5);
	z2.Set(29, 5);
    
    int* yGrades = y.GetGrades();
	for (int i = 0; i < n; i++)
		cout << yGrades[i] - grades2[i] << " ";
	cout << "\n";
    int* zGrades = z.GetGrades();
    for (int i = 0; i < n; i++)
		cout << zGrades[i] - grades2[i] << " ";
	cout << "\n";
    int* z2Grades = z2.GetGrades();
    for (int i = 0; i < n; i++)
		cout << z2Grades[i] - grades2[i] << " ";
	cout << "\n";


	cout << endl << "=== 2 ===============================" << endl;
	
	Student z3 = std::move(z2);
    std::cout << z2.GetName() << "\n";
    z2Grades = z2.GetGrades();
    if( z2Grades != NULL )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    std::cout << z3.GetName() << "\n";
    int* z3Grades = z3.GetGrades();
    for (int i = 0; i < n; i++)
		cout << z3Grades[i] - grades2[i] << " ";
	cout << "\n";


	cout << endl << "=== 3 ===============================" << endl;

    if (sizeof(z) < 100) 
	{
        cout << "99224600000\n";
    } else 
	{
        cout << "99224612894\n";
    }

    delete[] grades2;


	cout << endl << "=== 4 ===============================" << endl;

    AGH* p1 = AGH::Create();
    p1->SetName("Akademia Gorniczo-Hutnicza Krakow");
   	p1->Presentation();
    AGH* p2 = AGH::Create();
    p2->SetName("Akademia Gorniczo-Hutnicza w Krakowie");
   	p2->Presentation();
    if( p1 == p2 )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";

    AGH* p3 = AGH::Create();
   	p3->Presentation();
    if( p3 != p1 )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    AGH* p4 = AGH::Create();
   	p4->Presentation();
    if( p4 != p2 )
    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    	
    AGH* pS[100];
    for(int i=0; i<100; i++)
    	pS[i] = AGH::Create();
    for(int i=0; i<100; i+=2)
    {
    	if( p1 - pS[i] != 0 )
	    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
    	if( p2 - pS[i+1] != 0 )
	    	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << "\n";
	}

   
    //AGH agh;	// po odkomentowaniu powinien byc blad kompilacji
    
	AGH::Delete();



    return 0;
}

/** Wynik dzialania programu:

=== 1 ===============================
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Student_1_copy
Student_1_copy_copy
Student_1_copy_copy_copy
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

=== 2 ===============================

Student_1_copy_copy_copy
0 0 0 0 0 0 0 0 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

=== 3 ===============================
99224600000

=== 4 ===============================
Akademia Gorniczo-Hutnicza Krakow
Akademia Gorniczo-Hutnicza w Krakowie
Akademia Gorniczo-Hutnicza Krakow
Akademia Gorniczo-Hutnicza w Krakowie
*/
