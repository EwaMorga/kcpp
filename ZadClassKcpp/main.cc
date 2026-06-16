#include "include/Zadania.h"
#include <iostream>

using namespace std;

void menu() {
    cout << "\n========================================" << endl;
    cout << "         MENU - Kurs C++ - PROJEKT              " << endl;
    cout << "========================================" << endl;
    cout << " --- Sekcja 1: Typy i znaki ---"          << endl;
    cout << "  1  | Zad 1.0 - Enum (miesiace)"         << endl;
    cout << "  2  | Zad 1.2 - Operacje na char/string" << endl;
    cout << " --- Sekcja 2: Przeciazanie ---"           << endl;
    cout << "  3  | Zad 2.2 - Przeciazanie (pole figur)" << endl;
    cout << "  4  | Zad 2.3 - Przeciazanie (dodaj)"    << endl;
    cout << "  5  | Zad 2.4 - Przeciazanie operatora +" << endl;
    cout << " --- Sekcja 3: Wskazniki ---"              << endl;
    cout << "  6  | Zad 3.1 - Zamiana wartosci (wskazniki)" << endl;
    cout << "  7  | Zad 3.2 - Suma tablicy (wskazniki)" << endl;
    cout << " --- Sekcja 4: Formatowanie ---"           << endl;
    cout << "  8  | Zad 4.4 - Tabela produktow"        << endl;
    cout << "  9  | Zad 4.5 - Konwersja temperatur"    << endl;
    cout << " --- Sekcja 5: Klasy ---"                  << endl;
    cout << "  10 | Zad 5.6 - Figury (klasy abstrakcyjne)" << endl;
     cout << " --- INNE ---"                  << endl;
    cout << "  0  | Wyjdz"                              << endl;
    cout << "========================================" << endl;
    cout << "Wybor: ";
}

int main() {
    int wybor;
 
    do {
        menu();
        cin >> wybor;
        cout << endl;
 
        ZadKcpp* zad = nullptr;
 
        switch (wybor) {
            case  1: zad = new Zad1_0(); break;
            case  2: zad = new Zad1_2(); break;
            case  3: zad = new Zad2_2(); break;
            case  4: zad = new Zad2_3(); break;
            case  5: zad = new Zad2_4(); break;
            case  6: zad = new Zad3_1(); break;
            case  7: zad = new Zad3_2(); break;
            case  8: zad = new Zad4_4(); break;
            case  9: zad = new Zad4_5(); break;
            case 10: zad = new Zad5_6(); break;
            default: cout << "Nieprawidlowy wybor!" << endl; break;
        }
 
        if (zad) {
            cout << "--- Wynik ---" << endl;
            zad->uruchom();
            delete zad;
        }
 
    } while (wybor != 0);
 
    return 0;
}