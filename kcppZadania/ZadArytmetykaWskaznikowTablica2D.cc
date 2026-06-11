/**
 * @file ZadArytmetykaWskaznikowTablica2D.cc
 * @author Ewa Morga
 * @date 2026.05.25
 * @brief Demonstracja kolejnosci adresowania tablicy dwuwymiarowej w pamieci.
 */
#include <iostream>
using namespace std;

int main(){
    int Tablica[3][3];
    cout << "Rozmiar pojedyńczego elementu tablicy: " << sizeof(int) << " bajtów" << endl;

    for  (int i = 0; i < 3; i++){
        for (int j = 0; j< 3; j++){
            long adres = (long) &Tablica[i][j];
            cout << "Adres elementu [" << i << "][" << j << "]: " << adres << endl;
        }
    }
    return 0;
}