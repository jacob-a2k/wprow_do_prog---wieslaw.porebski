        // 6.9.
        // Rejestrowanie istniejacych w danej chwili obiektow
/*
#include <iostream>

using namespace std;

class Status{
    static int licznik;     // deklaracja
public:
    Status() { licznik++; }
    ~Status() { licznik--; }
    int odczyt() { return licznik; }
};
int Status::licznik = 0;    // definicja

int main()
{
    Status ob1, ob2, ob3;
    cout << "Mamy " << ob1.odczyt() << " obiekty\n";
    Status *wsk;
    if( !wsk ){
        cout << "Nie udana alokacja\n";
        return 1;
    }
    cout << "Mamy " << ob1.odczyt() << " obiekty po alokacji\n";

    delete wsk;     // skasuj obiekt

    cout << " Mamy " << ob1.odczyt() << " obiekty po destrukcji\n";

    return 0;
}
*/

        // 6.10.
        // Przeciazanie kontruktorow
/*
#include <iostream>

using namespace std;

class Punkt{
public:
    int x, y;
    Punkt() {}
    Punkt( int a, int b ){ x = a; y = b; }
};
int main()
{
    Punkt punkt1( 3,4 );
    cout << punkt1.x << endl;
    Punkt punkt2;
    cout << punkt2.x << endl;

    return 0;
}
*/

        // 6.11.
        // Konstruktory z rgumentami domyslnymi
/*
#include <iostream>

using namespace std;

class Punkt{
public:
    int x,y;
    Punkt(int = 0, int = 0);
};
Punkt::Punkt( int a, int b ){
    x = a; y = b;
    if( a == 0 && b == 0 )
        cout << "Obiekt bez inicjowania...\n";
    else
        cout << "Obiekt z inicjowaniem...\n";
}
int main()
{
    Punkt punkt1(3,4);
    cout << punkt1.x << endl;
    Punkt punkt2;
    cout << punkt2.x << endl;

    return 0;
}
*/

         // 6.12.
         // Konsruktor bezargumentowy

#include <iostream>

using namespace std;

class Punkt{
    int x, y;
public:
    Punkt()                 { x = 0; y = 0; }
    Punkt( int a, int b )   { x = a; y = b; }
    int fx()                { return x; }
    int fy()                { return y; }
};
int main()
{
    Punkt punkt1;
    cout << "punkt1.x = " << punkt1.fx() << "\n";
    Punkt punkt2( 3,2 );
    cout << "punkt2.x = " << punkt2.fx() << "\n";
    Punkt *wsk = new Punkt(2,2);
    if( !wsk )
        return 1;
    cout << "*wsk->fx() = " << wsk->fx() << "\n";
    if( wsk ){
        delete wsk;
        wsk = NULL;
    }

    return 0;
}
