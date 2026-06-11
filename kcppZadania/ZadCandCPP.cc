/**
 * @file ZadCandCPP.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

 #include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {

    double var = 19.0;

    cout << "--- Wypisanie liczby calkowitej ---" << endl;
    printf("%i", 19);           cout << endl;
    cout << 19 << endl;

    cout << "--- Wypisanie hex ---" << endl;
    printf("%x", 19);           cout << endl;
    cout << hex << 19 << dec << endl;

    cout << "--- Wypisanie float ---" << endl;
    printf("%f", 19.0);         cout << endl;
    cout << 19.0 << endl;

    cout << "--- Wypisanie zmiennej ---" << endl;
    printf("%f", var);          cout << endl;
    cout << var << endl;

    cout << "--- Szerokosc pola ---" << endl;
    printf("%9f", 3.0);         cout << endl;
    cout << setw(11) << 19.0 << endl;

    cout << "--- Szerokosc i dokladnosc ---" << endl;
    printf("%11.3f", 3.1234);   cout << endl;
    cout << setw(11) << fixed << setprecision(3) << 7.0 << endl;

    cout << "--- Tekst, float i znak ---" << endl;
    printf("Napis%f%c", 9.0, 'z');  cout << endl;
    cout << "Napis" << 9.0 << 'z' << endl;

    return 0;
}