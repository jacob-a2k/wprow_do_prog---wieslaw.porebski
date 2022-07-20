        // Dynamiczna alokacja tablicy
        // Znowu cos nie trybi - ale ksiazka z ktorej sie ucze jest przestarzala
#include <iostream>

using namespace std;

int main()
{
    int *pa;
    pa = new int[ 5 ];
    if(!pa)
        cout << "Allocation error\n";
        return 1;
    for( int i = 0; i < 5; i++)
        pa[i] = i;
    for( int j = 0; j < 5; j++){
        cout << "pa[ " << j << " ]: ";
        cout << pa[j] << endl;
    }
    delete []pa;

    return 0;
}
