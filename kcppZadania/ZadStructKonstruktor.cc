/**
 * @file ZadStructKonstruktor.cc
 * @author Ewa Morga
 * @date 12.06.2026
 */

 #include <iostream>
#include <string>
using namespace std;

struct Ksiazka {

    string tytul;
    string autor;
    int    rok;
    double cena;

    Ksiazka() {
        tytul = "brak";
        autor = "brak";
        rok   = 0;
        cena  = 0.0;
        cout << "Konstruktor domyslny: " << tytul << endl;
    }

    Ksiazka(string t, string a, int r, double c) {
        tytul = t;
        autor = a;
        rok   = r;
        cena  = c;
        cout << "Konstruktor z arg (standard): " << tytul << endl;
    }
    Ksiazka(string t, string a, int r, double c, bool listaInit)
        : tytul(t), autor(a), rok(r), cena(c) {
        cout << "Konstruktor z arg (lista init): " << tytul << endl;
    }

    ~Ksiazka() {
        cout << "Destruktor: " << tytul << endl;
    }

    void wyswietl() {
        cout << "  \"" << tytul << "\" - " << autor
             << "  (" << rok << ")  cena: " << cena << endl;
    }
};

int main() {

    cout << "=== Konstruktor domyslny ===" << endl;
    Ksiazka k1;
    k1.wyswietl();

    cout << "\n=== Konstruktor z arg, inicjalizacja standardowa ===" << endl;
    Ksiazka k2("W Pustyni i w Puszczy", "Henryk Sienkiewicz", 1911, 19.99);
    k2.wyswietl();

    cout << "\n=== Konstruktor z arg, lista inicjalizacyjna ===" << endl;
    Ksiazka k3("Wiedzmim", "Sapkowski", 1990, 49.99, true);
    k3.wyswietl();

    cout << "\n=== Koniec main - destruktory ===" << endl;

    return 0;
}