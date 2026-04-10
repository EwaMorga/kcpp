/**
 * @file ZadClassExample.cc
 * @author Ewa Morga
 * @date 2026.04.10 v0.01
 
 * @version v0.01
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;
class Ksiazka {
public:
    string tytul;
    string autor;
    int rokWydania;

    Ksiazka(){
        cout << "Obiekt został stworzony" << endl;

    }
    ~Ksiazka(){
        cout << "Obiekt został usunięty" << endl;
        
    }
    void Print(){
        cout << "-------Dane o książce-------" << endl;
        cout << "Tytuł: " << tytul << endl;
        cout << "Autor: " << autor << endl;
        cout << "Rok wydania: " << rokWydania << endl;
        cout << "-----------------------------" << endl;

    }
};

int main(){
    Ksiazka mojaKsiazka;

    mojaKsiazka.autor = "JK Rowling";
    mojaKsiazka.tytul = "Harry Potter i Więzień Azkabanu";
    mojaKsiazka.rokWydania = 1999;

    mojaKsiazka.Print();

    return 0;
}