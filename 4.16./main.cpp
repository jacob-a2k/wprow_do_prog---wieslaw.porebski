        // Przyklad - Struktury
/*
#include <iostream>

using namespace std;

struct skrypt{
    char *tytul;
    char *autor;
    long cena;
    int naklad;
    char status;
};

int main()
{
    skrypt stary, nowy;
    skrypt *wsk;
    wsk  = &nowy;
    stary.autor = "Jan Kowalski";
    stary.cena = 120000;
    wsk -> naklad = 5000;
    wsk -> status = 'A';
    cout << "stary.autor = " << stary.autor << '\n';
    cout << "stary.cena = " << stary.cena << '\n';
    cout << "wsk -> naklad = " << wsk -> naklad << '\n';
    cout << "wsk -> status = " << wsk -> status << '\n';
    cout << "(*wsk).status = " << (*wsk).status << '\n';
    return 0;
}
*/


        // Przyklad 4.17. - Struktury zagniezdzone
/*
#include <iostream>

using namespace std;

struct A{
    int i;
    char znak;
};
struct B{
    int j;
    A aa;
    double d;
};

int main()
{
    B s1, *s2 = &s1;
    s1.j = 4;
    s1.aa.i = 5;
    s2->d = 1.254;
    (s2->aa).znak = 'A';
    cout << (s2->aa).znak << endl;

    return 0;
}
*/

        // Unie - przyklad 4.18.
/*
#include <iostream>

using namespace std;

union test{
    long i;
    double d;
    char znak;
};
int main()
{
    test uu;
    test *uwsk;
    uwsk = &uu;
    uu.d = 14.85;
    cout << uu.d << endl;
    cout << uu.i << endl;
    uu.i = 123456789;
    cout << uu.i << endl;
    cout << uu.d << endl;
    uwsk->i = 79;
    cout << uu.i << endl;

    return 0;
}
*/

        // Pominiecie nazwy po slowie kluczowym - 'union'
/*
#include <iostream>

using namespace std;

int main()
{
    union{ int i; char *p;} uu, *uwsk = &uu;
    uu.i = 14;
    cout << uu.i << endl;
    uwsk->p = "abcd";
    cout << uwsk->p << endl;

    return 0;
}
*/


        // Unia bez nazwy i deklaracji zmiennych

#include <iostream>

using namespace std;

int main()
{
    union{ int i; char *p; };
    i = 14;
    cout << i << endl;
    p = "abcd";
    cout << p << endl;

    return 0;
}


