/**
 * @file ZadClass.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

 #include <iostream>
#include <string>
using namespace std;

class Osoba {

public:
    string imie;                 

    Osoba(string i, int w, string t) {
        imie    = i;
        wiek    = w;
        tajemnica = t;
    }

    inline void przedstawSie() {
        cout << "Jestem " << imie << ", mam " << wiek << " lat." << endl;
    }

    void pokazWiek();
    void pokazTajemnice();

protected:
    string rola;                  
    void ustawRole(string r);

private:
    int    wiek;                  
    string tajemnica;             
};

void Osoba::pokazWiek() {
    cout << imie << " ma " << wiek << " lat." << endl;
}

void Osoba::pokazTajemnice() {
    cout << "Tajemnica " << imie << ": " << tajemnica << endl;
}

void Osoba::ustawRole(string r) {

    rola = r;
}

class Student : public Osoba {
public:
    Student(string i, int w, string t, string r)
        : Osoba(i, w, t) {
        ustawRole(r);          
    }

    void pokazRole() {
        cout << imie << " jest: " << rola << endl;
    }
};

int main() {

    cout << "=== Osoba ===" << endl;
    Osoba o("Anna", 30, "lubi czekolade");
    o.przedstawSie();           
    o.pokazWiek();              
    o.pokazTajemnice();       

    cout << "\n=== Student (dziedziczy Osoba) ===" << endl;
    Student s("Jan", 22, "spia na wykladach", "student informatyki");
    s.przedstawSie();
    s.pokazRole();             

    return 0;
}