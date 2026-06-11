/**
 * @file LPrzeciazaniePotega.cc
 * @author Ewa Morga
 * @date 2026.05.08
 * @brief Przeciazanie funkcji potega dla liczb calkowitych i zmiennoprzecinkowych.
 */

#include <iostream>
#include <cmath> 
using namespace std;

int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa; 
    }
    return wynik;
}

double potega(double podstawa, double wykladnik) {
    return pow(podstawa, wykladnik);
}

int main() {
    int podstawaInt = 2;
    int wykladnikInt = 3; 
    cout << "Calkowite: " << podstawaInt << "^" << wykladnikInt << " = " 
         << potega(podstawaInt, wykladnikInt) << endl;

    double podstawaDouble = 4.0;
    double wykladnikDouble = 0.5; 
    cout << "Zmiennoprzecinkowe: " << podstawaDouble << "^" << wykladnikDouble << " = " 
         << potega(podstawaDouble, wykladnikDouble) << endl;

    cout << "Zmiennoprzecinkowe: 2.5^2.0 = " << potega(2.5, 2.0) << endl;

    return 0;
}