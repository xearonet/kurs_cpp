#include <iostream>

using namespace std;

int populacja=1; int godzin=0;

int main()
{
    while (populacja<=1000000000)
    {
        godzin++;
        populacja = populacja * 2;

        cout<<"minelo h: "<<godzin<<"\tpopulacja: "<<populacja<<endl;
    }
    

    return 0;
}
