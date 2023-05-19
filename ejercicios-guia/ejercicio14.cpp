#include <iostream>

using namespace std;
// Consigna:
int main()
{
    int num;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    int i = 1;
    int cantNumeros = 0;
    while (cantNumeros != num)
    {
        if (3 * i % 5 != 0)
        {
            cantNumeros++;
            cout << 3 * i << endl;
        }
        i++;
    }
    return 0;
}