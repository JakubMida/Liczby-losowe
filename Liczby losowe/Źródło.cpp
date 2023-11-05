#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int liczba, x, liczba_prob = 0; //x - liczba podana przez uzytkownika, liczba_prob - ilosc prob wykonanych przez uzytkownika do momentu odgadniecia

int main() {
	cout << "Zgadnij o jakiej liczbie mysle z zakresu od 1 do 100\n";
	srand(time(NULL));
	liczba = rand() % 100 + 1;
	//cout << liczba << endl;
	while (liczba != x) {
		liczba_prob++;

		cout << "Zgadnij jaka to liczba: ";
		cin >> x;
		if (liczba == x) {

			cout << "Brawo, odgadles liczbe!\n";
			cout << "Liczba prob: " << liczba_prob << endl;
		}
		else if (x > liczba){
			cout << "Troche minej\n";
		}
		else if (x < liczba) {
			cout << "Troche wiecej\n";
		}
	}
	if (x == liczba) {
		cout << "Komputer wylosowal " << liczba;
	}
	getchar(); getchar();
	return 0;
	/*Beep(1396, 200); mozliwy dŸwiêk dla zwyciestwa*/

	}