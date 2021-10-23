/*
Napisz program, wypisujący na ekranie Twoje imię i nazwisko: w jednym wierszu przy pomocy jednego wywołania funkcji printf(), w dwóch osobnych wierszach przy pomocy jednego wywołania printf() oraz w jednym wierszu przy użyciu dwóch wywołań pritf(). Dane wyjściowe powinny wyglądać następująco (z wyjątkiem imienia i nazwiska):
Hans Kloss      Pierwsza instrukcja pisania
Hans            Druga instrukcja pisania
Kolss           Wciąż druga instrukcja pisania
Hans Kloss      Trzecia i czwarta instrukcja pisania
*/
#include <iostream>

int main()
{
    printf("Krystian Bielecki");
    printf("\nKrystian\nBielecki");
    printf("\nKrystian ");
    printf("Bielecki");
    return 0;
}
