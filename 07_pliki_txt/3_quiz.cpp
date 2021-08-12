// Quiz - Odczytuje pytania z pliku na dysku
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty;

int main()
{

    string linia;
    int nr_linii=1;
    int nr_pytania=0;

    fstream plik;
    plik.open("quiz.txt",ios::in);

    if (plik.good()==false)
    {
        cout<<"Plik nie istnieje!";
        exit(1);
    }
    
    while (getline(plik,linia))
    {
        switch (nr_linii)
        {
        case 1: temat = linia; break;
        case 2: nick = linia; break;
        case 3: tresc[nr_pytania] = linia; break;
        case 4: odpA[nr_pytania] = linia; break;
        case 5: odpB[nr_pytania] = linia; break;
        case 6: odpC[nr_pytania] = linia; break;
        case 7: odpD[nr_pytania] = linia; break;
        case 8: poprawna[nr_pytania] = linia; break;
        }
        if (nr_linii==8) {nr_linii=2; nr_pytania++;}
        nr_linii++;
    }

    plik.close();

    cout<<"Temat: "<<temat<<endl;
    cout<<"Autor: "<<nick<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<endl<<tresc[i]<<endl;
        cout<<"a) "<<odpA[i]<<endl;
        cout<<"b) "<<odpB[i]<<endl;
        cout<<"c) "<<odpC[i]<<endl;
        cout<<"d) "<<odpD[i]<<endl;

        cout<<"Twoja odpowiedz: ";
        cin>>odpowiedz;
        
        transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

        if (odpowiedz==poprawna[i])
        {
            cout<<"Brawo! Zdobywasz punkt! "<<endl;
            punkty++;
        } else
        {
            cout<<"Zle! Poprawna odpowiedz: "<<poprawna[i]<<endl;
        }
    
    }

    cout<<endl<<"Koniec quizu!"<<endl<<"Zdobyte punkty: "<<punkty<<endl;

    return 0;
}
