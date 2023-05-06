#include <iostream>

using namespace std;

// Consigna: Dados dos números calcular, la suma, resta, multiplicación y división. Mostrar los resultados.
// Nota: sólo puede dividir si el segundo número es distinto de 0. Realizar la comprobación.
int main()
{
    float num1, num2;
    cout << "Ingrese 2 valores para operar con ellos: " << endl;
    cin >> num1 >> num2;

    cout << "La suma es: " << num1 + num2 << endl;
    cout << "La resta es: " << num1 - num2 << endl;
    cout << "El producto es: " << num1 * num2 << endl;

    if (num2 != 0)
    {
        cout << "La division es: " << num1 / num2 << endl;
    }
    else
    {
        cout << "No podes dividir por 0 " << endl;
    }
    return 0;
}
