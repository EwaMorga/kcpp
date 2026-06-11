/**
 * @file LManipulacjaStrumieniemCout.cc'
 * @author Ewa Morga
 * @date 11.06.2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double x       = 3.14159;
    double output  = 12.345;
    double T1      = 2.718;
    double output1 = 5.1234;
    double T2      = 15.98765;
    double output2 = 7.4321;
    double T3      = 18.123456;

    double average = (output + output1 + output2) / 3.0;
    double Tavg    = (T1 + T2 + T3) / 3.0;

    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ');

    cout << "Wynik dzialania: " << fixed << setprecision(5) << x << " jest niepoprawny ale:" << endl;

    cout << setw(5)  << ""
         << "output:"
         << setw(6)  << fixed << setprecision(3) << output
         << setw(4)  << ""
         << "T:"
         << setw(6)  << fixed << setprecision(3) << T1
         << endl;

    cout << setw(5)  << ""
         << "output1:"
         << setw(6)  << fixed << setprecision(4) << output1
         << setw(3)  << ""
         << "T:"
         << setw(8)  << fixed << setprecision(5) << T2
         << endl;

    cout << setw(5)  << ""
         << "output2:"
         << setw(6)  << fixed << setprecision(4) << output2
         << setw(3)  << ""
         << "T:"
         << setw(9)  << fixed << setprecision(6) << T3
         << endl;

    cout << setw(5) << "" << setfill('-') << setw(33) << "" << endl;
    cout << setfill(' ');

    cout << setw(5)  << ""
         << "average:"
         << setw(6)  << fixed << setprecision(4) << average
         << setw(3)  << ""
         << "T:"
         << setw(9)  << fixed << setprecision(6) << Tavg
         << endl;

    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ');

    return 0;
}