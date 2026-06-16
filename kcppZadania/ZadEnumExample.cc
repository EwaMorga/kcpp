/**
 * @file ZadEnumExample.cc
 * @author Ewa Morga
 * @date 16.06.2026
 */

#include <iostream>
#include <string>
using namespace std;

enum miesiace {
    Styczen = 1, Luty, Marzec, Kwiecien, Maj, Czerwiec,
    Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien
};

enum class PoraRoku { Wiosna, Lato, Jesien, Zima };

string poraRokuToString(PoraRoku p) {
    switch (p) {
        case PoraRoku::Wiosna: return "Wiosna";
        case PoraRoku::Lato:   return "Lato";
        case PoraRoku::Jesien: return "Jesien";
        case PoraRoku::Zima:   return "Zima";
        default:               return "Nieznana";
    }
}

int main() {
    cout << "=== Unscoped enum (miesiace) ===" << endl;

    miesiace moje_m = Luty;
    cout << "Twoj miesiac:      " << moje_m     << endl;
    cout << "Kolejny miesiac po wybranym przez ciebie: " << moje_m + 1 << endl;


    cout << "Styczen = " << Styczen << endl;
    cout << "Czerwiec = " << Czerwiec << endl;
    cout << "Grudzien = " << Grudzien << endl;

    miesiace wybrany = Maj;
    if (wybrany == Maj)
        cout << "Wybrany miesiac to Maj (wartosc: " << wybrany << ")" << endl;

    cout << endl;

}