/**
 * @file ZadParzystaCase.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

#include <iostream>
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

    int liczba, wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Wybierz metode sprawdzania:" << endl;
    cout << "1 - bitowa" << endl;
    cout << "2 - modulo" << endl;
    cout << "3 - operator warunkowy" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;
    cout << endl;

    switch (wybor) {
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
            cout << "Nieprawidlowy wybor!" << endl;
            break;
    }

    return 0;
}