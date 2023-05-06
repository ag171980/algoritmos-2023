#include <iostream>

using namespace std;
// Consigna: Dado un triángulo representado por sus lados lado1, lado2 y lado3, determinar
// e indicar según corresponda: “equilátero”, “isósceles” o “escálenos”.
int main()
{

    int lado1, lado2, lado3;

    cout << "Ingrese los lados para determinar el tipo de triangulo: " << endl;
    cin >> lado1 >> lado2 >> lado3;

    if (lado1 == lado2 && lado2 == lado3)
    {
        cout << "Este triangulo es equilatero" << endl;
    }
    else
    {
        if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
        {
            cout << "Este triangulo es escaleno" << endl;
        }
        else
        {
            cout << "Este triangulo es isosceles" << endl;
        }
    }
    return 0;
}