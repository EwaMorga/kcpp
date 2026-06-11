/**
 * @file ZadStudent.cc
 * @author Ewa Morga
 * @date 11.06.2026
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

void wyswietlListe(const vector<Student>& lista) {
    if (lista.empty()) {
        cout << "Lista jest pusta!" << endl;
        return;
    }
    cout << "\n--- Lista studentow ---" << endl;
    for (const auto& s : lista) {
        cout << s.indeks << " | " << s.imie << " " << s.nazwisko << endl;
    }
}

bool indeksIstnieje(const vector<Student>& lista, int indeks) {
    for (const auto& s : lista) {
        if (s.indeks == indeks) return true;
    }
    return false;
}

int main() {
    vector<Student> lista;
    int wybor;

    cout << "=== Baza studentow ===" << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste (alfabetycznie)" << endl;
        cout << "5. Sprawdz, czy student istnieje" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
        cin.ignore();

        switch (wybor) {

            case 1: {
                Student s;
                cout << "Imie: ";
                getline(cin, s.imie);
                cout << "Nazwisko: ";
                getline(cin, s.nazwisko);
                cout << "Numer indeksu: ";
                cin >> s.indeks;
                cin.ignore();

                // Walidacja
                if (s.imie.empty() || s.nazwisko.empty()) {
                    cout << "Blad: imie i nazwisko nie moga byc puste!" << endl;
                    break;
                }
                if (indeksIstnieje(lista, s.indeks)) {
                    cout << "Blad: numer indeksu " << s.indeks << " juz istnieje!" << endl;
                    break;
                }

                lista.push_back(s);
                cout << "Dodano studenta!" << endl;
                break;
            }

            case 2: {
                if (lista.empty()) { cout << "Lista jest pusta!" << endl; break; }
                int indeks;
                cout << "Podaj numer indeksu studenta do usuniecia: ";
                cin >> indeks;
                cin.ignore();

                auto it = find_if(lista.begin(), lista.end(),
                    [indeks](const Student& s) { return s.indeks == indeks; });

                if (it != lista.end()) {
                    cout << "Usunieto: " << it->imie << " " << it->nazwisko << endl;
                    lista.erase(it);
                } else {
                    cout << "Nie znaleziono studenta!" << endl;
                }
                break;
            }

            case 3: {
                wyswietlListe(lista);
                break;
            }

            case 4: {
                sort(lista.begin(), lista.end(),
                    [](const Student& a, const Student& b) {
                        return a.nazwisko < b.nazwisko;
                    });
                cout << "Posortowano po nazwisku!" << endl;
                break;
            }

            case 5: {
                string szukane;
                cout << "Podaj imie lub nazwisko: ";
                getline(cin, szukane);

                bool znaleziony = false;
                for (const auto& s : lista) {
                    if (s.imie == szukane || s.nazwisko == szukane) {
                        cout << "Znaleziono: " << s.indeks << " | "
                             << s.imie << " " << s.nazwisko << endl;
                        znaleziony = true;
                    }
                }
                if (!znaleziony) cout << "Nie znaleziono studenta!" << endl;
                break;
            }

            case 0: {
                cout << "Koniec programu." << endl;
                break;
            }

            default:
                cout << "Nieprawidlowa opcja!" << endl;
        }

    } while (wybor != 0);

    return 0;
}