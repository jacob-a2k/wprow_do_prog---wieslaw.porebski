        // Funkcja przyjacielska ustaw()
        // 6.15.
/*
#include <iostream>

using namespace std;

class Punkt{
    int x, y;
public:
    Punkt(int, int);
    int fx() { return x; }
    int fy() { return y; }
    friend void ustaw( Punkt&, int, int );
};
Punkt::Punkt ( int a, int b ) { x = a; y = b; }
void ustaw(Punkt& p, int c, int d) { p.x += c; p.y += d; }

int main()
{
    Punkt punkt1( 3, 4 );
    cout << "punkt1.x przed ustaw(): " << punkt1.fx() << endl;
    ustaw(punkt1, 5, 5);
    cout << "punkt1.x po ustaw(): " << punkt1.fx() << endl;

    return 0;
}
*/


        // Deklaracja funkcji przyjacielskiej klasy
        // 6.16.
        // Przyjacielski operator '<<'
/*
#include <iostream>

using namespace std;

class Punkt{
    int x, y;
public:
    Punkt( int, int );
    friend ostream& operator<<( ostream&, Punkt&);
};
Punkt::Punkt(int a, int b) { x = a; y = b; }
ostream& operator<<( ostream& os, Punkt& ob){
    os << ob.x << ", " << ob.y << "\n";
    return os;
}
int main()
{
    Punkt punkt1(3,4), punkt2(10,15);
    cout << punkt1 << punkt2;

    return 0;
}
*/


        // Klasy przyjacielskie
        // Zapis calej klasy Pierwsza jako przyjacielska wzgledem klasy Druga

class Pierwsza{
    //...
};
class Druga{
    int x, y;
public:
    Druga( int i = 0, int j = 0) { x = i; y = j; }
    friend class Pierwsza; // Nastepuje zadeklarowanie klasy jako przyjacielskiej
};



