#include <iostream>

using namespace std;

int main()
{
    float maxNeg, minPos, total = 0, enRango, numIngresado;
    bool finalizar = false;
    float i = 0;
    for (i; !finalizar; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> numIngresado;
        if (numIngresado == 0)
        {
            finalizar = true;
            break;
        }

        if (i == 0)
        {
            maxNeg = numIngresado;
            if (numIngresado > 0)
            {
                minPos = numIngresado;
            }
            else
            {
                minPos = 0;
            }
            enRango = numIngresado;
        }
        if (minPos == 0 && numIngresado > 0)
        {
            minPos = numIngresado;
        }

        if (numIngresado < minPos && numIngresado > 0)
        {
            minPos = numIngresado;
        }
        if (numIngresado < maxNeg && numIngresado < 0)
        {
            maxNeg = numIngresado;
        }
        if (numIngresado < enRango && numIngresado > -17.3 && numIngresado < 26.9)
        {
            enRango = numIngresado;
        }

        total += numIngresado;
    }

    cout << "El maximo negativo es: " << maxNeg << endl;
    cout << "El minimo positivo es: " << minPos << endl;
    cout << "El valor minimo entre -17.3 y 26.9 es:" << enRango << endl;
    cout << "El promedio es: " << total / i << endl;
    return 0;
}
