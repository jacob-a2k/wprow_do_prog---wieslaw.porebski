        // Funkcje rozwijalne
        // 5.7.
        /*
#include <iostream>

using namespace std;

inline int podzielne( int n, int m ) {return !( n%m );}

int main()
{
    int i,j;
    int k;
    cin >> i >> j;
    k = podzielne( i, j);
    cout << "k = " << k << '\n';

    return 0;
}
*/

        // Wyjscie z programu jest uzaleznione od wprowdzenia okreslonego znaku
        // 5.8.
/*
#include <iostream>

using namespace std;

inline void f(){
    char z = '\0';
    if( cin >> z && z != 'q')
        f();
}

int main()
{
    f();

    return 0;
}
*/

        // Funkcja parzyste zwraca prawde jesli jej argument jest parzysty
        //.5.9.

#include <iostream>

using namespace std;

inline int parzyste( int n ) { return !(n%2); }

int main()
{
    if( parzyste( 10 ))
        cout << "Liczba 10 jest parzysta\n";
    else if( parzyste( 11 ))
        cout << "Liczba 11 jest parzysta\n";

    return 0;
}

