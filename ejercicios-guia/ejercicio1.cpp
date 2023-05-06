#include <iostream>

using namespace std;
// Consigna: Dados dos valores numéricos enteros calcular e informar la suma, la diferencia
// y el producto entre dichos valores.
int main()
{
    int num1, num2;
    cout << "Ingrese 2 valores: " << endl;
    cin >> num1 >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Producto: " << num1 * num2 << endl;
    return 0;
}