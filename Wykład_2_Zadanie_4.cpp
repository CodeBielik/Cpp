/*
Napisz program, dający w wyniku następujący tekst:
Panie Janie!
Panie Janie!
Rano wstan!
Niech program wykorzystuje dwie dodatkowe (poza main()) funkcje: jedną wyświetlającą jednokrotnie tekst Panie Janie! i drugą, wyświetlającą ostatni z podanych wyżej wierszy.
*/
#include <iostream>

using namespace std;

void wierszPierwszy() {
    cout << "Panie Janie!" << endl;
}

void wierszOstatni() {
    cout << "Rano wstan!";
}

int main()
{
    wierszPierwszy();
    cout << "Panie Janie!" << endl;
    wierszOstatni();
    return 0;
}