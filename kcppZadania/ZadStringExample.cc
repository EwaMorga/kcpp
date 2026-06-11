/**
 * @file ZadStringExample.cc
 * @author Ewa Morga
 * @date 2026.04.10 v0.01
 
 * @version v0.01
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string gra = "The Witcher3 : Dziki Gon";
    string dodatkowy = "Geralt";

    if (gra.empty()) {
        cout << "Napis jest pusty" << endl;
    } else {
        cout << "1. Napis nie jest pusty" << endl;
    }
    cout << "2. Dlugosc napisu: " << gra.size() << endl;

    cout << "3. Litera na pozycji 4: " << gra.at(4) << endl;

    gra.append(" to super gra");
    cout << "4. Po append: " << gra << endl;

    size_t pozycja = gra.find("Sims");
    cout << "5. Fraza 'Sims' zaczyna sie na pozycji: " << pozycja << endl;

    string fragment = gra.substr(4, 4); 
    cout << "6. Wyciety fragment (substr): " << fragment << endl;

    gra.swap(dodatkowy);
    cout << "7. Po swap: gra = " << gra << ", dodatkowy = " << dodatkowy << endl;
    gra.erase(4, 4); 
    cout << "8. Po erase: " << gra << endl;

    gra.clear();
    cout << "9. Po clear, rozmiar wynosi: " << gra.size() << endl;

    return 0;


}