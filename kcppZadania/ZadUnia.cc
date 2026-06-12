/**
 * @file ZadUnia.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

 #include <iostream>
#include <string>
using namespace std;

union Dane {
    int    liczbaInt;
    float  liczbaFloat;
    char   znak;
};

int main() {

    cout << "=== Podstawowe uzycie unii ===" << endl;

    Dane d;
    d.liczbaInt = 65;
    cout << "Zapisano int:   " << d.liczbaInt << endl;
    cout << "Rozmiar unii:   " << sizeof(d) << " bajty" << endl;
    cout << endl;

    cout << "=== Niebezpieczenstwo 1: nadpisywanie pamieci ===" << endl;

    d.liczbaInt = 12345;
    cout << "Zapisano int:   " << d.liczbaInt << endl;

    d.liczbaFloat = 3.14f;    
    cout << "Zapisano float: " << d.liczbaFloat << endl;
    cout << "Odczyt int po zapisaniu float: " << d.liczbaInt
         << "  <-- BLAD: int jest teraz zniszczony!" << endl;
    cout << endl;

    cout << "=== Niebezpieczenstwo 2: reinterpretacja bitow ===" << endl;

    d.liczbaInt = 65;         
    cout << "Zapisano int:  " << d.liczbaInt << endl;
    cout << "Odczyt char:   " << d.znak
         << "  <-- te same bity, inny typ!" << endl;
    cout << endl;

    cout << "=== Niebezpieczenstwo 3: rozny rozmiar pol ===" << endl;

    union Rozny {
        char   maly;    
        int    sredni;   
        double duzy;     
    };

    Rozny r;
    cout << "sizeof(char):   " << sizeof(r.maly)   << " bajt"  << endl;
    cout << "sizeof(int):    " << sizeof(r.sredni)  << " bajty" << endl;
    cout << "sizeof(double): " << sizeof(r.duzy)    << " bajtow" << endl;
    cout << "sizeof(unia):   " << sizeof(r)         << " bajtow (rozmiar największego pola)" << endl;

    r.duzy = 1.234;
    cout << "Zapisano double: " << r.duzy << endl;
    cout << "Odczyt char:     " << (int)r.maly
         << "  <-- tylko 1 bajt z 8, reszta zgubiona!" << endl;
    cout << endl;

    cout << "=== Bezpieczne uzycie: unia z znacznikiem typu ===" << endl;

    struct BezpiecznaDana {
        enum Typ { INT, FLOAT, ZNAK } typ;   
        union {
            int   i;
            float f;
            char  c;
        };
    };

    BezpiecznaDana bd;
    bd.typ = BezpiecznaDana::INT;
    bd.i   = 42;

    if (bd.typ == BezpiecznaDana::INT)
        cout << "int: " << bd.i << "  <-- bezpieczny odczyt" << endl;

    bd.typ = BezpiecznaDana::ZNAK;
    bd.c   = 'X';

    if (bd.typ == BezpiecznaDana::ZNAK)
        cout << "char: " << bd.c << "  <-- bezpieczny odczyt" << endl;

    return 0;
}