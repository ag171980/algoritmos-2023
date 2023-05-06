#include <iostream>

using namespace std;
// Consigna: Dados dos valores numéricos diferentes entre si, informar cual es el mayor.
int main()
{
    int num1, num2;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " es el mayor" << endl;
    }
    else
    {
        cout << num2 << " es el mayor" << endl;
    }
    return 0;
}