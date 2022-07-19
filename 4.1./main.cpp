        // Wskazniki i adresy
/*
#include <iostream>

using namespace std;

int main()
{
    int i, j = 10;      //
    int *p;
    p = &i;
    *p = 3;
    j = *p + 25;
    p = &j;
    i = j;
    j = i;
    cout << "*p = " << *p << endl;
    cout << "i = " << i << endl;

    return 0;
}
*/

        // Dynamiczna alokacja pamieci
    // Wskazniki i zmienne dynamiczne
/*
#include <iostream>

using namespace std;

int main()
{
    int *p ; // p jest wskaznikiem do int
    p = new int;
    delete p;
    p = new int ( 9 ); // *p == 9;
    delete p;
    cout << "*p = " << *p << endl;


    return 0;
}
*/

        // Przyklad 4.3.
/*
#include <iostream>

using namespace std;

int main()
{
    int *p;
    if(( p = new int ) == 0 )   // alternatywny zapis: if( !( p = new int) )
    {
        cout << "Allocation error\n";
    }
    *p = 9;
    delete p;

    return 0;
}
*/


    // Przyklad 4.4.
/*
#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    if( p == 0)     // alternatywny zapis: if( !p )
    {
        cout << "Allocation error\n";
        return 1;
    }
    *p = 9;
    delete p;

    return 0;
}
*/

    // Przyklad 4.5.
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int *p = new int;
    if( !p ){
        cout << "Allocation error\n";
        abort();    // lub exit(-1)
    }
    *p = 9;
    delete p;

    return 0;cv
}
*/

    // Przyklad 4.6.

#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
    int *p = new int( 8 );
    assert ( p != 0);
    cout << "*p= " << *p << endl;
    delete p;

    return 0;
}






