/**
 * @file ZadSwitch.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */
#include <iostream>
#include <string>
#include <map>
using namespace std;

void sprawdzBitowo(int n) {
    if (n & 1)
        cout << n << " jest nieparzysta (bitowo)" << endl;
    else
        cout << n << " jest parzysta (bitowo)" << endl;
}

void sprawdzModulo(int n) {
    if (n % 2 == 0)
        cout << n << " jest parzysta (modulo)" << endl;
    else
        cout << n << " jest nieparzysta (modulo)" << endl;
}

void sprawdzWarunkowy(int n) {
    cout << n << " jest " << (n % 2 == 0 ? "parzysta" : "nieparzysta")
         << " (operator warunkowy)" << endl;
}

int main() {

    map<string, int> metody = {
        {"bitowa",    1},
        {"modulo",    2},
        {"warunkowy", 3}
    };

    int liczba;
    string wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Wybierz metode (bitowa / modulo / warunkowy): ";
    cin >> wybor;
    cout << endl;

    int klucz = 0;
    if (metody.count(wybor)) {
        klucz = metody[wybor];
    }

    switch (klucz) {
        case 1:
            sprawdzBitowo(liczba);
            break;
        case 2:
            sprawdzModulo(liczba);
            break;
        case 3:
            sprawdzWarunkowy(liczba);
            break;
        default:
            cout << "Nieznana metoda: \"" << wybor << "\"" << endl;
            cout << "Dostepne: bitowa, modulo, warunkowy" << endl;
            break;
    }

    return 0;
}