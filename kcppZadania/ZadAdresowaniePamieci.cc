/**
 * @file ZadAdresowaniePamieci.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Demonstracja i wyjasnienie kierunku adresowania pamieci.
 */

#include <iostream>
using namespace std;

int main(){
    double a = 1.1; 
    double b = 2.2;
    double c = 3.3; 
    cout << "Rozmiar typu double: " << sizeof(double) << " bajtow." << endl;

    long adres_a = (long)&a;
    long adres_b = (long)&b;
    long adres_c = (long)&c;

    cout << "Adres zmiennej a: " << adres_a << endl;
    cout << "Adres zmiennej b: " << adres_b << endl;
    cout << "Adres zmiennej c: " << adres_c << endl;

    if (adres_a > adres_b && adres_b > adres_c) {
        cout << "Wniosek: Adresy maleja! Pamiec (stos) rosnie w dol." << endl;
    } else if (adres_a < adres_b && adres_b < adres_c) {
        cout << "Wniosek: Adresy rosna! Pamiec rosnie w gore." << endl;
    } else {
        cout << "Wniosek: Kompilator poukladal zmienne wedlug wlasnej optymalizacji." << endl;
    }

    return 0;
}