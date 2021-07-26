// Obliczanie sredniej 5 ocen
#include <iostream>
using namespace std;

float oceny[5], suma=0, srednia;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout<<"Podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        suma += oceny[i];
    }
    srednia = suma / 5;
    cout<<"Srednia to: "<<srednia<<endl;


    return 0;
}
