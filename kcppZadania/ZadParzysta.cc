/**
 * @file ZadParzysta.cc
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

    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << endl;

    sprawdzBitowo(liczba);
    sprawdzModulo(liczba);
    sprawdzWarunkowy(liczba);

    return 0;
}