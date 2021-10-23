/*
Napisz program, który tworzy zmienną całkowitą o nazwie "liczba", nadaje jej wartość 10, oblicza podwojoną i podniesioną do kwadratu wartość zmiennej oraz wyświetla wszystkie trzy liczby odpowiednio je oznaczając.
*/
#include <iostream>

using namespace std;

int podwojona(int x) {
    return x * 2;
}

int kwadrat(int x) {
    return x * x;
}

void liczba() {
    int liczba = 10;
    cout << "Liczba = " << liczba << endl;
    cout << "Podwojona liczba = " << podwojona(liczba) << endl;
    cout << "Liczba do kwadratu = " << kwadrat(liczba) << endl;
}

int main()
{
    liczba();
    return 0;
}