#include "../include/Zadania.h"
#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

// =============================================================
// 1.0 - Enum miesięcy
// =============================================================
void Zad1_0::uruchom() {
    enum miesiace {
    Styczen=1, Luty, Marzec, Kwiecien, Maj, Czerwiec,
    Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien
};
    miesiace moje_m = Luty;
    cout << "Twoj miesiac:      " << moje_m     << endl;
    cout << "Kolejny miesiac po wybranym przez ciebie: " << moje_m + 1 << endl;
    cout << "Styczen = " << Styczen << endl;
    cout << "Czerwiec = " << Czerwiec << endl;
    cout << "Grudzien = " << Grudzien << endl;
    miesiace wybrany = Maj;
    if (wybrany == Maj)
        cout << "Wybrany miesiac to Maj (wartosc: " << wybrany << ")" << endl;
}

// =============================================================
// 1.2 - Operacje na char/string
// =============================================================
void Zad1_2::uruchom() {
    char gra1[50] = "THE SIMS 4";
    char gra2[50] = "The Witcher";
    char bufor[100];

    cout << "Gra 1: " << gra1 << endl;
    cout << "Gra 2: " << gra2 << endl;
    cout << "Tytul " << gra1 << " ma " << strlen(gra1) << " znakow." << endl;

    strcpy(bufor, gra1);
    cout << "Kopia tytulu w buforze: " << bufor << endl;

    strcat(bufor, " - Czar Natury");
    cout << "Pelna nazwa z dodatkiem: " << bufor << endl;

    if (strcmp(gra1, "THE SIMS 4") == 0)
        cout << "Zgadza sie! Sa to Simsy 4" << endl;

    if (strstr(gra2, "Witcher"))
        cout << "Gra '" << gra2 << "' jest na podstawie ksiazki." << endl;
}

// =============================================================
// 2.2 - Przeciążanie funkcji (pole figur)
// =============================================================
double Zad2_2::pole(double a)                     { return a * a; }
double Zad2_2::pole(double a, double b)           { return a * b; }
double Zad2_2::pole(double a, double b, double c) { return (a + b + c) / 2.0; }
double Zad2_2::pole(int r) {
    const double PI = 3.14159;
    return PI * r * r;
}

void Zad2_2::uruchom() {
    cout << "Pole kwadratu (5):     " << pole(5.0)           << endl;
    cout << "Pole prostokata (5x4): " << pole(5.0, 4.0)      << endl;
    cout << "Pole trojkata (5,4,3): " << pole(5.0, 4.0, 3.0) << endl;
    cout << "Pole kola (r=3):       " << pole(3)             << endl;
}

// =============================================================
// 2.3 - Przeciążanie funkcji dodaj
// =============================================================
int    Zad2_3::dodaj(int a, int b)       { return a + b; }
double Zad2_3::dodaj(double a, double b) { return a + b; }
string Zad2_3::dodaj(string a, string b) { return a + b; }

void Zad2_3::uruchom() {
    cout << "Int:    5 + 10 = "    << dodaj(5, 10)                        << endl;
    cout << "Double: 5.5 + 2.2 = " << dodaj(5.5, 2.2)                    << endl;
    cout << "String: "             << dodaj(string("Ewa "), string("Morga")) << endl;
}

// =============================================================
// 2.4 - Przeciążanie operatora +
// =============================================================
struct Punkt2D {
    int x, y;
    Punkt2D(int x = 0, int y = 0) : x(x), y(y) {}
    Punkt2D operator+(const Punkt2D& p) { return Punkt2D(x + p.x, y + p.y); }
    void wyswietl() { cout << "(" << x << ", " << y << ")" << endl; }
};

void Zad2_4::uruchom() {
    Punkt2D p1(2, 5), p2(4, 3);
    cout << "Punkt A: "; p1.wyswietl();
    cout << "Punkt B: "; p2.wyswietl();
    Punkt2D p3 = p1 + p2;
    cout << "A + B:   "; p3.wyswietl();
}

// =============================================================
// 3.1 - Zamiana wartości wskaźnikami
// =============================================================
void Zad3_1::zamien(int* a, int* b) {
    int temp = *a; *a = *b; *b = temp;
}

void Zad3_1::uruchom() {
    int x = 12, y = 7;
    cout << "Przed zamiana: x=" << x << ", y=" << y << endl;
    zamien(&x, &y);
    cout << "Po zamianie:   x=" << x << ", y=" << y << endl;
}

// =============================================================
// 3.2 - Sumowanie tablicy wskaźnikami
// =============================================================
int Zad3_2::suma(int* tablica, int rozmiar) {
    int s = 0;
    for (int i = 0; i < rozmiar; i++) s += *(tablica + i);
    return s;
}

void Zad3_2::uruchom() {
    int liczby[] = {4, 210, 34, 90, 5};
    int rozmiar  = sizeof(liczby) / sizeof(liczby[0]);
    cout << "Tablica: 4, 210, 34, 90, 5" << endl;
    cout << "Suma:    " << suma(liczby, rozmiar) << endl;
}

// =============================================================
// 4.4 - Tabela produktów
// =============================================================
void Zad4_4::uruchom() {
    cout << fixed << setprecision(2);

    cout << "| " << left  << setw(15) << "Nazwa"
         << "| " << right << setw(7)  << "Cena"
         << " | "         << setw(5)  << "Ilosc" << " |" << endl;

    cout << "|" << setfill('-') << setw(17) << ""
         << "|" << setw(9) << "" << "|" << setw(7) << "|" << endl;
    cout << setfill(' ');

    cout << "| " << left  << setw(15) << "Chleb"
         << "| " << right << setw(7)  << 4.99
         << " | "         << setw(5)  << 5  << "  |" << endl;

    cout << "| " << left  << setw(15) << "Mleko"
         << "| " << right << setw(7)  << 3.20
         << " | "         << setw(5)  << 10 << "  |" << endl;

    cout << "| " << left  << setw(15) << "Jajka (10 szt)"
         << "| " << right << setw(7)  << 8.50
         << " | "         << setw(5)  << 3  << "  |" << endl;
}

// =============================================================
// 4.5 - Tabela konwersji temperatur
// =============================================================
void Zad4_5::uruchom() {
    cout << right << setw(9)  << "Celsjusz"
                  << setw(12) << "Fahrenheit" << endl;
    cout << setw(9)  << "-------"
         << setw(12) << "---------" << endl;

    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        cout << right << setw(5) << c
             << fixed << setprecision(2) << setw(14) << f << endl;
    }
}

// =============================================================
// 5.6 - Figury geometryczne
// =============================================================
Kwadrat::Kwadrat(double a) : a(a) {}
double Kwadrat::Obwod()    { return 4 * a; }
double Kwadrat::Pole()     { return a * a; }
void   Kwadrat::Wyswietl() {
    cout << "Kwadrat  (a=" << a << ")        obwod=" << Obwod() << "  pole=" << Pole() << endl;
}

Prostokat::Prostokat(double a, double b) : a(a), b(b) {}
double Prostokat::Obwod()    { return 2 * (a + b); }
double Prostokat::Pole()     { return a * b; }
void   Prostokat::Wyswietl() {
    cout << "Prostokat(a=" << a << " b=" << b << ") obwod=" << Obwod() << "  pole=" << Pole() << endl;
}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}
double Trojkat::Obwod()    { return a + b + c; }
double Trojkat::Pole()     { double s = Obwod()/2; return sqrt(s*(s-a)*(s-b)*(s-c)); }
void   Trojkat::Wyswietl() {
    cout << "Trojkat  (a=" << a << " b=" << b << " c=" << c << ") obwod=" << Obwod() << "  pole=" << Pole() << endl;
}

Kolo::Kolo(double r) : r(r) {}
double Kolo::Obwod()    { return 2 * PI * r; }
double Kolo::Pole()     { return PI * r * r; }
double Kolo::Dystans(double metryNaOsobe) { return sqrt(metryNaOsobe / PI); }
void   Kolo::Wyswietl() {
    cout << "Kolo     (r=" << r << ")        obwod=" << Obwod() << "  pole=" << Pole() << endl;
}

void Zad5_6::uruchom() {
    Figura* figury[4] = {
        new Kwadrat(5.0),
        new Prostokat(4.0, 6.0),
        new Trojkat(3.0, 4.0, 5.0),
        new Kolo(7.0)
    };

    cout << "--- Obwod i pole ---" << endl;
    for (int i = 0; i < 4; i++) figury[i]->Wyswietl();

    cout << "\n--- Dystans (Kolo, norma 4 m2/osobe) ---" << endl;
    Kolo k(7.0);
    double d = k.Dystans(4.0);
    cout << "Nastepna osoba moze stac w odleglosci: " << d << " m" << endl;

    for (int i = 0; i < 4; i++) delete figury[i];
}