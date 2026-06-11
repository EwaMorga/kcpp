/**
 * @file LBitoweOperatoryLogiczneSingleVariable.cc
 * @author Ewa Morga
 * @date 2026.05.08
 */

#include <iostream>

using namespace std;

int utworzLiczbeZTablicy(int tab[8]) {
  int wynik = 0;
  for (int i = 0; i < 8; ++i) {
    if (tab[i] != 0) {
      wynik |= (1 << i);
    }
  }
  return wynik;
}

int main() {
  int bity[8] = {1, 0, 1, 1, 0, 0, 0, 0};

  cout << "Zawartosc tablicy (od bitu 0 do 7): ";
  for (int i = 0; i < 8; ++i) {
    cout << bity[i] << " ";
  }
  cout << endl;

  int liczba = utworzLiczbeZTablicy(bity);

  cout << "Utworzona liczba dziesietna: " << liczba << endl;

  return 0;
}