        // Wirtualne klasy bazowe
        // 6.32.
/*
#include <iostream>

using namespace std;

class Bazowa{
public:
    int a;
};
class Pochodna1: virtual public Bazowa{
public:
    int b;
};
class Pochodna2: virtual public Bazowa{
public:
    int c;
};
class Pochodna12: public Pochodna1, public Pochodna2{
public:
    int iloczyn() { return a*b*c;}
};

int main()
{
    Pochodna12 obiekt;
    obiekt.a = 4;
    obiekt.b = 5;
    obiekt.c = 6;
    cout << "Iloczyn wynosi: " << obiekt.iloczyn() << endl;

    return 0;
}
*/


        // Wywolanie konstruktorow domyslnych
        // 6.33.

#include <iostream>

using namespace std;

class Bazowa{
public:
    int a;
    Bazowa( int i = 0 ) { a = i; }
};
class Pochodna1: virtual public Bazowa{
public:
    Pochodna1() : Bazowa( 100 ) {}
};
class Pochodna2: virtual public Bazowa{
public:
    Pochodna2() : Bazowa( 200 ) {}
};
class DwieBazy: public Pochodna1, public Pochodna2{
public:
    DwieBazy() : Bazowa( 300 ) { }
};

int main()
{
    Pochodna1 oiekt1;
    Pochodna2 obiekt2;
    DwieBazy obiekt;
    Bazowa* wskb;
    wskb = &obiekt;
    cout << wskb->a << endl;

    return 0;
}
