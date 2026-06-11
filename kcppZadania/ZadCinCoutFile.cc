/**
 * @file ZadCinCoutFile.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */

 #include <iostream>
 using namespace std;

int main() {

    int liczba = 42;
    double pi = 3.14159;
    string tekst = "Witaj swiecie!";

    cout << "Liczba: " << liczba << endl;
    cout << "Pi: " << pi << endl;
    cout << "Tekst: " << tekst << endl;
    cout << endl;


    int wiek;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;
    cout << "Twoj wiek: " << wiek << endl;
    cout << endl;

    if (wiek < 0) {
        cerr << "BLAD: Wiek nie moze byc ujemny!" << endl;
    } else if (wiek > 101) {
        cerr << "BLAD: Wiek jest nieprawdopodobnie duzy!" << endl;
    } else {
        cout << "Wiek jest poprawny." << endl;
        cerr << "INFO: Brak bledow w danych." << endl;
    }

    return 0;
}