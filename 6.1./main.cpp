        // Etykieta public
        // 6.1.
/*
#include <iostream>

using namespace std;

class Niewielka{
public:
    int n;
};

int main()
{
    Niewielka nw1, nw2, *wsk;
    nw1.n = 5;
    nw2.n = 10;
    wsk = &nw1;
    cout << nw1.n << endl;
    cout << wsk->n << endl;
    wsk = &nw2;
    cout << (*wsk).n << endl;

    return 0;
}
*/

        // Operowanie funkcji skladowych na zmiennych zewnetrznych w stosunku do definicji klasy
        // 6.2.
/*
#include <iostream>

using namespace std;

class Punkt{
public:
    int x, y;
    void init( int a, int b ){ x = a; y = b; }
    void ustaw( int , int );
};
void Punkt::ustaw( int a, int b ){ x = x + a; y = y + b; }

int main()
{
    Punkt punkt1;
    Punkt *wsk = & punkt1;
    punkt1.init(1,1);
    cout << punkt1.x << endl;
    cout << wsk->y << endl;
    punkt1.ustaw(10,15);
    cout << punkt1.x << endl;
    cout << (*wsk).y << endl;

    return 0;
}
*/


        // Zastosowanie wskaznika this
        // 6.4.
/*
#include <iostream>

using namespace std;

class Punkt{
    int x, y;
public:
    int init( int a, int b ){
        this->x = a;
        this->y = b;
        return x;
    }
    int ustaw( int a, int b ){
        this->x = this->x + a;
        this->y = this->y + b;
        return x;
    }
};
int main()
{
    Punkt punkt1;
    cout << punkt1.init(0,0) << endl;
    cout << punkt1.ustaw(10,15) << endl;

    return 0;
}
*/


        // Skladnia deklaracji, definicji i operacji na zmiennej statycznej
        // 6.6.
        // przepisane poprawnie, a mimo to wychodzi innt wynik niz w przykladzie

/*
#include <iostream>

using namespace std;

class Test{
public:
    int m;
    static int n;   // Tylko deklaracja
};
// Definicja obiektu ststycznego n
int Test::n = 10;

int main()
{
    Test::n = 25;
    cout << "Test::n = " << Test::n << endl;
    Test t1, t2;
    t1.m = 5;
    cout << "t1.m = " << t1.m << endl;
    cout << "t2.m = " << t2.m << endl;
    cout << "t2.n = " << t2.n << endl;

    return 0;
}
*/


        // 6.7.

#include <iostream>

using namespace std;

class Punkt{
    static int x;   // Deklaracja x
public:
    static int init( int );    // Deklaracja init()
};
int Punkt::x;   // Definicja x
int Punkt::init( int a ){
    x = a;
    return x;
}
int main()
{
    cout << Punkt:: init( 10 ) << endl;

    return 0;
}



