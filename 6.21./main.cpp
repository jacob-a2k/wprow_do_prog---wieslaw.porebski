        // Funkcje skladowe Struktury są z góry publiczne
        // 6.21.
/*
#include <iostream>

using namespace std;

struct Otacza{
    int x;
    struct Zawarta{
        int y;
        Zawarta( int i ) { y = i; }     // Konstuktor
    };
    Otacza( int j ) { x = j; }      // Konstruktor
};

int main()
{
    Otacza zewn( 7 );
    int m, n;
    cout << zewn.x << endl;
    Otacza::Zawarta wewn( 9 );
    cout << wewn.y << endl;

    return 0;
}
*/


        // Wykorzystanie uni do wyswietlenia ukladu bitow w kolejnych bajtach liczby 255
        // 6.22.

#include <iostream>

using namespace std;

union bity{
    bity( int n );  // Deklaracja konstruktora
    void podajbity();
    int d;
    unsigned char z[sizeof(int)];
};
bity::bity(int n) {d = n;}  // Definicja konstruktora
void bity::podajbity(){
    int i, j;
    for( j = sizeof(int)-1; j >= 0; j-- ){
        cout <<"Wzorzec bitowy w bajcie " << j << ": ";
        for( i = 128; i ; i >>= 1 )
            if( i & z[j])
                cout << "1";
            else
                cout << "0";
        cout << "\n";
    }
}
int main()
{
    bity obiekt(255);
    obiekt.podajbity();

    return 0;
}

