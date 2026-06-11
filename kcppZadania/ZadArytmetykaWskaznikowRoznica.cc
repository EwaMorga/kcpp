/**
 * @file ZadArytmetykaWskaznikowRoznica.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Obliczanie roznicy miedzy dwoma wskaznikami do tej samej tablicy.
 */

#include <iostream>
#include <cstddef> 

using namespace std;

int main() {
    int tablica[10] = {1, 12, 39, 43, 77, 120, 99, 17, 16, 10};

    int* ptrPoczatek = &tablica[0]; 
    int* ptrKoniec   = &tablica[8]; 

    cout << "roznice miedzy wskaznikami" << endl;
    cout << "Wartosc pod ptrPoczatek: " << *ptrPoczatek << endl;
    cout << "Wartosc pod ptrKoniec:   " << *ptrKoniec << endl;
    ptrdiff_t roznica = ptrKoniec - ptrPoczatek;

    cout << "\nOdleglosc: ptrKoniec - ptrPoczatek = " << roznica << " elementow." << endl;
    ptrdiff_t roznicaUjemna = ptrPoczatek - ptrKoniec;
    cout << "Odleglosc w tyl: ptrPoczatek - ptrKoniec = " << roznicaUjemna << " elementow." << endl;

    return 0;
}