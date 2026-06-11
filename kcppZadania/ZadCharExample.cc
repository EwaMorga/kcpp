/**
 * @file ZadCharExample.cc
 * @author Ewa Morga
 * @date 2026.04.10 v0.01
 * @version v0.01
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char gra1[50] = "THE SIMS 4";
    char gra2[50] = "The Witcher";
    char bufor[100];

    // Wyświetlanie nazw
    cout << "Gra 1: " << gra1 << endl;
    cout << "Gra 2: " << gra2 << endl;


    cout << "Tytul " << gra1 << " ma " << strlen(gra1) << " znakow." << endl;

    strcpy(bufor, gra1);
    cout << "Kopia tytulu w buforze: " << bufor << endl;

    strcat(bufor, " - Czar Natury");
    cout << "Pelna nazwa z dodatkiem: " << bufor << endl;

    if (strcmp(gra1, "THE SIMS 4") == 0) {
        cout << "Zgadza się! Są to Simsy 4" << endl;
    }

    if (strstr(gra2, "Witcher")) {
        cout << "Gra'" << gra2 << "' jest na podstawie ksiąki." << endl;
    }


    return 0;
}
