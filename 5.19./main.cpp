        // Wywolanie wskaznika
/*
#include <iostream>

using namespace std;


void ff();
void (*wskv)();

int main()
{
   cout << "Wywolanie bezposrednie ff: \n";
   ff();
   cout << "Wywolanie posrednie ff: \n";
   wskv = &ff;
   (*wskv)();

    return 0;
}
void ff(){
    cout << "To jest funkcja ff" << endl;
}
*/


        // 5.20.
/*
#include <iostream>

using namespace std;

int abs( int );
int (*wski)( int );

int main()
{
    cout << "Wywolanie bezposrednie abs:\n";
    cout << abs(5) << endl;
    wski = &abs;
    cout << "Wywolanie posrednie abs:\n";
    cout << wski(-10) << endl;

    return 0;
}
int abs( int a ){
    if( a > 0 )
        return a;
    else
        return -a;
}
*/


        // 5.21.
        // Przypisanie 2 funkcji bez operatora wywolanie ()
/*
#include <iostream>

using namespace std;

void ff(char*);
void (*wskc)(char*);

int main()
{
    ff("Hello!");
    wskc = ff;
    wskc("Goodbye!");

    return 0;
}
void ff(char*str){
    cout << str << endl;
}
*/


        // 5.22.
        // Specyfikator 'typedef'

#include <iostream>

using namespace std;

extern int min( int*, int);
typedef int( *wski)( int*, int);
const int rozmiar = 5;
int tab[rozmiar] = {2, 5, 9, 4, 6 };

int main()
{
    wski wsk1, wsk2;
    cout << "Wywolanie bezposrednie min: " << min( tab, rozmiar) << endl;
    wsk1 = min;
    wsk2 = wsk1;
    cout << "Wywolanie posrednie min: " << wsk2( tab, rozmiar ) << endl;

    return 0;
}
extern int min(int *tab, int r){
    int pomoc = tab[0];
    for( int i = 1; i < r; ++i)
        if( pomoc > tab[i] )
        pomoc = tab[i];
    return pomoc;
}
