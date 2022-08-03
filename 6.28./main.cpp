        // Dziedziczenie mnogie klas
        // 6.28.
/*
#include <iostream>

using namespace std;

class Bazowa{
public:
    Bazowa() { cout << "Konstrukcja obiektu klasy Bazowa\n"; }
    ~Bazowa() { cout << "Destrukcja obiektu klasy Bazowa\n"; }
};
class Pochodna1: public Bazowa{
public:
    Pochodna1() { cout << "Konstrukcja obiektu klasy Pochodna1\n"; }
    ~Pochodna1() { cout << "Destrukcja obiektu klasy Pochodna1\n"; }
};
class Pochodna2: public Pochodna1{
public:
    Pochodna2() { cout << "Konstrukcja obiektu klasy Pochodna2\n"; }
    ~Pochodna2() { cout << "Destrukcja obiektu kalsy Pochodna2\n"; }
};

int main()
{
    Pochodna2 obiekt;

    return 0;
}
*/

        // Klasa pochodna dziedziczy hierarchie klas
        //6.29.
/*
#include <iostream>

using namespace std;

class Bazowa1{
protected:
    int x;
public:
    Bazowa1( int i ) { x = i; }     //Definicja konstruktora
    int podajx() { return x; }
};
class Bazowa2{
protected:
    int y;
public:
    Bazowa2( int j ) { y = j; }     // Definicja konstruktora
    int podajy() { return y; }
};
class Pochodna: public Bazowa1, public Bazowa2{
    int z;
public:
    Pochodna( int, int, int );      // Deklaracja konstruktora
    void przedstaw(){
        cout << podajx() << ' ' << podajy() << ' ';
        cout << z << endl;
    }
};
// Konstruktor klasy pochodnej :
Pochodna::Pochodna( int a, int b, int c )
: Bazowa1( a ), Bazowa2( b ) { z = c; }

int main()
{
    Pochodna obiekt( 1, 2, 3 );
    obiekt.przedstaw();
    // podajx() i podajy() - publiczne w klasie Pochodna, zatem
    cout << obiekt.podajx() << ' ' << obiekt.podajy() << endl;

    return 0;
}
*/

        // Identyczne nazwy zmiennych w dziedziczeniu mnogim
        // Identyczne nazwy zmiennych skladowych int n
        // 6.30.
/*
#include <iostream>

using namespace std;

class Bazowa1{
public:
    int n;
    Bazowa1( int i ) { n = i; }
};
class Bazowa2{
public:
    int n;
    Bazowa2( int j ) { n = j; }
};
class Pochodna: public Bazowa1, public Bazowa2{
public:
    int k;
    Pochodna( int a, int b, int c );
};
Pochodna::Pochodna( int a, int b, int c )
: Bazowa1( a ), Bazowa2( b ) { k = c; }

int main()
{
    Pochodna obiekt( 1, 2, 3 );
    //cout << biekt.n << endl; Niejednoznaczne
    cout << obiekt.Bazowa1::n << ' ';
    cout << obiekt.Bazowa2::n << endl;

    return 0;
}
*/


        // 6.31.
        // Przekazywanie klasy bazowej posrednio do klasy pochodnej wiecej niz jeden raz

#include <iostream>

using namespace std;

class Bazowa{
public:
    int a;
    Bazowa( int i ) { a = i; }      // Definicja konstruktora
};
class Pochodna1: public Bazowa{
public:
    int b;
    Pochodna1( int j, int k )       // Definicja konstruktora
    :Bazowa( j ) { b = k; }
};
class Pochodna2: public Bazowa{
public:
    int c;
    Pochodna2( int m, int n )
    :Bazowa( m ) { c = n; }
};
class Pochodna12: public Pochodna1, public Pochodna2 {
public:
    int d;
    Pochodna12( int, int, int, int, int );
};
// Konstruktor klasy pochodna 12:
Pochodna12 ::Pochodna12( int u, int w, int x, int y, int z)
:Pochodna1( u, w ), Pochodna2( x , y ) { d = z; }

int main()
{
    Pochodna12 obiekt( 1, 2, 3, 4, 5 );
    // cout <<obiekt.a << ednl; Niejednoznaczne
    cout << obiekt.Pochodna1::a << ' ' ;
    cout << obiekt.Pochodna1::b << ' ';
    cout << obiekt.Pochodna2::a << endl;

    return 0;
}

