        // Funkcje - wielokrotne wystapienie funkcji return

#include <iostream>

using namespace std;

int dods( int, int); // deklaracja funkcji - prototyp

int main()
{
    int i, j ,k;
    cout << "Wprowadz dwie liczby typu int: ";
    cin >> i >> j;
    cout << '\n';
    k = dods( i, j ); // Wywolanie funkcji
    cout << "i= " << i << "\tj= " << j << '\n';
    cout << "dods( i, j ) = " << k << '\n';

    return 0;
}
int dods( int n, int m ){
    if( n + m > 10 )
        return n + m;
    else
        return n;
}
