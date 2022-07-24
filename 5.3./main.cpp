        // Przekazywanie argumentow przez wartosc
        // Konwersja niejawna zmiennych typu float na int
/*
#include <iostream>

using namespace std;

int lmax( int x, int y);

int main()
{
    float zf = 35.7;
    double zd = 11.0;
    int ii;
    ii = lmax( zf, zd );
    cout << "ii =  " << ii << endl;

    return 0;
}
int lmax( int x, int y ){
    if( x > y )
        return x;
    else
        return y;
}
*/


        // Przekazywanie argumentow przez adres - wskaznik
/*
#include <iostream>

using namespace std;

void zmiana1( int*, int* );

int main()
{
    int i = 10;
    int j = 20;
    zmiana1 ( &i, &j );
    cout << "Po zmianie i = " << i << "\tj = " << j << endl;

    return 0;
}
void zmiana1( int *x, int *y){
    int pomoc = *y;
    *y = *x;
    *x = pomoc;
}
*/


        // Przekazywanie argumentow przez adres - referencje
/*
#include <iostream>

using namespace std;

void zmiana2( int &i, int &j );

int main()
{
    int i = 10;
    int j = 20;
    zmiana2( i, j );
    cout << "Po zmianie i = " << i << "\tj = " << j << endl;

    return 0;
}
void zmiana2( int &x, int &y ){
    int pomoc = y;
    y = x;
    x = pomoc;
}
*/


        // Komunikacja funkcji main z otoczeniem

#include <iostream>
#include <stdlib.h>

using namespace std;

int main( int argc, char *argv[])
{
    if( argc != 6 ){
        cerr << "Niepoprawna liczba parametrow\n";
        exit( 1 );
    }
    int i;
    cout << "Wartosc argc wynosi: " << argc << endl << endl;
    cout << "Przekazano " << argc << " argumentow do main:" << endl << endl;
    for( i = 0; i < argc; i ++ )
        cout << "  argv[ " << i << " ]: " << argv[ i ] << endl;

    return 0;
}

