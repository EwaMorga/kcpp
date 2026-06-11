/**
 * @file ZadTabelaFormat.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

 #include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << fixed << setprecision(2);


    cout << "| " << left  << setw(15) << "Nazwa"
         << "| " << right << setw(7)  << "Cena"
         << " | "         << setw(5)  << "Ilosc"
         << " |" << endl;

    cout << "|" << setfill('-') << setw(17) << ""
         << "|" << setw(9)  << ""
         << "|" << setw(7)  << ""
         << "|" << endl;
    cout << setfill(' ');


    cout << "| " << left  << setw(15) << "Chleb"
         << "| " << right << setw(7)  << 4.99
         << " | "         << setw(5)  << 5
         << "  |" << endl;

    cout << "| " << left  << setw(15) << "Mleko"
         << "| " << right << setw(7)  << 3.20
         << " | "         << setw(5)  << 10
         << "  |" << endl;

    cout << "| " << left  << setw(15) << "Jajka (10 szt)"
         << "| " << right << setw(7)  << 8.50
         << " | "         << setw(5)  << 3
         << "  |" << endl;

    return 0;
}