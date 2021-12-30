#include <iostream>

using namespace std;

void zadanie_2() {
    int liczba, i;

    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    i = liczba + 10;

    while (liczba <= i)
    {
        cout << liczba << endl;
        liczba++;
    }
}

void zadanie_3() {
    int dni;

    cout << "Podaj liczbe dni: ";
    cin >> dni;

    cout << dni << " dni to: " << dni / 7 << " tygodnie i " << dni % 7 << " dni.";
}

void zadanie_4a() {
    double suma = 0, i = 1;

    while (i <= 20)
    {
        suma += i;
        i++;
    }

    cout << "Suma pierwszych 20 liczb naturalnych wynosi: " << suma;
}

void zadanie_4b() {
    double suma = 0, i = 1, liczba;

    cout << "Jak daleko powinny postepowac obliczenia (podaj liczbe do): ";
    cin >> liczba;

    while (i <= liczba)
    {
        suma += i;
        i++;
    }

    cout << "Suma od 1 do " << liczba << " wynosi: " << suma;
}

void zadanie_5() {
    double suma = 0, liczba;

    cout << "Podaj liczbe do ktorej bedzie liczona suma kwadratow kolejnych liczb naturalnych: ";
    cin >> liczba;

    for (int i = 1; i <= liczba; i++)
    {
        suma += (i * i);
    }

    cout << "Suma kwadratow od 1 do " << liczba << " wynosi: " << suma;
}

double zadanie_6(double x) {
    return x * x * x;
}

int main()
{
    //zadanie_2();
    //zadanie_3();
    //zadanie_4a();
    //zadanie_4b();
    //zadanie_5();
    double liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Liczba " << liczba << " do potegi 3 rowna sie: " << zadanie_6(liczba);
}
