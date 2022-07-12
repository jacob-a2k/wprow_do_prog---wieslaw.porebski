    // Komentarze, literaly znakowe i tekstowe

#include <iostream> // Dyrektywa preprocesora

using namespace std;

int main()
{
    char c;
    c = '\101'; // 101 jest kodem oktalnym znaku 'A' ( ASCII )
    char c1 = '\11'; // 11 jest kodem oktalnym znaku tabulacji poziomej (  ASCII )
    char c2 = '\x42'; // 42 jest kodem heksalnym znaku 'B' ( ASCII )
    char c3 = '\''; // Nadanie zmiennej c3 wartosci ' (apostrof)
    cout << c << c1 << c2 << '\n'; // Wydruk wartosci zmiennych c, c1, c2
    cout << "abcde12345" << '\n'; // Wydruk lancucha znakow "abcde12345"
    cout << c3 << endl; // Wydruk wartosci zmiennej c3
    cout << int(c2); // Wydruk kodu ASCII znaku 'B'

    return 0;
}
