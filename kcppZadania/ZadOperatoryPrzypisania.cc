/**
 * @file ZadOperatoryPrzypisania.cc
 * @author Ewa Morga
 * @date 07.06.2026
 * @brief Operator przypisania
 */

#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int a = 10, b = 3;

    cout << "=== Operatory Arytmetyczne ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << endl;
}

void OperatoryPrzypisania() {
    int x = 10;

    cout << "=== Operatory Przypisania ===" << endl;
    cout << "x = " << x << endl;

    x += 5;
    cout << "x += 5  =>  x = " << x << endl;

    x -= 3;
    cout << "x -= 3  =>  x = " << x << endl;

    x *= 2;
    cout << "x *= 2  =>  x = " << x << endl;

    x /= 4;
    cout << "x /= 4  =>  x = " << x << endl;

    x %= 3;
    cout << "x %= 3  =>  x = " << x << endl;

    cout << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();

    return 0;
}