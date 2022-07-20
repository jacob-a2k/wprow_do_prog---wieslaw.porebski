        // Kopiowanie ze "start" do "cel"
        // Wersja ze zmiennymi indeksowanymi
        // NIE DZIALA U MNIE - PROGRAM DOBRZE PRZEPISANY
/*
#include <iostream>

using namespace std;

int main()
{
    char *start = "ABCD";
    char *cel = "EFGH";
    int i = 0;
    while( (cel[i] = start[i]) != '\0')
        i++;
    cout << "Lancuch to: " << cel << endl;

    return 0;
}
*/

        // Kopiowanie ze "start" do "cel"
        // Wersja ze wskaznikami
        // ROWNIEZ NIE DZIALA
/*
#include <iostream>

using namespace std;

int main()
{
    char *start = "ABCD";
    char *cel = "EFGH";
    char *pomoc = cel;
    while(( *cel = *start) != '\0'){
        cel++;
        start++;
    }
    cout << " Lancuch pomoc: " << pomoc << endl;

    return 0;
}
*/


        // Kopiowanie ze "start" do "cel"
        // Wersja ze wskaznikami

#include <iostream>

using namespace std;

int main()
{
    char *start = "ABCD";
    char *cel = "EFGH";
    char *pomoc = cel;
    while( *cel++ = *start++);

    cout << "Lancuch pomoc: " << pomoc << endl;

    return 0;
}
