        // Funkcje polimorficzne (polimorfizm parametryczny) - jeden ogolny interfejs, wiele metod ( implementacji )
        // 5.23.
/*
#include <iostream>

using namespace std;

extern int min( int, int );
extern double min( double, double );
extern int min( int, int, int );

int main()
{
    cout << min( 2, 7 ) << endl;
    cout << min( 2.5, 7.5 ) << endl;
    cout << min( 9, 6, 4 ) << endl;

    return 0;
}
int min( int a, int b ){
    return a < b ? a : b;
}

double min( double x, double y ){
    return x < y ? x : y;
}

int min( int u, int v, int w ){
    if( u < w )
        return u < w ? u : w;
    else
        return v < w ? v : w;
}
*/

/*
    Dopasowanie argumentow:

    1. Dopasowanie dokladne
    2. Dopaasowanie z promocja - przyklad 5.24.
    3. Konwersje standardowe
    4. Konwersje jawne
    5. Niejednoznacznosc
    6. Brak dopasowania
*/


        // Deklaracje funkcji przeciazonych, ich wywolania i promocje niektorych typow
        // Dopasowania argumentow
        // 5.24.

#include <iostream>

using namespace std;

void ff( char );
void ff(int);
void ff( unsigned );
void ff( double );
void ff( float );

int main()
{
    ff( 'A');   // dopasowuje ff( char );
    ff( 25 );   // dopasowuje ff( int );
    ff( 25u );  // dopasowuje ff( unsigned );
    ff( 3.14 ); // dopasowuje ff( double );
    ff( 3.14F ); // dopasowuje ff( float );

    return 0;
}
void ff( char )     { cout << " char\n"; }

void ff( int )      { cout << " int\n"; }

void ff( unsigned ) { cout << " unsigned\n"; }

void ff( double )    { cout << " double\n"; }

void ff( float )   { cout << " float\n"; }


        // Wksaniki i adresy do funkcji przeciazonych
        // 5.28.
/*
#include <iostream>

using namespace std;

void znaki( int licznik ){
    for(  ; licznik; licznik-- )    // brak instrukcji inicjujacej, zmienna sterujaca 'licznik' jest inicjowana w wywolaniu funkcji
        cout << ' ';
}
void znaki( int licznik, char znak ){
    for(  ; licznik; licznik-- )    // brak instrukcji inicjujacej, zmienna sterujaca 'licznik' jest inicjowana w wywolaniu funkcji
        cout << znak;
}
int main()
{
    void( *wsk1 )( int );
    void( *wsk2 )( int, char );
    wsk1 = znaki;   // dopasowuje do nazwy znaki funkcje znaki( int )
    wsk2 = znaki;   // dopasowuje do nazwy znaki funkcje znaki( int , char )
    wsk1( 5 );
    cout << "|\n";
    wsk2( 10, 'x');
    cout << "|\n";

    return 0;
}
*/
