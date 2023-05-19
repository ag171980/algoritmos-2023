#include <iostream>

using namespace std;
// Consigna:
int main()
{
    int edad;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    if (edad <= 12)
    {
        cout << "Menor" << endl;
    }
    else if (edad >= 13 && edad <= 18)
    {
        cout << "Cadete" << endl;
    }
    else if (edad > 18 && edad <= 26)
    {
        cout << "Juvenil" << endl;
    }
    else
    {
        cout << "Mayor" << endl;
    }

    return 0;
}
