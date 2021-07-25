// Zgadaywanie liczby 1-100
#include <iostream>
#include <unistd.h>

using namespace std;

int liczba;

int main()
{

    cout<<"Witaj!"<<endl<<"Za chwile za 3 sekundy nastapi zwolnienie blokady"<<endl;
    sleep(3);
    srand(time(NULL));

    for (int i = 0; i < 6; i++)
    {
        liczba = rand() % 49 + 1;
        sleep(1);
        cout<<liczba<<endl;
    }


    return 0;
}
