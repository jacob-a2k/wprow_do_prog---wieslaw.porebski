
        // Funkcje wirtualne - slowo kluczowe 'virtual'
        // 6.35.
/*
#include <iostream>

using namespace std;

class Bazowa{
public:
    int x;
    Bazowa( int i ) { x = i; }
    virtual void podaj();
};
void Bazowa::podaj() { cout << "x = " << x << endl; }

int main()
{
    Bazowa *wsk;
    Bazowa obiekt( 10 );
    wsk = &obiekt;
    wsk->podaj();

    return 0;
}
*/

        // Drugi przyklad funkcji wirtualnej
        // 6.36.
/*
#include <iostream>

 using namespace std;

 class Bazowa{
 public:
    int x;
    Bazowa( int i ) { x = i; }
    virtual void podaj();
};
void Bazowa::podaj() { cout << "x = " << x << endl; }

class Pochodna1: public Bazowa{
public:
    Pochodna1( int x ): Bazowa( x ) {}
    void podaj();
};
void Pochodna1::podaj() { cout << "x + x = " << x + x << endl; }

class Pochodna2: public Bazowa{
public:
    Pochodna2( int x ): Bazowa( x ) {}
};

int main()
{
    Bazowa *wsk;
    Bazowa obiekt( 10 );
    Pochodna1 obiekt1( 20 );
    Pochodna2 obiekt2( 30 );
    wsk = &obiekt;
    wsk->podaj();
    wsk = &obiekt1;
    wsk->podaj();
    wsk = &obiekt2;
    wsk->podaj();

    return 0;
}
*/


        // Konstrukcja i wartosciowanie wyrazen arytmetycznych
        // Blad kompilacji ponizszego programu
        // 6.37.

#include <iostream>

using namespace std;

class Wrn{
public:
    virtual int wart() = 0;
};
class Constant: public Wrn{
    int x;
public:
    Constant( int k ) { x = k; }
    int wart() { return x;}
};

class Suma: public Wrn{
    Wrn* lewy;
    Wrn* prawy;
public:
    Suma(Wrn* 1, Wrn* p ) { lewy = 1; prawy = p; }
    int wart() { return lewy->wart() + prawy->wart(); }
};

class Odejm: public Wrn{
    Wrn* lewy;
    Wrn* prawy;
public:
    Odejm(Wrn* 1, Wrn* p ) { lewy = 1; prawy = p; }
    int wart() { return lewy->wart() + prawy->wart(); }
};

class Iloczyn: public Wrn{
    Wrn* lewy;
    Wrn* prawy;
public:
    Iloczyn(Wrn* 1, Wrn* p ) { lewy = 1; prawy = p; }
    int wart() { return lewy->wart() + prawy->wart(); }
};

class Iloraz: public Wrn{
    Wrn* lewy;
    Wrn* prawy;
public:
    Iloraz(Wrn* 1, Wrn* p ) { lewy = 1; prawy = p; }
    int wart() { return lewy->wart() + prawy->wart(); }
};

int main()
{
    Constant a(5);
    Constant b(10);
    Constant c(15);
    Constant d(20);
    Iloczyn  e(&a, &b);
    Iloczyn  f(&c, &d);
    Suma     g(&e, &f);
    Iloraz   h(&f, &e);
    cout << "a*b + c*d = " << g.wart() << endl;
    cout << "c*d / a*b = " << h.wart() << endl;

    return 0;
}
