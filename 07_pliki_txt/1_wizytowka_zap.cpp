// Generuje wizytowke w pliku na dysku
#include <iostream>
#include <fstream>
using namespace std;

string imie, nazwisko;
int telefon;

int main()
{

    cout<<"Podaj imie: "; cin>>imie;
    cout<<"Podaj nazwisko: "; cin>>nazwisko;
    cout<<"Podaj nr telefonu: "; cin>>telefon;

    fstream plik;
    plik.open("wizytowka.txt",ios::out | ios::app);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<telefon<<endl;

    plik.close();


    return 0;
}
