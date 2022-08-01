        // Przeciazenie operatora dodawania '+'
        // 6.13.
/*
#include <iostream>

using namespace std;

class Punkt{
    int x, y;
public:
    Punkt() { x = 0; y = 0; }
    Punkt( int a, int b ) { x = a; y = b; }
    int fx() {return x; }
    int fy() { return y; }
    Punkt operator+( Punkt p );
};
Punkt Punkt::operator+( Punkt p ) { return Punkt( x + p.x, y + p.y };

int main()
{
    Punkt punkt1, punkt2, punkt3;
    punkt1 = Punkt(2,2);
    punkt2 = Punkt(3,1);
    punkt3 = punkt1 + punkt2;
    cout << "punkt1.x = " << punkt1.fx() << endl;
    cout << "punkt3.x = " << punkt3.fx() << endl;
    int i = 10, j;
    j = i + 15;     // Predefiniowany '+'
    cout << "j= " << j << endl;


    return 0;
}
*/


        // Operator relacyjny
        //6,14.

#include <iostream>

using namespace std;

class Punkt{
    int x, y;
public:
    Punkt()     { x = 0; y = 0; }
    Punkt( int a, int b )   { x = a; y = b; }
    int fx()    { return x; }
    int fy()    { return y; }
    int operator==( Punkt );
};
int Punkt::operator==(Punkt p){
    if( p.fx() == fx() && p.fy() == fy() )
        return (-1);
    else
        return (0);
}

int main()
{
    Punkt punkt1, punkt2;
    punkt1 = Punkt( 2,2 );
    punkt2 = Punkt(3,1);
    if( punkt1 == punkt2 )
        cout << "Rowne\n";
    else
        cout << "Nierowne\n";
    int i = 5, j = 6, k;
    k = i == j;     //predefiniowany '=='
    cout << "k = " << k << endl;

    return 0;
}


