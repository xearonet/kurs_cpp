#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Witaj w Banku" << endl << endl;
    cout << "Login: ";
    cin >> login;
    cout << "Haslo: ";
    cin >> haslo;

    if ((login=="admin") && (haslo=="pass"))
    {
        cout << "Poprawne logowanie" << endl;
    }
    else
    {
        cout << "Blad logowania" << endl;
    }

    return 0;
}
