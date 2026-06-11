#include <iostream>
using namespace std;

int main() {
  int liczba;
  long long silnia = 1; 
  long long suma = 0;// long long, aby uniknąć przepełnienia

  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;

  if (liczba < 0) {
    cout << "Błąd: silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
    return 1;
  }

  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
  }

  cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;

  long long s = 1; 
  for (int i = 1; i <=liczba; i++) {
    s *= i;
    suma += s; 
  }

  cout << "Suma silni od 1 do " << liczba << " wynosi: " << suma << endl;

  return 0;
}
