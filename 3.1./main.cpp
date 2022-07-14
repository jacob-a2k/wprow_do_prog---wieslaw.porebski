    // Instrukcja przypisania

#include <iostream>

using namespace std;

int main()
{
    int a;      //instrukcja deklaracji
    a = b;      //instrukcja przypisania
    a = b + c;  //instrukcja przypisania
    a = ( b + c) / d; // itd.
    a = e > f;
    a = ( e > f && c < d) + 1;
    a = a << 3;

    //skorzystanie z cechy przypisania moze dac efekt niecztelnosci programu
    a = ( b = c + d) / ( e = f + g);
    //ponizsza sekwencja jest bardziej elegancka i czytelna
    b = c + d;
    e = f + g;
    a = b / e;


    return 0;
}
