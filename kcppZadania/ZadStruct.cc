/**
 * @file ZadStruct.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

 #include <iostream>
#include <string>
using namespace std;

struct Punkt {
    double x;
    double y;
};

struct Student {
    string imie;
    string nazwisko;
    int    indeks;
    double srednia;
};

void wyswietl(const Student& s) {
    cout << s.indeks << " | " << s.imie << " " << s.nazwisko
         << " | srednia: " << s.srednia << endl;
}

int main() {

    cout << "=== Punkt ===" << endl;

    Punkt p1;
    p1.x = 3.0;     
    p1.y = 4.0;
    cout << "p1 = (" << p1.x << ", " << p1.y << ")" << endl;  

  
    Punkt p2 = {1.5, 2.5};
    cout << "p2 = (" << p2.x << ", " << p2.y << ")" << endl;

    p2.x = 10.0;
    cout << "p2 po zmianie = (" << p2.x << ", " << p2.y << ")" << endl;

    cout << "\n=== Student ===" << endl;

    Student s1;
    s1.imie     = "Anna";
    s1.nazwisko = "Kowalska";
    s1.indeks   = 12345;
    s1.srednia  = 4.5;
    wyswietl(s1);

    Student s2 = {"Jan", "Nowak", 67890, 3.8};
    wyswietl(s2);

    s2.srednia = 4.2;
    cout << "s2 po zmianie sredniej: ";
    wyswietl(s2);

    cout << "Imie s1: " << s1.imie << endl;
    cout << "Indeks s2: " << s2.indeks << endl;

    cout << "\n=== Konstruktor w strukturze ===" << endl;

    struct Prostokat {
        double szerokosc;
        double wysokosc;

        Prostokat(double s, double h) : szerokosc(s), wysokosc(h) {}

        double pole() { return szerokosc * wysokosc; }
    };

    Prostokat r(5.0, 3.0);
    cout << "Prostokat " << r.szerokosc << "x" << r.wysokosc
         << ", pole = " << r.pole() << endl;

    r.szerokosc = 8.0;
    cout << "Po zmianie szerokosci, pole = " << r.pole() << endl;

    return 0;
}