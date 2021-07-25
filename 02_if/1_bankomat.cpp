#include <iostream>

using namespace std;

string pin;

int main()
{
    cout << "Witaj w Banku";
    cout << "Podaj PIN: ";
    cin >> pin;

    if (pin=="8899")
    {
        cout << "Poprawny PIN" << endl;
    }
    else
    {
        cout << "Niepoprawny PIN" << endl;
    }

    return 0;
}
