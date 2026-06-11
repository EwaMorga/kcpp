/**
 * @file ZadDaneNaukoweFormat.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double pi    = 3.14159265358979;
    double e     = 2.71828182845904;
    double zloty = 1.61803398874989;

    cout << left  << setw(15) << "Stala"
         << right << setw(20) << "Wartosc (domyslnie)"
         << setw(20) << "Notacja stala"
         << setw(20) << "Notacja naukowa" << endl;

    cout << left  << setw(15) << "--------"
         << right << setw(20) << "-----------------"
         << setw(20) << "-------------"
         << setw(20) << "--------------" << endl;

    // Pi
    cout << left  << setw(15) << "Pi"
         << right << setw(20) << pi;
    cout << fixed      << setprecision(6) << setw(20) << pi;
    cout << scientific << setprecision(6) << setw(20) << pi << endl;

    cout << left  << setw(15) << "e"
         << right << defaultfloat << setw(20) << e;
    cout << fixed      << setprecision(6) << setw(20) << e;
    cout << scientific << setprecision(6) << setw(20) << e << endl;

    cout << left  << setw(15) << "Zloty podzial"
         << right << defaultfloat << setw(20) << zloty;
    cout << fixed      << setprecision(6) << setw(20) << zloty;
    cout << scientific << setprecision(6) << setw(20) << zloty << endl;

    return 0;
}