#include <iostream>
using namespace std;

int silnia(int n)
{
	if (n == 0) return 1;
	else return n * silnia(n - 1);
}

int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "Silnia = " << silnia(liczba) << endl;
	
	if (silnia(liczba) / 11) {
		cout << "Liczba dzieli sie przez 11." << endl;
	}
	if (silnia(liczba) / 5) {
		cout << "Liczba dzieli sie prze 5." << endl;
	}
	if (silnia(liczba) / 3) {
		cout << "Liczba dzieli sie przez 3." << endl;
	}
	if (silnia(liczba) / 2) {
		cout << "Liczba dzieli sie przez 2." << endl;
	}
}
	
