#include <iostream>
#include <stdio.h>

using namespace std;

double min(double x, double y) {
    return x < y ? x : y;
}

void rzad_zn(char ch, int i, int j) {
    for ( i; i < j; i++)
    {
        putchar(ch);
    }
}

void Zadanie_3() {
    char znak;
    int x, y;
    cout << "Podaj znak: ";
    cin >> znak;
    cout << "Podaj 2 liczby calkowite: ";
    cin >> x >> y;

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            putchar(znak);
        }
        cout << endl;
    }
}

double Zadanie_4(double x, double y) {
    return 2 / (1 / x + 1 / y);
}

int Zadanie_5(char c) {
    char lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    char upper[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    
    if (isalpha(c) != 0)
    {
        for (int i = 0; i < size(lower); i++)
        {
            if (c == lower[i])
            {
                return i + 1;
            }
        }
        for (int i = 0; i < size(upper); i++)
        {
            if (c == upper[i])
            {
                return i + 1;
            }
        }
    }
    else
    {
        return -1;
    }
}

double Zadanie_6(double a, int b) {
    double pot = 1;

    if (b >= 0)
    {
        for (int i = 0; i < b; i++)
        {
            pot *= a;
        }
        return pot;
    }
    else
    {
        for (int i = 0; i > b; i--)
        {
            pot *= 1 / a;
        }
        return pot;
    }
}

double Zadanie_7(double a, int b) {
    if (b == 0)
    {
        return 1;
    }
    else if (b > 0)
    {
        return a * Zadanie_7(a, b - 1);
    }
    else
    {
        return 1 / Zadanie_7(a, -b);
    }
}

void Zadanie_8(int n, int rodzaj) {
    if (n > 0)
    {
        Zadanie_8(n / rodzaj, rodzaj);
        cout << n % rodzaj;
    }
}

int main()
{
    //cout << min(17, 7) << endl;
    //rzad_zn('*', 2, 5);
    //Zadanie_3();
    //cout << Zadanie_4(12, 6) << endl;
    //cout << Zadanie_5('c') << endl;
    //cout << Zadanie_6(-2, -5) << endl;
    //cout << Zadanie_7(-2, -5) << endl;
    //Zadanie_8(9, 10);
    return 0;
}