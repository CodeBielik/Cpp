/*
Napisz program przeliczający Twój wiek w latach na wiek w dniach. Nie uwzględniaj ułamków lat oraz lat przestępnych.
*/
#include <iostream>

using namespace std;

int wiek(int x) {
    return x * 365;
}

int main()
{
    cout << "20 lat to: " << wiek(20) << " dni";
    return 0;
}
