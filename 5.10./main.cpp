        // Itracyjne obliczanie silni
/*
#include <iostream>

using namespace std;

long sil( long n );

int main()
{
    long j = 3;
    long k = sil( j );
    cout << "sil( " << j << " ) = " << k << endl;

    return 0;
}
long sil( long n ){
    long pomoc = 1;
    for( int i = 1; i <= n; i++ )
        pomoc = pomoc * i;
    return n == 1 ? n : pomoc;
}
*/


        // Rekurencyjne obliczanie silni
        // 5.11.
/*
#include <iostream>

using namespace std;

long silnia( long n );

int main()
{
    long j = 3;
    long k = silnia( j );
    cout << "silnia( " << j << " ) = " << k << endl;

    return 0;
}
long silnia( long n ){
    if( n > 0 )
        return n * silnia( n - 1 );
    else
        return 1;
}
*/


        // gcd - greatest common deminator
        // wersja itereacyjna
        // 5.12.
/*
#include <iostream>

using namespace std;

int gcd( int, int );

int main()
{
    int i = 24;
    int j = 32;
    int k = gcd( i, j );
    cout << k << endl;

    return 0;
}
int gcd( int x, int y ){
    int temp;
    while( y ){
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
*/


        // rgcd - rekursion greatest common deminator
        // wersja rekurencyjna
        // 5.13.
/*
#include <iostream>

using namespace std;

int rgcd( int, int );

int main()
{
    int i = 24;
    int j = 32;
    int k = rgcd( i, j );
    cout << k << endl;

    return 0;
}
int rgcd( int x, int y ){
    if( y == 0 )
        return x;
    return rgcd( y, x%y);
}
*/


        // Funkcja generuje wartosc k-tej cyfry dziesietnej liczby calkowitej 'n'
        //5.14.
/*
#include <iostream>

using namespace std;

long cyfra(long n, long k);

int main()
{
    long i = 1234;
    long j = 4;
    long m = cyfra( i, j );
    cout << "cyfra( " << i << ", " << j << " ) = " << m << endl;

    return 0;
}
long cyfra( long n, long k ){
    if( k == 0)
        return 0;
    else if( k == 1 )
        return n %10;
    else
        return cyfra( n / 10, k - 1 );
}
*/


        // Przeksztalcenie dziesietnego zapisu liczby calkowitej na zapis binarny
        // Cyfry binarne
        // 5.15.

#include <iostream>

using namespace std;

void drukujbity( int n );
void zapisbinarny( int m );

int main()
{
    int j = 15;
    zapisbinarny( j );
    cout <<" jestem zapisem binarnym liczby " << j;
    cout << '\n';

    return 0;
}
void drukujbity( int iloraz ){
    if( (iloraz / 2) != 0 )
        drukujbity( iloraz / 2 );
    cout << iloraz % 2;
}

void zapisbinarny( int n ){
    drukujbity( n );
}
