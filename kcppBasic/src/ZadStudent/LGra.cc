#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int poziom;
    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - latwy  (1-50)" << endl;
    cout << "2 - sredni (1-100)" << endl;
    cout << "3 - trudny (1-200)" << endl;
    cout << "Twoj wybor: ";
    cin >> poziom;

    int zakres;
    switch (poziom) {
        case 1:  zakres = 50;  break;
        case 3:  zakres = 200; break;
        default: zakres = 100; break;
    }

    int wylosowana = rand() % zakres + 1;
    int proba, licznik = 0;
    const int MAX_PROB = 10;

    cout << "\nZgadnij liczbe (1-" << zakres << "), masz " << MAX_PROB << " prob:" << endl;

    while (licznik < MAX_PROB) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej. (Proba " << licznik << "/" << MAX_PROB << ")" << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej. (Proba " << licznik << "/" << MAX_PROB << ")" << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return 0;
        }
    }

    cout << "Nie zgadles! Prawidlowa liczba to: " << wylosowana << endl;

    return 0;
}