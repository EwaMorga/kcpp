/**
 * @file ZadArytmetykaWskaznikowZamiana.cc
 * @author Ewa Morga
 * @date 2026.05.22
 * @brief Zamiana wartosci dwoch zmiennych za pomoca wskaznikow.
 */

 #include <iostream>
 using namespace std;
 void zamien(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
 }
 int main(){
    int x = 12;
    int y = 7;
    cout << "Przed zamiana: x = " << x << ", y = " << y << endl;
    zamien(&x, &y);
    cout << "Po zamianie: x = " << x << ", y = " << y << endl;
    return 0;

 }