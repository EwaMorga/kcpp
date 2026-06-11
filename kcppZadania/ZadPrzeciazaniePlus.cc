/**
 * @file ZadPrzeciazaniePlus.cc
 * @author Ewa Morga
 * @date 2026.05.08
 * @brief Przeciazanie operatora + dla klasy Punkt.
 */

#include <iostream>

using namespace std;

class Punkt {
public:
    int x;
    int y;

    Punkt(int wspX = 0, int wspY = 0) {
        x = wspX;
        y = wspY;
    }

    Punkt operator+(const Punkt& drugiPunkt) {
        Punkt wynik;
        wynik.x = this->x + drugiPunkt.x;
        wynik.y = this->y + drugiPunkt.y;
        
        return wynik; // Zwracamy nowy, połączony punkt
    }

    void wyswietl() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punkt p1(2, 5);
    Punkt p2(4, 3);

    cout << "Punkt A: ";
    p1.wyswietl();

    cout << "Punkt B: ";
    p2.wyswietl();

    Punkt p3 = p1 + p2;

    cout << "Wynik (A + B): ";
    p3.wyswietl();

    return 0;
}