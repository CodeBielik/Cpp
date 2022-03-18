#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <algorithm>

using namespace std;

void Zadanie_1() {
	char ch;
	int i = 0;
	while (ch = getchar()) {
		if (i == 8)
		{
			break;
		}
		i++;
	}
}

void Zadanie_2() {
	char ch[8];
	
	for (int i = 0; i < size(ch); i++)
	{
		ch[i] = getchar();
		if (ch[i] == ' ')
		{
			break;
		}
		if (ch[i] == '\t')
		{
			break;
		}
		if (ch[i] == '\n')
		{
			break;
		}
	}
}

void Zadanie_3() {
	char t[20];

	for (int i = 0; i < size(t); i++)
	{
		t[i] = getchar();
		if (t[i] == ' ')
		{
			t[i] = '\0';
		}
	}
	fputs(t, stdout);
}

void Zadanie_4() {
	char ch[] = "Szukany znak to p";
	char* p;

	p = strchr(ch, 'p');
	while (p != NULL)
	{
		cout << "Zanleziony na miejscu: " << &p;
		p = strchr(p + 1, 's');
	}

}

int zawiera(char znak, string lancuch) {
	if (lancuch.find(znak) != string::npos)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Zadanie_8(string lancuch) {
	reverse(lancuch.begin(), lancuch.end());
	cout << lancuch;
}

void Zadanie_9(string lancuch) {

	lancuch.erase(remove(lancuch.begin(), lancuch.end(), ' '), lancuch.end());
	cout << lancuch;
}

void Zadanie_11() {
	int slowa = 0, duze_litery = 0, male_litery = 0, znaki_przestankowe = 0, cyfry = 0;
	char lancuch[20];
	fgets(lancuch, 20, stdin);
	for (int i = 0; i < size(lancuch); i++)
	{
		if (isspace(lancuch[i]))
		{
			slowa++;
		}
		if (isupper(lancuch[i]))
		{
			duze_litery++;
		}
		if (islower(lancuch[i]))
		{
			male_litery++;
		}
		if (ispunct(lancuch[i]))
		{
			znaki_przestankowe++;
		}
		if (isdigit(lancuch[i]))
		{
			cyfry++;
		}
	}
	fputs(lancuch, stdout);
	cout << endl;
	cout << "Liczba slow: " << slowa << endl;
	cout << "Liczba duzych liter: " << duze_litery << endl;
	cout << "Liczba malych liter: " << male_litery << endl;
	cout << "Liczba znakow przestankowych: " << znaki_przestankowe << endl;
	cout << "Liczba cyfr: " << cyfry << endl;
}

void Zadanie_12() {
	string lancuch = "idz do domu";

	reverse(lancuch.begin(), lancuch.end());

	lancuch.insert(lancuch.end(), ' ');

	int n = lancuch.length();

	int j = 0;

	for (int i = 0; i < n; i++)
	{
		if (lancuch[i] == ' ')
		{
			reverse(lancuch.begin() + j, lancuch.begin() + i);

			j = i + 1;
		}
	}

	lancuch.pop_back();

	cout << lancuch;
}

void Zadanie_13() {
	double wynik = 1, podstawa;
	int potega;

	cout << "Podaj podstawe potegi: ";
	cin >> podstawa;
	cout << "Podaj wykladnik: ";
	cin >> potega;

	if (potega >= 0)
	{
		for (int i = 0; i < potega; i++)
		{
			wynik *= podstawa;
		}
	}
	else
	{
		for (int i = 0; i > potega; i--)
		{
			wynik *= 1 / podstawa;
		}
	}
	cout << wynik << endl;
}

void Zadanie_14() {
	char lancuch[] = "45478";
	int wynik = 0;

	for (int i = 0; i < lancuch[i] != '\0'; i++)
	{
		wynik = wynik * 10 + lancuch[i] - '0';
	}
	cout << wynik;
}

void Zadanie_15() {
	string lancuch = "PRZEmiana na cos";
	string polecenie;

	cout << "Podaj argument wiersza polecen: ";
	cin >> polecenie;

	if (polecenie == "-p")
	{
		cout << lancuch;
	}
	else if (polecenie == "-u")
	{
		for (int i = 0; i < lancuch.length(); i++)
		{
			lancuch[i] = toupper(lancuch[i]);
		}
		cout << lancuch;
	}
	else if (polecenie == "-l")
	{
		for (int i = 0; i < lancuch.length(); i++)
		{
			lancuch[i] = tolower(lancuch[i]);
		}
		cout << lancuch;
	}
	else
	{
		cout << "Brak takiego argumentu";
	}
}

int main()
{
	//Zadanie_1();
	//Zadanie_2();
	//Zadanie_3();
	//Zadanie_4();
	//cout << zawiera('p', "Szukany znak to o") << endl;
	//Zadanie_8("To jest testowy lancuch");
	//Zadanie_9("Te zdanie jest oddzielone spacjami");
	//Zadanie_11();
	//Zadanie_12();
	//Zadanie_13();
	//Zadanie_14();
	//Zadanie_15();
    return 0;
}