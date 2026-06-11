/**
 * @file  LStringStream.cc
 * @author Ewa Morga
 * @date 07.06.2026
 * @brief Przykłady użycia stringstrem
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    cout << "=== Skladanie tekstu ===" << endl;

    string imie = "Anna";
    int wiek = 22;
    float wzrost = 1.68;

    stringstream ss1;
    ss1 << "Imie: " << imie << ", Wiek: " << wiek << ", Wzrost: " << wzrost;

    string wynik = ss1.str();
    cout << wynik << endl;
    cout << endl;

    cout << "=== Wyciaganie liczb z tekstu ===" << endl;

    string tekst = "10 20 30 40 50";
    stringstream ss2(tekst);

    int liczba;
    int suma = 0;
    while (ss2 >> liczba) {
        cout << "Wczytano: " << liczba << endl;
        suma += liczba;
    }
    cout << "Suma: " << suma << endl;
    cout << endl;

    cout << "=== Zamiana liczby na string ===" << endl;

    int n = 2025;
    stringstream ss3;
    ss3 << n;
    string s = ss3.str();
    cout << "Liczba: " << n << "  =>  String: " << s << endl;
    cout << endl;

    cout << "=== Zamiana stringa na liczbe ===" << endl;

    string slowo = "123";
    int wartosc;
    stringstream ss4(slowo);
    ss4 >> wartosc;
    cout << "String: " << slowo << "  =>  Liczba: " << wartosc << endl;

    return 0;
}