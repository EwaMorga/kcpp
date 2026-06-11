/**
* Plik: ZadMainExample.cc
* Autor: Ewa Morga
* Data: 09.06.2026r.
*/

#include <iostream>
#include <string>

using namespace std;

void funkcjaA() {
   cout << "[C++] Uruchomiono: funkcjaA" << endl;
}

void funkcjaB() {
   cout << "[C++] Uruchomiono: funkcjaB" << endl;
}

void funkcjaC() {
   cout << "[C++] Uruchomiono: funkcjaC" << endl;
}

extern "C" {
    void funkcjaC_1() {
        cout << "[C] Uruchomiono: funkcjaC_1 (zadeklarowana jako extern \"C\")" << endl;
    }

    void funkcjaC_2() {
        cout << "[C] Uruchomiono: funkcjaC_2 (zadeklarowana jako extern \"C\")" << endl;
    }
}

int main(int argc, char* argv[]) {

    if (argc == 1) {
        cout << "Nie podano zadnych funkcji do wykonania!" << endl;
        cout << "Uzycie: ./ZadMainExample [nazwa_funkcji1] [nazwa_funkcji2] ..." << endl;
        cout << "Dostepne funkcja: funkcjaA, funkjcaB, funkcjaC, funkcjaC_1, funkcjaC_2" << endl;
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        string argument = argv[i];

        if (argument == "funkcjaA") {
            funkcjaA();
        } else if (argument == "funkcjaB") {
            funkcjaB();
        } else if (argument == "funkcjaC") {
            funkcjaC();
        } else if (argument == "funkcjaC_1") {
            funkcjaC_1();
        } else if (argument == "funkcjaC_2") {
            funkcjaC_2();
        } else {
            cout << "[!] Nieznany argynent: " << argument << " - pomijam." << endl;
        }
    }

    return 0;
}