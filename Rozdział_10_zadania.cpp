#include <iostream>
#include <stdio.h>

using namespace std;

void Zadanie_1() {
	const float deszcz[5][12] = {
		{10.2, 8.1, 6.8, 4.2, 2.1, 1.8, 0.2, 0.3, 1.1, 2.3, 6.1, 7.4},
		{9.2, 9.8, 4.4, 3.3, 2.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 5.2},
		{6.6, 5.5, 3.8, 2.8, 1.6, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 4.2},
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.0, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.2}
	};
	int rok, miesiac;
	float suma, podsuma;
	printf("ROK       OPADY (w cm)\n");
	for ( rok = 0, suma = 0; rok < 5; rok++)
	{
		for (miesiac = 0, podsuma = 0; miesiac < 12; miesiac++)
		{
			podsuma += *(*(deszcz + rok) + miesiac);
		}
		printf("%5d %12.1f\n", 1995 + rok, podsuma);
		suma += podsuma;
	}
	printf("\nRoczna srednia wynosi %.1f cm.\n\n", suma / 5);
	printf("SREDNIE MIESIECZNE:\n\n");
	printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz  ");
	printf("Lis  Gru\n");

	for (miesiac = 0; miesiac < 12; miesiac++)
	{
		for (rok = 0, podsuma = 0; rok < 5; rok++)
		{
			podsuma += *(*(deszcz + rok) + miesiac);
		}
		printf("%4.1f ", podsuma/5);
	}
	printf("\n");
}

void Zadanie_2_a(double tab[], double tab_1[], double tab_2[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
	{
		tab_1[i] = tab[i];
	}
	for (int i = 0; i < rozmiar; i++)
	{
		tab_2[i] = tab[i];
	}

	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab_1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab_2[i] << " ";
	}
}

void Zadanie_2_b(double *tab, double tab_1[], double tab_2[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
	{
		tab_1[i] = *(tab + i);
	}
	for (int i = 0; i < rozmiar; i++)
	{
		tab_2[i] = *(tab + i);
	}

	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab_1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab_2[i] << " ";
	}
}

double Zadanie_3(double tab[]) {
	double max = tab[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < tab[i])
		{
			max = tab[i];
		}
	}
	return max;
}

double Zadanie_4(double tab[]) {
	double max = tab[0];
	int max_in;
	for (int i = 0; i < 5; i++)
	{
		if (max < tab[i])
		{
			max = tab[i];
			max_in = i;
		}
	}
	return max_in;
}

double Zadanie_5(double tab[]) {
	double max = tab[0], min = tab[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < tab[i])
		{
			max = tab[i];
		}
		if (min > tab[i])
		{
			min = tab[i];
		}
	}
	return max - min;
}

void Zadanie_6(double tab[][4], double tab_1[][4], int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tab_1[i][j] = tab[i][j];
		}
	}

	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << tab_1[i][j] << " ";
		}
		cout << endl;
	}
}

void Zadanie_7(double tab[], double tab_1[]) {
	for (int i = 3; i < 6; i++)
	{
		tab_1[i - 3] = tab[i];
	}

	for (int i = 0; i < 3; i++)
	{
		cout << tab_1[i] << " ";
	}
}

void Zadanie_8(double tab1[], double tab2[], double tab3[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
	{
		tab3[i] += (tab1[i] + tab2[i]);
	}
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab3[i] << " ";
	}
}

void Zadanie_9_wyswietlenie(double tab[][5], int rzedy) {
	for (int i = 0; i < rzedy; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
}

void Zadanie_9_podwajanie(double tab[][5], int rzedy) {
	cout << endl;
	for (int i = 0; i < rzedy; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			tab[i][j] *= 2;
		}
	}
	Zadanie_9_wyswietlenie(tab, rzedy);
}

void Zadanie_10_a(const float tab[][12]) {
	int rok, miesiac;
	float suma, podsuma;
	printf("ROK       OPADY (w cm)\n");
	for (rok = 0, suma = 0; rok < 5; rok++)
	{
		for (miesiac = 0, podsuma = 0; miesiac < 12; miesiac++)
		{
			podsuma += *(*(tab + rok) + miesiac);
		}
		printf("%5d %12.1f\n", 1995 + rok, podsuma);
		suma += podsuma;
	}
	printf("\nRoczna srednia wynosi %.1f cm.\n\n", suma / 5);
}

void Zadanie_10_b(const float tab[][12]) {
	int rok, miesiac;
	float suma, podsuma;
	printf("SREDNIE MIESIECZNE:\n\n");
	printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz  ");
	printf("Lis  Gru\n");

	for (miesiac = 0; miesiac < 12; miesiac++)
	{
		for (rok = 0, podsuma = 0; rok < 5; rok++)
		{
			podsuma += *(*(tab + rok) + miesiac);
		}
		printf("%4.1f ", podsuma / 5);
	}
	printf("\n");
}

void Zadanie_10() {
	const float deszcz[5][12] = {
		{10.2, 8.1, 6.8, 4.2, 2.1, 1.8, 0.2, 0.3, 1.1, 2.3, 6.1, 7.4},
		{9.2, 9.8, 4.4, 3.3, 2.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 5.2},
		{6.6, 5.5, 3.8, 2.8, 1.6, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 4.2},
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.0, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.2}
	};
	Zadanie_10_a(deszcz);
	Zadanie_10_b(deszcz);
}

void Zadanie_11_d(double tab[][5]) {
	double max = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (max < tab[i][j])
			{
				max = tab[i][j];
			}
		}
	}
	cout << "Najwiekasza wartosc to: " << max << endl;
}

void Zadanie_11_c(double tab[][5]) {
	double suma = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			suma += tab[i][j];
		}
	}
	cout << "Srednia dla wszystkich wartosci wynosi: " << suma / 15 << endl;
}

void Zadanie_11_b(double tab[][5]) {
	double suma, podsuma;
	for (int i = 0; i < 3; i++)
	{
		podsuma = 0;
		for (int j = 0; j < 5; j++)
		{
			 podsuma += tab[i][j];
		}
		suma = podsuma;
		cout << "Srednia dla " << i + 1 << " zbioru = " << suma / 5 << endl;
	}
}

void Zadanie_11_e(double tab[][5]) {
	Zadanie_11_b(tab);
	Zadanie_11_c(tab);
	Zadanie_11_d(tab);
}

void Zadanie_11_a() {
	double tab[3][5];
	cout << "Podaj 3 zbiory skladajace sie z 5 liczb: " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> tab[i][j];
		}
		cout << endl;
	}
	cout << endl;
	Zadanie_11_e(tab);
}

int main()
{
	//Zadanie_1();
	double zad_2_tab[4] = {1, 2, 3, 4};
	double zad_2_tab_1[4];
	double zad_2_tab_2[4];
	//Zadanie_2_a(zad_2_tab, zad_2_tab_1, zad_2_tab_2, 4);
	//Zadanie_2_b(zad_2_tab, zad_2_tab_1, zad_2_tab_2, 4);
	double zad3_tab[5] = { 1, 4, 5, 7, 2 };
	//cout << "Najwiekasza wartosc w tablicy to: " << Zadanie_3(zad3_tab) << endl;
	//cout << "Indeks najwiekszej wartosci w tablicy to: " << Zadanie_4(zad3_tab) << endl;
	//cout << "Roznica miedzy najwiekasza a najmniejsza wartoscia w tablicy wynosi: " << Zadanie_5(zad3_tab) << endl;
	double zad_6_tab[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
	double zad_6_tab_1[2][4];
	//Zadanie_6(zad_6_tab, zad_6_tab_1, 2);
	double zad_7_tab[7] = { 7, 6, 5, 4, 3, 2, 1 };
	double zad_7_tab_1[3] = {};
	//Zadanie_7(zad_7_tab, zad_7_tab_1);
	double zad_8_tab_1[4] = { 2, 4, 5, 8 };
	double zad_8_tab_2[4] = { 1, 0, 4, 6 };
	double zad_8_tab_3[4] = {};
	//Zadanie_8(zad_8_tab_1, zad_8_tab_2, zad_8_tab_3, 4);
	double zad_9_tab[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}, {10, 20, 30, 40, 50} };
	//Zadanie_9_wyswietlenie(zad_9_tab, 3);
	//Zadanie_9_podwajanie(zad_9_tab, 3);
	//Zadanie_10();
	Zadanie_11_a();
}
