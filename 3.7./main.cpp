        // Instrukcja - while
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int WIERSZ = 5;
    const int KOLUMNA = 15;
    int j, i = 1;

    while( i <= WIERSZ ){
        cout << setw( KOLUMNA - i ) << '*';
        j = 1;
        while( j <= 2 * i - 2 ){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
*/


        // Instrukcja - do...while
/*
#include <iostream>

using namespace std;

int main()
{
    char znak;
    cout << " Wprowadz dowolny znak; * oznacza koniec.\n";
    do{
        cout << ": ";
        cin >> znak;
    }while( znak != '*' );

    return 0;
}
*/


        // Instrukcja - for
        // Program Piramida
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int WIERSZ = 5;
    const int KOLUMNA = 15;
    for( int i = 1; i <= WIERSZ; i++ ){
        cout << setw( KOLUMNA - i) << '*';
        for ( int j = 1; j <= 2 * i - 2; j++)
            cout << '*';
        cout << endl;
    }

    return 0;
}


