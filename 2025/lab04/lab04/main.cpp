// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku Main
//  
// Prosze uzupelnic niniejsze kody tak, aby program kompilowal i wykonywal się a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Pliku Main oraz plikow CMakeListsN.txt (N=1,2,3) nie wolno modyfikowac.
//
// Nalezy tak skonstruowac program, by po zbudowaniu projektu z uzyciem kolejno plikow CMakeListsN.txt (N=1,2,3), skompilowaniu i uruchomieniu
// wyjscia byly takie jak podane na koncu tego pliku.
// Uwagi:
// 1. Skrypt CMake musi sie nazywac CMakeLists.txt. Jesli wiec chcesz zbudowac projekt z uzyciem pliku CMakeListsN.txt to najpierw
//    przekopiuj zawartosc pliku CMakeListsN.txt do CMakeLists.txt
// 2. Dla uproszczenia calego procesu mozesz skorzystac ze skryptow:
//    - compile_all.sh (przeprowadza proces budowania projektu i kompilacji kolejno dla wszystkich plikow CMakeListsN.txt), 
//      binaria sa kopiowane do katalogu bin/ )
//    - run_all.sh (uruchamia kolejno wszystkie wersje propgramu dla N=1,2,3)
//    ! Pamietaj, by przed uruchomieniem skryptow nadac im prawa do wykonania.     
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
// * do szybkiej weryfikacji poprawnosci wyjscia mozna uzyc diff-a (np.: diff -B plik_z_outputem_z_main plik_z_outputem_z_programu > wyniki_porownania.out)
//
// * UWAGA !!!: Od tej pory wszystkie funkcje powinny być okomentowane w plikach *.h (format pod Doxygena), zgodnie z ponizszym przykladem:
//
// /** @brief Wyszukanie elementu w liscie.
// *
// * Funkcja przeszukuje liste w celu znalezienia podanego elementu.
// *
// * @param[in] list  wskaznik do listy
// * @param[in] c  wartosc szukanego elementu 
// * @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
// * NULL jesli lista nie posiada elementu o wartosci c
// */
// slistEl * find(slist * list, char c);
//


#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "=== Simple Math Calculator (Non-interactive) ===" << std::endl;
    
    #ifdef PROJECTPATH
    std::cout << "Project path: " << PROJECTPATH << std::endl;
    #endif
    
    // Test roznych operacji
    struct TestCase {
        double a;
        double b;
        char op;
    };
    
    TestCase tests[] = {
        {5, 3, '+'},
        {10, 4, '-'},
        {6, 7, '*'},
        {15, 3, '/'},
        {8, 0, '/'},  // dzielenie przez zero
        {5, 3, '?'}   // nieznana operacja
    };
    
    for (int i = 0; i < sizeof(tests)/sizeof(tests[0]); i++) {
        double result = basic_operation(tests[i].a, tests[i].b, tests[i].op);
        std::cout << tests[i].a << " " << tests[i].op << " " << tests[i].b 
                  << " = " << result << std::endl;
    }
    
    #ifdef FULL_FUNCTIONALITY
    std::cout << "\n=== Advanced Features ===" << std::endl;
    print_operation_info('^');
    
    double advanced_result = advanced_calculation(2, 4, '^');
    std::cout << "Advanced calculation: 2 ^ 4 = " << advanced_result << std::endl;
    #endif
    
    #ifdef BROKEN_VERSION
    std::cout << "\n=== Testing broken version ===" << std::endl;
    unimplemented_math_function();  // Blad linkowania
    #endif
    
    return 0;
}

/** Wynik dzialania programu dla CMakeLists1.txt (oczywiscie sciezka do projektu moze sie roznic):
=== Simple Math Calculator (Non-interactive) ===
Project path: /path/to/project
5 + 3 = 8
10 - 4 = 6
6 * 7 = 42
15 / 3 = 5
Error: Division by zero!
8 / 0 = 0
Error: Unknown operation '?'
5 ? 3 = 0
*/

/** Wynik dzialania programu dla CMakeLists2.txt (oczywiscie sciezka do projektu moze sie roznic):
=== Simple Math Calculator (Non-interactive) ===
Project path: /path/to/project
5 + 3 = 8
10 - 4 = 6
6 * 7 = 42
15 / 3 = 5
Error: Division by zero!
8 / 0 = 0
Error: Unknown operation '?'
5 ? 3 = 0

=== Advanced Features ===
Operation '^' is exponentiation
Advanced calculation: 2 ^ 4 = 16
*/

/** Wynik dzialania programu dla CMakeLists3.txt:
W tym wypadku program nie powinien sie w ogole skompilowac ze wzgledu na blad linkowania:
	undefined reference to `unimplemented_math_function()'
*/
