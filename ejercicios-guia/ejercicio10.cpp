#include <iostream>

using namespace std;
// Consigna:
int main()
{
    int num1, num2, producto;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> num1 >> num2;

    for (int i = 0; i < num2; i++)
    {
        producto += num1;
    }

    cout << "El producto es: " << producto << endl;
    return 0;
}