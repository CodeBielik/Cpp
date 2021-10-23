/*
Napisz program wyświetlający następujący tekst:
Usmiech!Usmiech!Usmiech!
Usmiech!Usmiech!
Usmiech!
Program powinien definiować funkcję wyświetlającą tekst Usmiech! jeden raz i wywoływać ją tyle razy, ile jest to potrzebne.
*/
#include <iostream>

using namespace std;

void tekst() {
    cout << "Usmiech!";
}

int main()
{
    tekst();
    tekst();
    tekst();
    cout << endl;
    tekst();
    tekst();
    cout << endl;
    tekst();
    return 0;
}
