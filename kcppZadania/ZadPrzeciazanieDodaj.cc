/**
 * @file ZadPrzeciazanieDodaj.cc
 * @author Ewa Morga
 * @date 2026.05.08
 * @brief Przeciazanie funkcji dodaj dla int, double i string.
 */
#include <iostream>
#include <string>

using namespace std;

int dodaj(int a, int b){
    return a + b; 
}
double dodaj(double a, double b){
    return a + b;
}

string dodaj(string a, string b){
    return a + b;
}

int main() {
    cout << "Int: 5 + 10 = " << dodaj(5, 10) << endl;

    cout << "Double: 5.5 + 2.2 = " << dodaj(5.5, 2.2) << endl;

    string s1 = "Ewa ";
    string s2 = "Morga";
    cout << "String: " << dodaj(s1, s2) << endl;

    return 0;
}