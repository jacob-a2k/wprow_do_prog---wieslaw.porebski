        // OPERATORY
/*
Operatory arytmetyczne:
    +, -, *, /, &;


Operatory relacji:
    < -     mniejszy
    <= -    mniejszy lub rowny
    > -     wiekszy
    >= -    wiekszy lub rowny
    == -    rowny
    != -    nierowny


Operatory logiczne:
    ! -     negacja
    && -    koniunkcja
    || -    alternatywa


Bitowe operatory logiczne:
    & -     bitowa koniunkcja
    | -     bitowa alternatywa
    ^ -     bitowa roznica symetryczna
    << -    przesuniecie w lewo
    >> -    przesuniecie w prawo
    ~ -     bitowa negacja


Wieloznakowe operatory przypisania:
    +=  -   a = a + b;
    -+  -   a = a - b;
    *=  -   a = a * b;
    /=  -   a = a / b;
    %=  -   a = a % b;
    <<= -   a = a << b;
    >>= -   a = a >> b;
    &=  -   a = a & b;
    |=  -   a = a | b;
    ^=  -   a = a ^ b;
*/


        // Operator warunkowy - ?: - operator trojargumentowy
        // wyrazenie1 ? wyrazenie2 : wyrazenie3
/*
#include <iostream>

using namespace std;

int main()
{
    int a,b,z;
    //cout << "Podaj wartosc 'a' i 'b': ";
    cin >> a >> b;
    z = (a > b) ? a:b; // z == max(a,b)
    cout << z;

    return 0;
}
*/


        // Operator zwiekszania/zmniejszania
/*
#include <iostream>

using namespace std;

int main()
{
    int i, j = 5;
    i = j++;    //przypisz 5 do i, po czym przypisz 6 do j
    cout << "i= " << i << ", j= " << j << endl;
    i = ++j;    //przypisz 7 do j, po czym przypisz 7 do i
    cout << "Teraz i= " << i << ", j= " << j << endl;
    // j++ = i; - ZLE!!! -  j++ nie jest l-wartoscia
    return 0;
}
*/


        // Rzutowanie ( konwersja typow )
#include <iostream>

using namespace std;

//Deklaracja zmiennych globalnych
char a;
int b;

int main()
{
    cout << "a== " << a << '\n';
    cout << "b== " << b << '\n';
    a = 'A';
    cout << "a po przypisaniu == " << a << endl;
    b = int( a );
    cout << "( b = int(a) ) == " << b << endl;
    a = (  char ) b;
    cout << "( a = (char) b) == " << a << endl;

    return 0;
}

