        // Sortowanie - jeden plik
        // Pod DOS - SORT.CPP, pod Unix - sort.c
        // Kod zrodlowy niestrukturalny - bez wydzielonych funkcji
/*
#include <iostream>

using namespace std;

const int rozmiar = 5;
double tab[ rozmiar ];

int main()
{
    // Czytanie
    cout << "Podaj " << rozmiar << " liczb typu double:\n";
    for( int i = 0; i < rozmiar; i++ )
        cin >> tab[ i ];
    cout << " Tablica przed sortowaniem: \n";
    // Pisanie
    for( int i = 0; i < rozmiar; i++ )
        cout << "tab[ " << i << " ] : " << tab[ i ] << endl;
    // Sortowanie
    int licznik;
    double pomoc;
    do{
        licznik = 0;
        for( int i = 0; i < rozmiar - 1; i++ ){
            if( tab[ i ] > tab[ i + 1 ] ){
                pomoc = tab[ i ];
                tab[ i ] = tab[ i +1 ];
                tab[ i +1 ] = pomoc;
                ++licznik;
            }
        }
    }while( licznik );
    cout << "Tablica po sortowaniu: \n";
    // Ponowne pisanie
    for(  int i = 0; i < rozmiar; i++)
        cout << "tab[ " << i << " ] : " << tab[ i ] << endl;

    return 0;
}
*/


        //Sortowanie - jeden plik, wydzielone funkcje
        // Pod DOS - SORT1.CPP, pod Unix - sort1.c
        // 5.17.

#include <iostream>

using namespace std;

void czytaj( double *tc, int rc );
void pisz( double *tp, int rp );
void sortuj( double *ts, int rs );
const int rozmiar = 5;
double tab[rozmiar];

int main()
{
    cout << "Podaj  " << rozmiar << " liczb wypu double:\n";
    czytaj( tab, rozmiar );
    pisz( tab, rozmiar );
    sortuj( tab, rozmiar );
    pisz( tab, rozmiar);

    return 0;
}
void czytaj( double *tc, int rc ){
    for( int i = 0; i < rc; i ++)
        cin >> tc[i];
    cout << endl;
    cout << "Tablica przed sortowaniem: " << endl;
}

void pisz( double *tp, int rp ){
    for( int i = 0; i < rp; i++ )
        cout << "tp[ " << i << " ] = " << tp[i] << endl;
}

void sortuj( double *ts, int rs ){
    int licznik, i;
    double pomoc;
    do{
        licznik = 0;
        for( int i = 0; i < rs - 1; i++){
            if( ts[i] > ts[i+1] ){
                pomoc = ts[i];
                ts[i] = ts[i +1];
                ts[i + 1] = pomoc;
                ++licznik;
            }
        }
    }while( licznik );
    cout << "Tablica po sortowaniu: \n";
}

