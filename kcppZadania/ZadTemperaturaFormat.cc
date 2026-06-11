/**
 * @file ZadTemperaturaFormat.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << right << setw(9)  << "Celsjusz"
                  << setw(12) << "Fahrenheit" << endl;


    cout << setw(9)  << "-------"
         << setw(12) << "---------" << endl;

  
    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;

        cout << right << setw(5) << c
             << fixed << setprecision(2)
             << setw(14) << f << endl;
    }

    return 0;
}