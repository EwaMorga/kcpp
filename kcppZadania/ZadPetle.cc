/**
 * @file ZadPetle.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */
#include <iostream>
using namespace std;

void petlaWhile() {
    cout << "=== while ===" << endl;

    cout << "while z i++: ";
    int i = 0;
    while (i < 5) {
        if (i == 3) {
            i++;
            continue;  
        }
        cout << i++ << " ";
    }
    cout << endl;

    cout << "while z ++i: ";
    i = 0;
    while (i < 5) {
        if (++i == 4) break;   
        cout << i << " ";
    }
    cout << endl;

    cout << endl;
}

void petlaDoWhile() {
    cout << "=== do-while ===" << endl;


    cout << "do-while z i++: ";
    int i = 0;
    do {
        if (i == 2) {
            i++;
            continue; 
        }
        cout << i++ << " ";
    } while (i < 5);
    cout << endl;

    cout << "do-while z ++i: ";
    i = 0;
    do {
        if (++i == 3) break;  
        cout << i << " ";
    } while (i < 5);
    cout << endl;

    cout << endl;
}


void petlaFor() {
    cout << "=== for ===" << endl;

    cout << "for z continue (tylko nieparzyste): ";
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) continue;
        cout << i << " ";
    }
    cout << endl;

    cout << "for z break (stop na 6):            ";
    for (int i = 0; i < 10; i++) {
        if (i == 6) break;
        cout << i << " ";
    }
    cout << endl;

    cout << "for z return (wychodzi na i==4):    ";
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            cout << endl;
            cout << "return przy i=" << i << endl;
            return;
        }
        cout << i << " ";
    }
}

int main() {
    petlaWhile();
    petlaDoWhile();
    petlaFor();

    return 0;
}