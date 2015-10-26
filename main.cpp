#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Zmienne poczatkowe.
    float a[2];
    float b[2];
    int menu;
    char znak;

    do {
        cout << "Podaj pierwsza wspolrzedna wektora a: ";
        cin >> a[0];
        cout << "Podaj druga wspolrzedna wektora a: ";
        cin >> a[1];
        cout << "Podaj pierwsza wspolrzedna wektora b: ";
        cin >> b[0];
        cout << "Podaj druga wspolrzedna wektora b: ";
        cin >> b[1];

        // Wyswietlenie menu.
        cout << "Co mam obliczyc?" << endl;
        cout << "1. Sume wektorow." << endl;
        cout << "2. Dlugosci wektorow." << endl;
        cout << "3. Iloczyn skalarny wektorow." << endl;
        cin >> menu;

        switch (menu) {
        case 1:
            cout << "Wynik to: [" << a[0] + b[0] << ", " << a[1] + b[1] << "]" << endl;
            break;
        case 2:
            cout << "Wynik to: " << endl;
            cout << "Dlugosc wektora a: " << sqrt(pow(a[0] + a[1], 2)) << endl;
            cout << "Dlugosc wektora b: " << sqrt(pow(b[0] + b[1], 2)) << endl;
            break;
        case 3:
            cout << "Wynik to: " << a[0] * b[0] + a[1] * b[1] << endl;
            break;
        default:
            break;
        }

        // koniec pracy programu.
        cout << "Zakonczyc prace programu? ";
        cin >> znak;
        } while (znak != 't' || znak != 'T');

        return 0;
    }
