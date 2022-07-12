    // Struktura programu w jezyku C++

#include <iostream>

using namespace std;

void czytaj();
void sortuj();
void pisz();

int main()
{
    czytaj();
    sortuj();
    pisz();

    return 0;
}
void czytaj()   { cout << "czytaj()\n"; }
void sortuj()   { cout << "sortuj()\n"; }
void pisz()     { cout << "pisz()\n";   }
