#include <iostream>

using namespace std;
// Consigna: Dado un lote de valores ingresados por el usuario (que finaliza el ingreso con un valor negativo)
// calcular y mostrar la suma y el promedio.
int main()
{
    float num, suma = 0, promedio = 0;
    int contador = 0;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    while (num >= 0)
    {
        suma = suma + num;
        contador++;

        cout << "Ingrese un numero: " << endl;
        cin >> num;
    }
    if (contador != 0)
    {
        promedio = suma / contador;
    }
    cout << "La suma de los numeros ingresados es: " << suma << endl;
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    return 0;
}