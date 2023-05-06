#include <iostream>

using namespace std;
// Consigna: Dados 10 valores ingresados por el usuario, calcular el promedio.
int main()
{
    float num, suma = 0, promedio;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> num;
        suma = suma + num;
    }

    promedio = suma / 10;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}