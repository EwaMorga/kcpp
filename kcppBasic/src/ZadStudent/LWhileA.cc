#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0, ilosc = 0;

    cout << "Wprowadzaj liczby (0 konczy program):" << endl;
    cin >> liczba;

    while (liczba != 0) {
        if (liczba < 0) {
            cout << "Uwaga: liczba " << liczba << " jest ujemna!" << endl;
        } else {
            suma += liczba;
            ilosc++;
        }
        cin >> liczba;
    }

    cout << "Liczba wprowadzonych wartosci (dodatnich): " << ilosc << endl;
    cout << "Suma wprowadzonych liczb: " << suma << endl;

    return 0;
}