        // Instrukcja - if
/*
#include <iostream>

using namespace std;

int main()
{k
    int a, b ,c = 0;
    cout << "Wprowadz dwie liczby calkowite:" << endl;
    cin >> a >> b;

    if( a * b > 0)
        if( a > b)
        c = a;
        else
            c = b;
    cout << "Pierwszy test daje c = " << c << endl;
    if( a * b > 0){
        if( a > b)
            c = a;
    }
    else
        c = b;
    cout << "Drugi test daje c = " << c << endl;

    return 0;
}
*/

        // Instukcja - switch

#include <iostream>

using namespace std;

int main()
{
    char droga;
    int czas;
    cout << "Wprowadz litere A, B, lub C : ";
    cin >> droga;
    cout << endl;
    if(( droga == 'A') || (droga == 'B') || (droga == 'C'))
    switch( droga ){
        case 'A': case 'B': czas = 3;
        cout << czas << endl;
        break;
        case 'C':
            czas = 4;
            cout << czas << endl;
            break;
        default:
            droga = 'D';
            czas = 5;
            cout << czas << endl;
    }
    else
        cout << "Zostan w domu\n";

    return 0;
}




