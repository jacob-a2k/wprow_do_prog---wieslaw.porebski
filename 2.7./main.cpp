    // Literaly tekstowe, operator sizeof()

#include <iostream>

using namespace std;

int main()
{
    cout << "abcd\n";
    cout << "Liczba znakow w \"abcd\" = " << sizeof "abcd"; // sizeof() - zwraca liczbe bajtow danego lancucha
    cout << "" << endl; // Lanuch pusty
    cout << "Wyrazy przedzielone\t tabulatorem" << "\n"; // \t - znak tabulacji
    cout << "Tekst dwuwierszowy \
    pojawi sie w jednym wierszu"; // linijka zaczyna sie od tabulacji, co powoduje przerwe po kompilacji programu
                                  // \ - znak kontynuacji
    return 0;
}
