        // Dizedziczenie z konstruktorami generowanymi
        //6.23.
/*
#include <iostream>

using namespace std;

class Bazowa{
    int x, z;
public:
    void ustawx( int n ) { x = n; }
    void podajx() { cout << x <<"\n"; }
};
class Pochodna: public Bazowa{
    int y;
public:
    void ustawy( int m ) { y = m; }
    void podajy() { cout << y << "\n"; }
};
int main()
{
    Pochodna ob;
    ob.ustawx( 10 );
    ob.ustawy( 20 );
    ob.podajx();
    ob.podajy();
    cout << sizeof(Bazowa) << endl;
    cout << sizeof(Pochodna) << endl;
    cout << sizeof ob << endl;

    return 0;
}
*/


        // Dziedziczenie z konstruktorami definiowanymi
        // 6.24.
/*
#include <iostream>

using namespace std;

class Bazowa{
public:
    Bazowa() { cout << "Konstruktor klasy bazowej\n"; }
    ~Bazowa() { cout << "Destruktor klasy bazowej\n"; }
};
class Pochodna : public Bazowa{
public:
    Pochodna() { cout << "Konstruktor klasy pochodnej\n"; }
    ~Pochodna() { cout << "Destruktor klasy pochodnej\n"; }
};
int main()
{
    Pochodna ob;

    return 0;
}
*/

        // Przekazywanie parametrow bez zadnych zmian
        // 6.25.
/*
#include <iostream>

using namespace std;

class Bazowa{
    int x, y;
public:
    Bazowa( int i, int j ) { x = i; y = j; }
    void podaj();
};
void Bazowa::podaj(){
    cout << "x = " << x << ", y = " << y << endl;
}
class Pochodna : public Bazowa{
public:
    Pochodna( int m, int n ) : Bazowa(m,n) { }
};
int main()
{
    Bazowa ba(3,4);
    ba.podaj();
    Pochodna po(5,9);
    po.podaj();

    return 0;
}*/



        // 6.26.
        // przekazywanie ze zmianami
/*
#include <iostream>

using namespace std;

class Bazowa{
    int x, y;
public:
    Bazowa( int i, int j ) { x = i; y = j; }
    void podajxy();
};
void Bazowa::podajxy(){
    cout << "x = " << x << ", y = " << y << endl;
}
class Pochodna : public Bazowa{
    int z;
public:
    Pochodna( int k, int m, int n ) : Bazowa( m, n ) { z = k; }
    void podaj(){
        podajxy(); // Bazowa::podajxy()
        cout << "z = " << z << endl;
    }
};
int main()
{
    Pochodna po( 3, 100, 200 );
    po.podaj();

    return 0;
}
*/


        // 6.27.
        // Odslanianie funkcji w klasie pochodnej z pomoca operatora zasiegu - '::'

#include <iostream>

using namespace std;

class Bazowa{
public:
    int x, y;
    Bazowa( int i, int j ) { x = i; y = j; }
    void podaj();
};
void Bazowa::podaj(){
    cout << "Funkcja podaj() klasy Bazowa " << endl;
}
class Pochodna : public Bazowa{
public:
    int x;
    Pochodna( int k, int m, int n ) : Bazowa( m, n ) { x = k; }
    void podaj(){
        Bazowa::podaj();
        cout << "Funkcja popdaj() klasy Pochodna " << endl;
    }
};
int main()
{
    Pochodna po( 3, 100, 200 );
    po.podaj();
    po.Bazowa::podaj();
    cout << "po.x = " << po.x << endl;
    cout << "po.Bazowa::x = " << po.Bazowa ::x << endl;

    return 0;
}


