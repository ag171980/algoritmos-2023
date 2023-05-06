#include <iostream>
#include <stdlib.h>
using namespace std;
// Consigna: Dadas dos fechas, informar cual es la más reciente. Determinar cuales deben
// ser los datos de entrada y en que formato los debe ingresar el usuario.
int main()
{
    int fecha1, fecha2;
    int anioAct = 2023, mesAct = 5, diaAct = 6;
    int anio1, mes1, dia1;
    int anio2, mes2, dia2;
    cout << " Fecha a comparar: " << anioAct << "/" << mesAct << "/" << diaAct << endl;
    cout << "Ingrese 2 fechas con el siguiente formato: aaaammdd" << endl;
    cin >> fecha1 >> fecha2;
    anio1 = fecha1 / 10000;
    mes1 = (fecha1 / 100) - (anio1 * 100);
    dia1 = fecha1 % 100;

    anio2 = fecha2 / 10000;
    mes2 = (fecha2 / 100) - (anio2 * 100);
    dia2 = fecha2 % 100;

    if (abs(anioAct - anio1) == abs(anioAct - anio2))
    {
        if (abs(mesAct - mes1) == abs(mesAct - mes2))
        {
            if (abs(diaAct - dia1) == abs(diaAct - dia2))
            {
                cout << "Las fechas son exactamente identicas!" << endl;
            }
            else
            {
                if (abs(diaAct - dia1) == abs(diaAct - dia2))
                {
                    cout << "La primer fecha esta mas cerca que la segunda" << endl;
                }
                else
                {
                    cout << "La segunda fecha esta mas cerca que la primera" << endl;
                }
            }
        }
        else
        {
            if (abs(mesAct - mes1) < abs(mesAct - mes2))
            {
                cout << "La primer fecha esta mas cerca que la segunda" << endl;
            }
            else
            {
                cout << "La segunda fecha esta mas cerca que la primera" << endl;
            }
        }
    }
    else
    {
        if (abs(anioAct - anio1) < abs(anioAct - anio2))
        {
            cout << "La primer fecha esta mas cerca que la segunda" << endl;
        }
        else
        {
            cout << "La segunda fecha esta mas cerca que la primera" << endl;
        }
    }
    return 0;
}
