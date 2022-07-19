        // Tablica liczb typu int
/*
#include <iostream>

using namespace std;

int main()
{
    int i;
    const int INDEKS = 10;
    int x[ INDEKS ];     // x[INDEKS] - tablica 10 liczb calkowitych:x[0], x[1], ..., x[9]
    for( i = 0; i < INDEKS; i++ ){
        x[i] = i;
        cout << "x[ " << i << " ] " << x[i] << endl;
    }
    /* i++ : zwiekszenie i o 1 po uzyciu;
       ++i : zwiekszenie i o 1 przed uzyciem
       i-- : zmniejszenie i o 1 po uzyciu
       --i : zmniejszenie i o 1 przed uzyciem

    return 0;
}
*/

        // Tablica znakow
/*
#include <iostream>

using namespace std;

int main()
{
    const int BUF = 10;
    char a[BUF] = {'A','B','C','D','E','F','G','H','I','J'};   // a[BUF] - tablica 10 znakow: a[0], a[1], ..., a[9]
    // Dopuszczalne jest przypisanie: char a[BUFF] = "ABCDEFGHIJ"; - u mine nie dziala ;(
    cout << a << endl;

    return 0;
}
*/


        // Tablica znakow instrukcja for

#include <iostream>

using namespace std;

int main()
{
    const int BUF = 10;
    char znak;
    char a[BUF] = {'A','B','C','D','E','F','G','H','I','J'};
    for( znak = 'A'; znak <= 'J'; znak++ )
        cout << a[znak - 65] << endl;

    return 0;
}
