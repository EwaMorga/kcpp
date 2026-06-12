/**
 * @file ZadMetodyAbstrakcyjne.cc
 * @author Ewa Morga
 * @date 12.06.2026
 */

#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double Obwod()     = 0;
    virtual double Pole()      = 0;
    virtual void   Wyswietl()  = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
    double a;   // bok
public:
    Kwadrat(double a) : a(a) {}

    double Obwod()  { return 4 * a; }
    double Pole()   { return a * a; }

    void Wyswietl() {
        cout << "Kwadrat (a=" << a << ")"
             << "  obwod=" << Obwod()
             << "  pole="  << Pole() << endl;
    }
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double a, double b) : a(a), b(b) {}

    double Obwod()  { return 2 * (a + b); }
    double Pole()   { return a * b; }

    void Wyswietl() {
        cout << "Prostokat (a=" << a << " b=" << b << ")"
             << "  obwod=" << Obwod()
             << "  pole="  << Pole() << endl;
    }
};

class Trojkat : public Figura {
    double a, b, c;
public:
    Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

    double Obwod()  { return a + b + c; }

    double Pole() {
        double s = Obwod() / 2.0;
        return sqrt(s * (s-a) * (s-b) * (s-c));
    }

    void Wyswietl() {
        cout << "Trojkat (a=" << a << " b=" << b << " c=" << c << ")"
             << "  obwod=" << Obwod()
             << "  pole="  << Pole() << endl;
    }
};

class Kolo : public Figura {
    double r;
    const double PI = 3.14159265358979;
public:
    Kolo(double r) : r(r) {}

    double Obwod()  { return 2 * PI * r; }
    double Pole()   { return PI * r * r; }

    double Dystans(double metryNaOsobe) {
        return sqrt(metryNaOsobe / PI);
    }

    void Wyswietl() {
        cout << "Kolo (r=" << r << ")"
             << "  obwod=" << Obwod()
             << "  pole="  << Pole() << endl;
    }
};

int main() {

    Figura* figury[4];
    figury[0] = new Kwadrat(5.0);
    figury[1] = new Prostokat(4.0, 6.0);
    figury[2] = new Trojkat(3.0, 4.0, 5.0);
    figury[3] = new Kolo(7.0);

    cout << "=== Obwod i pole figur ===" << endl;
    for (int i = 0; i < 4; i++) {
        figury[i]->Wyswietl();
    }

    cout << "\n=== Dystans (Kolo) ===" << endl;
    Kolo* k = new Kolo(7.0);
    double metryNaOsobe = 4.0;  // np. rząd podaje 4 m² na osobę
    double dystans = k->Dystans(metryNaOsobe);
    cout << "Przy normie " << metryNaOsobe << " m2 na osobe," << endl;
    cout << "nastepna osoba moze stac w odleglosci: "
         << dystans << " m" << endl;

    for (int i = 0; i < 4; i++) delete figury[i];
    delete k;

    return 0;
}