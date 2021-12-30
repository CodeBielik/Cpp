#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>

using namespace std;

void Zadanie_1() {
	char ch;
	int l_odstepow = 0, l_nowych_linii = 0, l_innych_znakow = 0;

	while ((ch = getchar()) != '#')
	{
		if (isspace(ch))
		{
			l_odstepow++;
		}
		if (ch == '\n')
		{
			l_nowych_linii++;
		}
		if (!isspace(ch) || !ch == '\n')
		{
			l_innych_znakow++;
		}
	}
	cout << "Liczba odstepow: " << l_odstepow << endl << "Liczba znakow nowej linii: " << l_nowych_linii << endl << "Liczba wszystkich innych znakow: " << l_innych_znakow;
}

void Zadanie_2() {
	char ch;
	int licznik_znakow = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch != '\n')
		{
			licznik_znakow++;
			cout << ch << " - " << (int)ch << " ";
			if (licznik_znakow % 8 == 0)
			{
				cout << endl;
			}
		}
	}
}

void Zadanie_3() {
	int liczby, ilosc_parzystych = 0, ilosc_nieparzystych = 0, suma_parzyste = 0, suma_nieparzyste = 0;
	double srednia_parzyste = 0, srednia_nieparzyste = 0;

	do
	{
		cin >> liczby;
		if (liczby % 2 == 0 && liczby != 0)
		{
			ilosc_parzystych++;
			suma_parzyste += liczby;
		}
		if(liczby % 2 != 0)
		{
			ilosc_nieparzystych++;
			suma_nieparzyste += liczby;
		}

	}
	while (liczby != 0);

	srednia_parzyste += (suma_parzyste / ilosc_parzystych);
	srednia_nieparzyste += (suma_nieparzyste / ilosc_nieparzystych);

	cout << "Ilosc liczb parzystych: " << ilosc_parzystych << endl << "Srednia liczb parzystych: " << srednia_parzyste << endl;
	cout << "Ilosc liczb nieparzystych: " << ilosc_nieparzystych << endl << "Srednia liczb nieparzystych: " << srednia_nieparzyste << endl;
}

void Zadanie_4() {
	char ch;
	int zmiany = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			zmiany++;
		}
		else if (ch == '!') {
			char w = '!';
			putchar(w);
			zmiany++;
		}
		cout << ch;
	}
	cout << "Liczba zmian: " << zmiany;
}

void Zadanie_5() {
	int liczby, ilosc_parzystych = 0, ilosc_nieparzystych = 0, suma_parzyste = 0, suma_nieparzyste = 0;
	double srednia_parzyste = 0, srednia_nieparzyste = 0;

	do
	{
		cin >> liczby;
		switch (liczby % 2) {
			case 0:
				if (liczby != 0)
				{
					ilosc_parzystych++;
					suma_parzyste += liczby;
				}
				break;
			case 1:
				ilosc_nieparzystych++;
				suma_nieparzyste += liczby;
				break;
		}

	} while (liczby != 0);

	srednia_parzyste += (suma_parzyste / ilosc_parzystych);
	srednia_nieparzyste += (suma_nieparzyste / ilosc_nieparzystych);

	cout << "Ilosc liczb parzystych: " << ilosc_parzystych << endl << "Srednia liczb parzystych: " << srednia_parzyste << endl;
	cout << "Ilosc liczb nieparzystych: " << ilosc_nieparzystych << endl << "Srednia liczb nieparzystych: " << srednia_nieparzyste << endl;
}

void Zadanie_6() {
	char ch;
	string s;
	int ilosc = 0;

	while ((ch = getchar()) != '#')
	{
		s += ch;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' && s[i + 1] == 'n') {
			ilosc++;
		}
	}
	cout << "Ilosc wystapien 'an': " << ilosc << endl;
}

void Zadanie_7() {
	int godziny, p_wynagrodzenie = 40, nadgodziny;
	double brutto = 0, netto = 0, suma = 0, p1 = 1200 * 0.15, p2 = 600 * 0.20, p3;

	cout << "Podaj liczbe przepracowanych godzin w tygodniu: ";
	cin >> godziny;

	if (godziny > 0 && godziny <= 40)
	{
		brutto += (godziny * p_wynagrodzenie);

		if (brutto >= 1200)
		{
			netto += (brutto - p1);
		}
	}
	else
	{
		nadgodziny = godziny - 40;
		brutto += (((godziny - nadgodziny) * p_wynagrodzenie) + (nadgodziny * (p_wynagrodzenie * 1.5)));

		if (brutto >= 1200)
		{
			netto += (brutto - p1);
		}
		if (netto >= 1800)
		{
			netto -= p2;
		}
		if (netto >= 1800)
		{
			suma = netto - 1800;
			p3 = suma * 0.25;
			netto -= p3;
		}
	}
	cout << "Wynagrodzenie brutto: " << brutto << endl << "Podatek: " << brutto - netto << endl << "Wynagrodzenie netto: " << netto;
}

void Zadanie_8() {
	int x, godziny, suma = 0;
	char ch;
	for (;;)
	{
		cout << "***********************************************************************" << endl;
		cout << "Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:" << endl;
		cout << "1) 35 zl/godz.                               2) 37 zl/godz." << endl;
		cout << "3) 40 zl/godz.                               4) 45 zl/godz." << endl;
		cout << "5) wyjscie" << endl;
		cout << "***********************************************************************" << endl;
		cin >> x;

		switch (x)
		{
		case 1:
			cout << "Podaj liczbe przepracowanych godzin: ";
			cin >> godziny;
			suma += (godziny * 35);
			cout << "Wynagrodzenie wynosi: " << suma;
			break;
		case 2:
			cout << "Podaj liczbe przepracowanych godzin: ";
			cin >> godziny;
			suma += (godziny * 37);
			cout << "Wynagrodzenie wynosi: " << suma;
			break;
		case 3:
			cout << "Podaj liczbe przepracowanych godzin: ";
			cin >> godziny;
			suma += (godziny * 40);
			cout << "Wynagrodzenie wynosi: " << suma;
			break;
		case 4:
			cout << "Podaj liczbe przepracowanych godzin: ";
			cin >> godziny;
			suma += (godziny * 45);
			cout << "Wynagrodzenie wynosi: " << suma;
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Dostepne opcje: 1-5";
		}
		getchar(); getchar();
		system("cls");
	}
}

bool Liczba_Pierwsza(int x) {
	if (x < 2)
	{
		return false;
	}
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

void Zadanie_9() {
	int x;

	cout << "Podaj liczbe calkowita: ";
	cin >> x;

	for (int i = 0; i <= x; i++)
	{
		if (Liczba_Pierwsza(i)) {
			cout << i << " ";
		}
	}
}

void Zadanie_10() {
	int x;
	double stawka_1 = 17850, stawka_2 = 23900, stawka_3 = 29750, stawka_4 = 14875, p1 = stawka_1 * 0.15, p2 = stawka_2 * 0.15, p3 = stawka_3 * 0.15, p4 = stawka_4 * 0.15, dochod_1, dochod_2, suma, suma_2;
	for (;;)
	{
		cout << "******************************************************************************" << endl;
		cout << "Wybierz kategorie:" << endl;
		cout << "1) Stan wolny                            15% dochodu do 17850$ plus 28% reszty" << endl;
		cout << "2) Glowa rodziny                         15% dochodu do 23900$ plus 28% reszty" << endl;
		cout << "3) Malzenstwo, rozliczenie wspolne       15% dochodu do 29750$ plus 28% reszty" << endl;
		cout << "1) Malzenstwo, rozliczenie osobne        15% dochodu do 14875$ plus 28% reszty" << endl;
		cout << "5) wyjscie" << endl;
		cout << "******************************************************************************" << endl;
		cin >> x;

		switch (x)
		{
		case 1:
			cout << "Podaj dochod: ";
			cin >> dochod_1;
			if (dochod_1 <= stawka_1)
			{
				suma = dochod_1 * 0.85;
			}
			else
			{
				suma = p1 + 0.28 * (dochod_1 - stawka_1);
			}
			cout << "Kwota podatku: " << suma;
			break;
		case 2:
			cout << "Podaj dochod: ";
			cin >> dochod_1;
			if (dochod_1 <= stawka_2)
			{
				suma = dochod_1 * 0.85;
			}
			else
			{
				suma = p2 + 0.28 * (dochod_1 - stawka_2);
			}
			cout << "Kwota podatku: " << suma;
			break;
		case 3:
			cout << "Podaj dochod: ";
			cin >> dochod_1;
			if (dochod_1 <= stawka_3)
			{
				suma = dochod_1 * 0.85;
			}
			else
			{
				suma = p3 + 0.28 * (dochod_1 - stawka_3);
			}
			cout << "Kwota podatku: " << suma;
			break;
		case 4:
			cout << "Podaj dochod pierwszy: ";
			cin >> dochod_1;
			cout << "Podaj dochod drugi: ";
			cin >> dochod_2;
			if (dochod_1 <= stawka_4)
			{
				suma = dochod_1 * 0.85;
			}
			else
			{
				suma = p4 + 0.28 * (dochod_1 - stawka_4);
			}
			if (dochod_2 <= stawka_4)
			{
				suma_2 = dochod_2 * 0.85;
			}
			else
			{
				suma_2 = p4 + 0.28 * (dochod_2 - stawka_4);
			}
			cout << "Kwota podatku dla pierwszego dochodu: " << suma << endl << "Kwota podatku dla drugiego dochodu: " << suma_2;
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Dostepne opcje: 1-5";
		}
		getchar(); getchar();
		system("cls");
	}
}

int main()
{
	//Zadanie_1();
	//Zadanie_2();
	//Zadanie_3();
	//Zadanie_4();
	//Zadanie_5();
	//Zadanie_6();
	//Zadanie_7();
	//Zadanie_8();
	//Zadanie_9();
	Zadanie_10();
}
