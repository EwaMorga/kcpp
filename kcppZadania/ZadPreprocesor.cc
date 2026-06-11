/**
 * @file ZadStudent.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */
#include <iostream>
using namespace std;

#define WERSJA 2
#define PI 3.14159

#define POLE_KOLA(r) (PI * (r) * (r))

#define POKAZ(x)      cout << #x << " = " << (x) << endl
#define ZMIENNA(n, v) int var_##n = v

#ifdef WERSJA
    #define OPIS "Wersja zdefiniowana"
#else
    #define OPIS "Wersja niezdefiniowana"
#endif

#ifndef MAKS
    #define MAKS 100
#endif

double poleKola(double r) {
    return 3.14159 * r * r;
}

void pokazWartosc(const char* nazwa, double wartosc) {
    cout << nazwa << " = " << wartosc << endl;
}


int main() {

    cout << "=== #ifdef / #ifndef ===" << endl;
    cout << OPIS << endl;
    cout << "MAKS = " << MAKS << endl;
    cout << endl;

    cout << "=== (a) makro vs funkcja ===" << endl;
    double r = 5.0;
    cout << "makro  POLE_KOLA(5) = " << POLE_KOLA(r) << endl;
    cout << "funkcja poleKola(5) = " << poleKola(r) << endl;
    cout << endl;

    cout << "=== (b) # i ## vs funkcja ===" << endl;

    POKAZ(2 + 3);      
    POKAZ(MAKS);       

    ZMIENNA(abc, 42);    
    cout << "var_abc = " << var_abc << endl;

    pokazWartosc("2 + 3", 2 + 3);
    pokazWartosc("MAKS",  MAKS);

    return 0;
}