#include <iostream>

using namespace std;
// Consigna:
int main()
{
    int num, mayor, menor;
    int posMayor, posMenor;

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
            posMayor = i;
        }
        if (num < menor)
        {
            menor = num;
            posMenor = i;
        }
    }

    cout << "El mayor es: " << mayor << " y fue ingresado en la posicion: " << posMayor + 1 << endl;
    cout << "El menor es: " << menor << " y fue ingresado en la posicion: " << posMenor + 1 << endl;

    return 0;
}