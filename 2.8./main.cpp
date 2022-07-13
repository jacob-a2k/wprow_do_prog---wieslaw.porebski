    // Operator zasiegu ::

#include <iostream>

using namespace std;

int z; // zmienna globalna typu int inicjowana zerem

int main(void)      // void oznacza, ze do funkcji main nie jest! przekazywny z otoczenai zaden argument
{
    char znak;
    int x,y;    //zmienna lokalne typu int
    double z;   //zmienna lokalna typu double
    z = 1.25816;    //przypisanie do zmiennej lokalnej
    ::z = 12;   //przypisanie do zmiennej globalnej
    /* Teraz przypisanie do zmiennej lokalnej
    wartosci zmiennej globalnej z  */

    y = ::z;                          // przypisanie zmiennej globalnej z do zmiennej lokalnej y
    cout << "Podaj liczbe typu int: ";
    cin >> x;                         //">>" - extraction operator - operator pobrania
    cout << "Wartosc x wynosi: " << x << endl;
    cout << "Wartosc zmiennej lokalnej z wynosi: " << z << endl;
    cout << "Wartosc zmiennej globalnej z wynosi: " << y << endl;
    cout << "Podaj dowolny znak, po czym ENTER: ";
    cin >> znak;

    return 0;
}
