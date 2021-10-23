/*
Zostałeś właśnie zatrudniony przez firmę MacroMuscle, Inc. (oprogramowanie dla kulturystów).
Zamierza ona wejść na rynek europejski i potrzebuje programu przeliczającego cale na centymetry (1 cal = 2.54 cm). Program powinien pobierać liczbę cali podaną przez użytkownika.
*/
#include <iostream>

using namespace std;

void naCentymetry() {
    float cale;
    cout << "Podaj liczbe cali: ";
    cin >> cale;
    if (cale > 0){
        cout << cale << " cal = " << cale * 2.54 << " cm";
    }else{
        cout << "Niewlasciwe dane";
    }
}

int main()
{
    naCentymetry();
    return 0;
}
