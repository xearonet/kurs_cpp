#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat: ";
    cin >> wiek;

    if (wiek<18)
    {
        cout << "Jestes niepelnoletni" << endl;
        cout << "Nie mozesz kandydowac na prezydenta" << endl;
    }
    else if ((wiek>=18) && (wiek<35))
    {
        cout << "Jestes pelnoletni" << endl;
        cout << "Nie mozesz kandydowac na prezydenta" << endl;
    }
    else
    {
        cout << "Jestes pelnoletni" << endl;
        cout << "Mozesz kandydowac na prezydenta" << endl;
    }

    return 0;
}
