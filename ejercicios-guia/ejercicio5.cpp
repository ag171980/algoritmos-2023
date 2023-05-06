#include <iostream>

using namespace std;
// Consigna: Dados dos valores numéricos, informar cual es el mayor y cual es el menor o,
// si ambos valores son iguales emitir un mensaje.
int main()
{
    int num1, num2;

    cout << "Ingrese 2 numeros para determinar cual es el mayor y menor" << endl;
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << "Los numeros son iguales!!" << endl;
    }
    else
    {
        if (num1 > num2)
        {
            cout << "Mayor: " << num1 << " y Menor: " << num2 << endl;
        }
        else
        {
            cout << "Mayor: " << num2 << " y Menor: " << num1 << endl;
        }
    }
    return 0;
}