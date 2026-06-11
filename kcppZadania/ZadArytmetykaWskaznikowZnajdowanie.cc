/**
 * @file ZadArytmetykaWskaznikowZnajdowanie.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Znajdowanie najwiekszego elementu w tablicy (zwracanie wskaznika).
 */

#include <iostream>

using namespace std;

int* maxElement(int* tab, int rozmiar) {
    if (rozmiar <= 0) {
        return nullptr;
    }
    int* maxWskaznik = tab; 

    for (int i = 1; i < rozmiar; i++) {

        if (*(tab + i) > *maxWskaznik) {
            maxWskaznik = (tab + i); 
        }
    }

    return maxWskaznik;
}

int main() {
    int liczby[] = {15, 42, 7, 89, 23};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "znajdowanie maksimum (wskazniki)" << endl;
    cout << "Elementy tablicy: 15, 42, 7, 89, 23" << endl;

    int* wskaznikMaks = maxElement(liczby, rozmiar);

    if (wskaznikMaks != nullptr) {
        cout << "Najwiekszy element to: " << *wskaznikMaks << endl;
        cout << "Znajduje sie pod adresem: " << wskaznikMaks << endl;
    } else {
        cout << "Tablica jest pusta!" << endl;
    }

    return 0;
}