/**
 * @file ZadArytmetykaWskaznikowSuma.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Sumowanie elementow tablicy za pomoca arytmetyki wskaznikow.
 */

 #include <iostream>
 using namespace std;

 int suma(int* tablica, int rozmiar){
    int suma = 0;

    for (int i = 0; i < rozmiar; i++){
        suma += *(tablica + i);
    }
    return suma;
 }
 int main(){
    int liczby[] = {4,210,34,90,5};
    int rozmiar = sizeof (liczby) / sizeof(liczby[0]);
cout << "Suma elementw tablica:" << endl;
    int wynikSumy = suma(liczby, rozmiar);
    cout << wynikSumy << endl;
    return 0;
 }