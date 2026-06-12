/**
 * @file ZadKlasaKonstruktor.cc
 * @author Ewa Morga
 * @date 12.06.2026
 */

 #include <iostream>
#include <string>
using namespace std;

class Samochod {

public:
    string marka;
    int    rok;
    double cena;

    Samochod() {
        marka = "nieznana";
        rok   = 0;
        cena  = 0.0;
        cout << "Konstruktor domyslny: " << marka << endl;
    }

    Samochod(string m, int r, double c) {
        marka = m;
        rok   = r;
        cena  = c;
        cout << "Konstruktor z arg (standard): " << marka << endl;
    }
    Samochod(string m, int r, double c, bool listaInit)
        : marka(m), rok(r), cena(c) {
        cout << "Konstruktor z arg (lista init): " << marka << endl;
    }

    ~Samochod() {
        cout << "Destruktor: " << marka << endl;
    }

    void wyswietl() {
        cout << "  marka=" << marka << "  rok=" << rok << "  cena=" << cena << endl;
    }
};

int main() {

    cout << "=== Konstruktor domyslny ===" << endl;
    Samochod s1;
    s1.wyswietl();

    cout << "\n=== Konstruktor z arg, inicjalizacja standardowa ===" << endl;
    Samochod s2("Toyota", 2020, 85000.0);
    s2.wyswietl();

    cout << "\n=== Konstruktor z arg, lista inicjalizacyjna ===" << endl;
    Samochod s3("BMW", 2022, 150000.0, true);
    s3.wyswietl();

    cout << "\n=== Koniec main - destruktory ===" << endl;

    return 0;
}