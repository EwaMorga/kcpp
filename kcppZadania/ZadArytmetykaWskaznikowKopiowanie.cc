/**
 * @file ZadArytmetykaWskaznikowKopiowanie.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Kopiowanie tablicy przy uzyciu wskaznikow.
 */

 #include <iostream>
 using namespace std;

 void KopiujTablice(int* zrodlo, int*cel, int rozmiar) {
     for (int i = 0; i < rozmiar; i++) {
         *(cel + i) = *(zrodlo + i);
     }
 }

 void WypiszTablice(int* tablica, int rozmiar) {
     for (int i = 0; i < rozmiar; i++) {
         cout << *(tablica + i) << " ";
     }
     cout << endl;
 }

 int main(){
    int tablicaZrodlowa[5] = {11, 23, 32, 45, 54};
    int rozmiar = 5;
    int tablicaDocelowa[5];

    cout << "tablica zrodlowa:" << endl;
    WypiszTablice(tablicaZrodlowa, rozmiar);
    KopiujTablice(tablicaZrodlowa, tablicaDocelowa, rozmiar);
    cout << "tablica docelowa:" << endl;
    WypiszTablice(tablicaDocelowa, rozmiar);
    return 0;
 }