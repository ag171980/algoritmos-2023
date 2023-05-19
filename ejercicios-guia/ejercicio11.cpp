#include <iostream>

using namespace std;
// Consigna:
int main()
{
    float num, cantPositivos = 0, cantNumeros = 5;
    float sumaNegativos = 0;

    for (int i = 0; i < cantNumeros; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;

        if (num <= -10)
        {
            sumaNegativos += num;
        }
        if (num >= 100)
        {
            cantPositivos++;
        }
    }

    cout << "Promedio de positivos: " << (cantPositivos / cantNumeros) * 100 << "%" << endl;
    cout << "Suma de los negativos: " << sumaNegativos << endl;
    return 0;
}