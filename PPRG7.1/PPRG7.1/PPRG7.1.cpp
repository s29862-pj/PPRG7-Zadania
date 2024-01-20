#include <iostream>
using namespace std;

const int NUM_PERSONS = 3;

struct Osoba
{
    string name;
    string surname;
};

int main()
{
    Osoba osoby[NUM_PERSONS];

    for (int i = 0; i < NUM_PERSONS; ++i) {
        cout << "Podaj imie ucznia " << i + 1 << ": ";
        cin >> osoby[i].name;
        cout << "Podaj nazwisko ucznia  " << i + 1 << ": ";
        cin >> osoby[i].surname;
    }

    for (int i = 0; i < NUM_PERSONS; i++) {
        cout << "\n" << "Osoba " << i + 1 << ":" << osoby[i].name << " " << osoby[i].surname;
    }
}
