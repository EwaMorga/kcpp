/**
 * @file ZadArytmetykaWskaznikowTabliceB.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Operacje na kilku tablicach z uzyciem arytmetyki wskaznikow.
 */

#include <iostream>

using namespace std;

int main() {
    const int ROZMIAR = 5;

    double tab1[ROZMIAR];
    double tab2[ROZMIAR];
    double tab3[ROZMIAR];

    cout << "Podaj " << ROZMIAR << " liczb (moga byc z ulamkiem, np. 2.5):" << endl;
   
    for (double* p = tab1; p < tab1 + ROZMIAR; p++) {
        cout << "Wartosc: ";
        cin >> *p; 
    }

    for (int i = 0; i < ROZMIAR; i++) {
        *(tab2 + i) = *(tab1 + i) * 2.0;
    }
    for (int i = 0; i < ROZMIAR; i++) {
        *(tab3 + i) = *(tab1 + i) + *(tab2 + i);
    }

    cout << "\n--- ETAP 2: WYNIKI (Wyswietlanie przez wskazniki) ---" << endl;
    
    cout << "Tablica 1 (Oryginalna):   ";
    for (double* p = tab1; p < tab1 + ROZMIAR; p++) {
        cout << *p << "\t";
    }
    
    cout << "\nTablica 2 (Pomnozona x2): ";
    for (double* p = tab2; p < tab2 + ROZMIAR; p++) {
        cout << *p << "\t";
    }

    cout << "\nTablica 3 (Suma 1 i 2):   ";
    for (double* p = tab3; p < tab3 + ROZMIAR; p++) {
        cout << *p << "\t";
    }
    cout << endl;

    return 0;
}
