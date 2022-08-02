        // Szablon klasy
        // 6.18.
/*
#include <iostream>

using namespace std;

template<class Typ>
class Tablica   // Klasa wzorcowa parametryzowana typem elementow tablicy
{
    Typ* tab;   // Wskaz do tablicy
    int rozmiar;
public:
    Tablica( int ); // Deklaracja konstruktora
    ~Tablica() { delete [] tab; }   // Desktruktor
    Typ& operator [] ( int j ) { return tab[j]; }
};
template<class Typ>
Tablica<Typ>::Tablica( int n )  // Konstruktor
{
    tab = new Typ[n];
    rozmiar = n;
};

int main()
{
    // Tablica 10 elementowa. Element typu int
    Tablica<int> x(10);
    for (int i = 0; i < 10; ++i)
        x[i] = i;
    for( int i = 0; i < 10; ++i)
        cout << x[i] << ' ';
    cout << endl;
    // Tablica 5-elementowa. Elementy typu double
    Tablica<double> y(5);
    // Tablica 6-elementowa. Elementy typu char
    Tablica<char> z(6);

    return 0;
}
*/


        // Szablon funkcji
        // 6.19.
/*
#include <iostream>

using namespace std;

// Szablon
template <class T>
T max( T a, T b ) { return a > b ? a : b; }

int main()
{
    int i = 2, j = max( i, 0 );
    cout << "Max integer: " << j << endl;
    double db = 1.7, dc = max(db, 3.14);
    cout << "Max double: " << dc << endl;
    char z1 = 'A', z2 = max(z1, 'B');
    cout << "Max char: " << z2 << endl;

    return 0;
}
*/


        // Klasy zagniezdzone
        // 6.20.

#include <iostream>

using namespace std;

class Otacza{
    int x;
public:
    class Zawarta{
        int y;
    public:
        Zawarta( int i) { y = i; }  // Konstruktor
        int podajny() { return y; }
    };
    Otacza( int j) { x = j; }   // Konstruktor
    int podajx() { return x; }
};

int main()
{
    Otacza zewn(7);
    int m,n;
    m = zewn.podajx();
    cout << m << endl;
    Otacza::Zawarta wewn(9);
    n = wewn.podajny();
    cout << n << endl;

    return 0;
}
