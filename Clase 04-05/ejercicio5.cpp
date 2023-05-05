#include <iostream>

using namespace std;

// Estrategia
// 1. Pedir un valor
// 2. Leer
// 3. Mientras ese valor sea mayor o igual a 0; sumar ese valor y pedir uno nuevo
// 4. Mostramos resultado
int main()
{
    int numero, suma = 0;
    // 1. Pedir un valor
    cout << "Ingrese un valor o ingrese un numero negativo para terminar" << endl;
    // 2. Leer
    cin >> numero;
    // 3. Mientras ese valor sea mayor o igual a 0; sumar ese valor y pedir uno nuevo
    while (numero >= 0)
    {
        suma = suma + numero;
        cout << "Ingrese un valor o  ingrese un numero negativo para terminar" << endl;
        cin >> numero;
    }
    cout << "La suma de los numeros ingresados es: " << suma << endl;
    // 4. Mostramos resultado
    return 0;
}
