/**
 * @file ZadArytmetykaWskaznikowPrzesuniecie.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Przesunięcie elementów tablicy o jedno miejsce w prawo za pomoca wskaznikow.
 */

#include <iostream>

using namespace std;
void przesun(int* tab, int rozmiar) {
    if (rozmiar <= 1) {
        return;
    }
    int ostatni = *(tab + rozmiar - 1);

    for (int i = rozmiar - 1; i > 0; i--) {
        *(tab + i) = *(tab + i - 1);
    }
    *tab = ostatni;
}

void wypisz(int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tab + i) << " ";
    }
    cout << endl;
}

int main() {
    int liczby[] = {44, 80, 52, 7, 50};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "tablica przed przesunięciem" << endl;
    wypisz(liczby, rozmiar);
    przesun(liczby, rozmiar);
    cout << "tablica po przesunięciu" << endl;
    wypisz(liczby, rozmiar);

    return 0;
}