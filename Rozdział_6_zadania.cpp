#include <iostream>
#include <math.h>

using namespace std;

void zadanie_1() {
    char litery[26];

    cout << "Podaj 26 liter: ";
    
    for (int i = 0; i < 26; i++)
    {
        cin >> litery[i];
    }
    cout << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << litery[i];
    }
}

void zadanie_2() {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++) {
            cout << "$";
        }
        cout << endl;
    }
}

void zadanie_3() {
    for (int i = 1; i <= 6; i++)
    {
        for (char ch = ('F'); ch < ('F' + i); ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

void zadanie_5() {
    int i, j;

    cout << "Od ktorej liczby tabela ma sie zaczac: ";
    cin >> i;
    cout << "Do ktorej liczby tabela ma sie skonczyc: ";
    cin >> j;

    cout << "n     n^2     n^3" << endl;

    for (i ; i <= j; i++)
    {
        printf("%d %7d %7d\n", i, i * i, i * i * i);
    }
}

void zadanie_6() {
    char slowo[30];

    cout << "Podaj slowo: ";
    cin >> slowo;
    
    for (int i = strlen(slowo); i >= 0; i--)
    {
        cout << slowo[i];
    }
}

void zadanie_7_i_8() {
    double a, b, roznica;

    do
    {
        cout << "Podaj 2 liczby: ";
        cin >> a >> b;
        roznica = (a - b) / (a * b);
        cout << "Roznica wynosi: " << roznica << endl;
    } while (a > 0 && b > 0);
}

void zadanie_9() {
    int tab[8];

    cout << "Podaj 8 liczb calkowitych: " << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << i+1 << ". ";
        cin >> tab[i];
    }
    cout << endl;
    for (int i = 7; i >= 0; i--)
    {
        cout << i + 1 << ". " << tab[i] << endl;
    }
}

void zadanie_10() {
    double suma_1 = 1, suma_2 = 1;
    int ile;

    cout << "Podaj maksymalna liczbe wyrazow do zsumowania: ";
    cin >> ile;

    for (double i = 2; i <= ile; i++)
    {
        suma_1 += (1 / i);
        suma_2 -= (1 / i);

        cout << "Dla i = " << i << " Suma wynosi: " << suma_1 << endl;
        cout << "Dla n = " << i << " Suma wynosi: " << suma_2 << endl;
        cout << endl;
    }
}

void zadanie_11() {
    int tab[8];

    for (int i = 0; i < 8; i++)
    {
        tab[i] = pow(2, i);
    }

    int i = 0;
    while (i < 8)
    {
        cout << "2^" << i << " = " << tab[i] << endl;
        i++;
    }
}

void zadanie_12() {
    char wiersz[30];

    cout << "Podaj wiersz: ";
    cin >> wiersz;

    for (int i = strlen(wiersz); i >= 0; i--)
    {
        cout << wiersz[i];
    }
}

void zadanie_13() {
    double ewa, kasia, kwota = 100;

    for (int i = 1; ; i++)
    {
        ewa = kwota * (1 + (0.1 * i));
        kasia = kwota * pow((1 + 0.05), i);

        cout << i << ". rok Ewy: " << ewa << endl;
        cout << i << ". rok Kasi: " << kasia << endl;
        cout << endl;

        if (kasia > ewa)
        {
            cout << "Po " << i << " latach wartosc Kasi przekracza wartosc inwestycji Ewy.";
            break;
        }
    }
}

void zadanie_14() {
    double jim, kwota = 1000000;

    for (int i = 1; ; i++)
    {
        jim = kwota * (1 + (0.08 * i)) - 100000;
        cout << i << ". rok: " << jim << endl;

        if (jim == 0)
        {
            break;
        }
    }
}

int main()
{
    //zadanie_1();
    //zadanie_2();
    //zadanie_3();
    //zadanie_5();
    //zadanie_6();
    //zadanie_7_i_8();
    //zadanie_9();
    //zadanie_10();
    //zadanie_11();
    //zadanie_12();
    //zadanie_13();
    //zadanie_14();
}