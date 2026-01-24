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
#include "Item.h"
#include "Box.h"
#include "Pallet.h"
#include "Shipment.h"
using namespace std;


int main() {
    Item i1("Laptop", 2000, 3);
    Item i2("Monitor", 5000, 12);
    Item i3("Keyboard", 800, 2);

    std::cout << "i1: "; i1.Presentation();
    std::cout << "i2: "; i2.Presentation();
    std::cout << "i3: "; i3.Presentation();

    Box b1(i1);
    b1.AddItem(i2);  // dodajemy drugi item do boxa
    std::cout << "b1: "; b1.Presentation();

    Box b2(i3);
    std::cout << "b2: "; b2.Presentation();

    Pallet p1(b1);
    p1.AddBox(b2);  // dodajemy drugi box do palety
    std::cout << "p1: "; p1.Presentation();

    Shipment s1 = p1; // niejawna konwersja
    std::cout << "s1: "; s1.Presentation();

    Shipment s2 = static_cast<Shipment>(b2); // jawna konwersja
    std::cout << "s2: "; s2.Presentation();

    Shipment s3 = static_cast<Shipment>(i3); // jawna konwersja
    std::cout << "s3: "; s3.Presentation();

    // Odkomentowanie poniższych linii powinno spowodować błąd kompilacji
    // Box b3 = s1;
    // Item i4 = s1;

    return 0;
}


/** Wynik dzialania programu:
i1: Item: Laptop, weight: 2000g, volume: 3L
i2: Item: Monitor, weight: 5000g, volume: 12L
i3: Item: Keyboard, weight: 800g, volume: 2L
b1: Box: contains 2 items, weight: 7000g total, volume: 15L total
b2: Box: contains 1 items, weight: 800g total, volume: 2L total
p1: Pallet: contains 2 boxes, weight: 7800g total, volume: 17L total
s1: Shipment: , weight: 7800g total, volume: 17L total
s2: Shipment: , weight: 800g total, volume: 2L total
s3: Shipment: , weight: 800g total, volume: 2L total
*/
