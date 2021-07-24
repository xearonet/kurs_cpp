// Zgadaywanie liczby 1-100
#include <iostream>

using namespace std;

int liczba, strzal, proba=0;

int main()
{

    cout<<"Witaj!"<<endl<<"Wymyslilem liczbe z przedzialu 1-100"<<endl;
    srand(time(NULL));
    liczba = rand() % 100;
    // cout<<liczba<<endl;

    while (strzal!=liczba)
    {
        proba++;
        cout<<"Zgadnij liczbe (proba: "<<proba<<"): ";
        cin>>strzal;

        if (strzal==liczba)
            cout<<"Udalo sie! Wygrywasz w "<<proba<<" probie!"<<endl;
        else if (strzal<liczba)
            cout<<"To za malo!"<<endl;
        else if (strzal>liczba)
            cout<<"To za duzo!"<<endl;

    }
    

    return 0;
}
