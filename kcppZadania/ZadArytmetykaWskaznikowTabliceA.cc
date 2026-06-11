/**
 * @file ZadArytmetykaWskaznikowTabliceA.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Kompleksowe operacje na tablicy przy uzyciu arytmetyki wskaznikow.
 */

#include <iostream>
 
using namespace std;

int main(){
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    for (int i = 0; i< ROZMIAR; i++){
        *(tablica + i) = i * 1;
    }
    cout << "Tablica poczatkowa: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << *(tablica + i) << " ";
    }
    cout << endl;



int suma = 0;
    for (int* p = tablica; p < tablica + ROZMIAR; p++) {
        suma += *p;
    }
    cout << "Suma elementow: " << suma << endl;
    int maxElement = *tablica; 
    for (int* p = tablica + 1; p < tablica + ROZMIAR; p++) {
        if (*p > maxElement) {
            maxElement = *p;
        }
    }
    cout << "Maksymalny element: " << maxElement << endl << endl;
    int* lewy = tablica;
    int* prawy = tablica + ROZMIAR - 1;

    while (lewy < prawy) {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;

        lewy++;  
        prawy--; 
    }

    cout << "Tablica po odwroceniu: ";
    for (int* p = tablica; p < tablica + ROZMIAR; p++) {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}
    