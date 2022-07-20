        // Wslazniki i tablice
/*
#include <iostream>

using namespace std;

int main()
{
    int a[ 10 ] = {0,1,2,3,4,5,6,7,8,9};
    int b[ 10 ], *ap, *bp;
    ap = a;     // to samo, co ap = &a[ 0 ], poniewaz a == &a[0]
    bp = b;     // to samo, cp bp = &b[0], poniewaz b == &b[0]

    for( int i = 0; i < 10; i ++ )
        cout << "a[ " << i << " ] = " << *ap++ << endl;
    return 0;
}
*/

        // 4.11. - wskazniki i tablice

#include <iostream>

using namespace std;

int main()
{
    int a[10], *ap, *bp;
    int b[10] = {0,1,2,3,4,5,6,7,8,9};
    ap = a;     // to samo, co ap =&a[0], poniewaz a == &ap[0]
    bp = b;     //to samo co bp = &b[0]
     while( ap < &a[10] ){
        *ap++ = *bp++;
     }
     // *ap++ == *(ap++) - operator "++" wiaze silniej niz " * " instrukcja: *ap++ = *bp++ jest rownowazna sekwencji instrukcji:\
        *ap = *bp; ap = ap + 1; bp = bp + 1;
    return 0;
}
