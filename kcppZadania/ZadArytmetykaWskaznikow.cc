/**
 * @file ZadArytmetykaWskaznikow.cc
 * @author Ewa Morga
 * @date 2026.05.25
 * @brief Rozbudowana arytmetyka wskaźników i priorytety operatorów.
 */

#include <iostream>

using namespace std;

void Funkcja1() {
    
    int tab[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int* p = tab; // p wskazuje na 10

    cout << "Stan poczatkowy: *p = " << *p << " (wskazuje na indeks 0)" << endl;

    p++; 
    cout << "Po p++        : *p = " << *p << " (przesunal sie w prawo)" << endl;
    
    ++p; 
    cout << "Po ++p        : *p = " << *p << " (znowu przesunal sie w prawo)" << endl;

    ++*p;    
    ++(*p);  
    ++*(p);   
    cout << "Po 3x ++*p    : *p = " << *p << " (zmienil wartosc 30 na 33)" << endl;

    int temp = *p++; 
    cout << "Po *p++       : temp = " << temp << ", ale teraz *p = " << *p << endl;

    temp = *(p)++;
    cout << "Po *(p)++     : temp = " << temp << ", ale teraz *p = " << *p << endl;

   
    (*p)++;
    cout << "Po (*p)++     : *p = " << *p << " (wskaznik stoi, wartosc urosla z 50 do 51)" << endl;


    temp = *++p; 
    cout << "Po *++p       : *p = " << *p << " (temp tez wynosi " << temp << ")" << endl;
    
    temp = *(++p); 
    cout << "Po *(++p)     : *p = " << *p << " (temp tez wynosi " << temp << ")" << endl;
}
void Funkcja2() {
    cout << "\n--- FUNKCJA 2: A, B, C PRZEZ WSKAZNIKI ---" << endl;
    
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "1.  A, B, C: " << a << " \t" << b << " \t" << c << endl;
    *(&a - 1) = 10; 
    cout << "2.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&a - 2) = 20; 
    cout << "3.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&c + 1) = 30; 
    cout << "4.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&b + 1) = 40; 
    cout << "5.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&a - 1) = 50; 
    cout << "6.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&b - 1) = 60; 
    cout << "7.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&c + 1) = 70; 
    cout << "8.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&b + 1) = 80; 
    cout << "9.  A, B, C: " << a << " \t" << b << " \t" << c << endl;

    *(&a - 1) = 90; 
    cout << "10. A, B, C: " << a << " \t" << b << " \t" << c << endl;
}

int main() {
    Funkcja1();
    Funkcja2();
    return 0;
}