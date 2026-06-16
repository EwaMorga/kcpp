#ifndef ZADANIA_H
#define ZADANIA_H

#include "ZadKcpp.h" 
#include <string>

// 1.0 - Enum miesięcy
class Zad1_0 : public ZadKcpp {
public:
    void uruchom() override;
};

// 1.2 - Operacje na char/string
class Zad1_2 : public ZadKcpp {
public:
    void uruchom() override;
};

// 2.2 - Przeciążanie funkcji (pole figur)
class Zad2_2 : public ZadKcpp {
    double pole(double a);
    double pole(double a, double b);
    double pole(double a, double b, double c);
    double pole(int r);
public:
    void uruchom() override;
};

// 2.3 - Przeciążanie funkcji dodaj
class Zad2_3 : public ZadKcpp {
    int    dodaj(int a, int b);
    double dodaj(double a, double b);
    std::string dodaj(std::string a, std::string b);
public:
    void uruchom() override;
};

// 2.4 - Przeciążanie operatora +
class Zad2_4 : public ZadKcpp {
public:
    void uruchom() override;
};

// 3.1 - Zamiana wartości wskaźnikami
class Zad3_1 : public ZadKcpp {
    void zamien(int* a, int* b);
public:
    void uruchom() override;
};

// 3.2 - Sumowanie tablicy wskaźnikami
class Zad3_2 : public ZadKcpp {
    int suma(int* tablica, int rozmiar);
public:
    void uruchom() override;
};

// 4.4 - Tabela produktów (formatowanie)
class Zad4_4 : public ZadKcpp {
public:
    void uruchom() override;
};

// 4.5 - Tabela konwersji temperatur
class Zad4_5 : public ZadKcpp {
public:
    void uruchom() override;
};

// 5.6 - Figury geometryczne (klasy abstrakcyjne)
class Figura {
public:
    virtual double Obwod()    = 0;
    virtual double Pole()     = 0;
    virtual void   Wyswietl() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
    double a;
public:
    Kwadrat(double a);
    double Obwod()    override;
    double Pole()     override;
    void   Wyswietl() override;
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double a, double b);
    double Obwod()    override;
    double Pole()     override;
    void   Wyswietl() override;
};

class Trojkat : public Figura {
    double a, b, c;
public:
    Trojkat(double a, double b, double c);
    double Obwod()    override;
    double Pole()     override;
    void   Wyswietl() override;
};

class Kolo : public Figura {
    double r;
    const double PI = 3.14159265358979;
public:
    Kolo(double r);
    double Obwod()    override;
    double Pole()     override;
    void   Wyswietl() override;
    double Dystans(double metryNaOsobe);
};

class Zad5_6 : public ZadKcpp {
public:
    void uruchom() override;
};

#endif