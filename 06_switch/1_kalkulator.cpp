// Obliczanie sredniej 5 ocen
#include <iostream>
using namespace std;

float x,y;
char wybor;

int main()
{
    while (true)
    {
        cout<<"Podaj 1 liczbe: ";
        cin>>x;
        cout<<"Podaj 2 liczbe: ";
        cin>>y;

        cout<<endl;
        cout<<"MENU GLOWNE"<<endl;
        cout<<"-----------"<<endl;
        cout<<"1. Dodawanie"<<endl;
        cout<<"2. Odejmowanie"<<endl;
        cout<<"3. Mnozenie"<<endl;
        cout<<"4. Dzielenie"<<endl;
        cout<<"5. Zakoncz"<<endl;

        cout<<"Wybierz: "<<endl;
        cin>>wybor;

        switch (wybor)
        {
        case '1':
            cout<<"Suma = "<<x+y<<endl;
            break;
        case '2':
            cout<<"Roznica = "<<x-y<<endl;
            break;
        case '3':
            cout<<"Iloczyn = "<<x*y<<endl;
            break;
        case '4':
            if (y==0) cout<<"Nie dziel przez zero";
            else cout<<"Iloraz = "<<x/y<<endl;
            break;
        case '5':
            exit(0);
            break;
        default:
            cout<<"Nie ma takiej opcji"<<endl;
            break;
        }
        getchar();getchar();
        system("clear");
    }

    return 0;
}
