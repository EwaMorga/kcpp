/**
 * @file ZadZwracanie.cc
 * @author Ewa Morga
 * @date 2026.04.17
 * @brief Demonstrowanie różnych sposobów zwracania danych z funkcji.
 */

#include <iostream>
#include <string>

using namespace std;

int zwracajWartosc(){
    int x = 11;
    return x;
}
int& zwracajReferencje(){
    static int y = 7;
    return y;
}

int* zwracajWskaznik(){
    static int z = 18;
    return &z;
}
int* zwracajTablice(){
    static int tablica[] = {10,12,13,15,17};
    return tablica; 
}

int main() {
    int a = zwracajWartosc();
    cout << "1. Wartosc:    " << a << endl;

    int& b = zwracajReferencje();
    cout << "2. Referencja: " << b << endl;
    b = 25; 
    cout << "   Po zmianie: " << zwracajReferencje() << endl;

    int* c = zwracajWskaznik();
    cout << "3. Wskaznik:   " << *c << " (pod adresem: " << c << ")" << endl;

    int* d = zwracajTablice();
    cout << "4. Tablica:    [" << d[0] << ", " << d[1] << ", " << d[2] << "]" << endl;

    return 0;
}