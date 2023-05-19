#include <iostream>

using namespace std;
// Consigna:
int main()
{
    int num, mayor, menor;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;
        if (i == 0)
        {
            mayor = num;
            menor = num;
        }
        if (num > mayor)
        {
            mayor = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
    return 0;
}