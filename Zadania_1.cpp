#include <iostream>
#include <string.h>

using namespace std;

void zadanie_1() {
    string imie, nazwisko;

    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    cout << nazwisko << " " << imie;
}

void zadanie_2() {
    string imie;

    cout << "Podaj swoje imie: ";
    cin >> imie;

    cout << "\"" << imie << "\"" << endl;

    cout << "\"";
    cout.width(20);
    cout << left << imie;
    cout << "\"" << endl;

    cout << "\"";
    cout.width(20);
    cout << right << imie;
    cout << "\"" << endl;

    cout << "\"" << left << imie << "   " << "\"";
}

void zadanie_3() {
    float liczba;

    cout << "Podaj liczbe zmiennoprzecinkowa: ";
    cin >> liczba;

    printf("Wpisano liczbe %.1f lub %.1e\n", liczba, liczba);
    printf("Wpisano liczbe %+.3f lub %.3E\n", liczba, liczba);
}

void zadanie_4() {
    float wzrost;
    string imie;

    cout << "Podaj swoj wzrost w [cm]: ";
    cin >> wzrost;
    cout << "Podaj swoje imie: ";
    cin >> imie;

    cout << imie << ", masz " << wzrost / 100 << " metra wzrostu.";
}

void zadanie_5() {
    string imie, nazwisko;

    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;

    cout << imie << " " << nazwisko << endl;
    printf("%4d %17d\n", imie.length(), nazwisko.length());

    cout << imie << " " << nazwisko << endl;
    printf("%d %5d\n", imie.length(), nazwisko.length());
}

int main()
{
    //zadanie_1();
    //zadanie_2();
    //zadanie_3();
    //zadanie_4();
    //zadanie_5();
}