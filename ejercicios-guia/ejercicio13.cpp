#include <iostream>

using namespace std;
// Consigna:
int main()
{
    int cant1 = 0, cant2 = 0, cant3 = 0, cant4 = 0;
    int sueldoIngresado;

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el sueldo del empleado: " << endl;
        cin >> sueldoIngresado;
        if (sueldoIngresado < 2000)
        {
            cant1++;
        }
        else if (sueldoIngresado >= 2000 && sueldoIngresado < 3000)
        {
            cant2++;
        }
        else if (sueldoIngresado >= 3000 && sueldoIngresado < 5000)
        {
            cant3++;
        }
        else
        {
            cant4++;
        }
    }

    cout << "Cant. de personas que ganan menos de $2000: " << cant1 << endl;
    cout << "Cant. de personas que ganan entre $2000 y $3000: " << cant2 << endl;
    cout << "Cant. de personas que ganan entre $3000 y $5000: " << cant3 << endl;
    cout << "Cant. de personas que ganan mas de $5000: " << cant4 << endl;
    return 0;
}