#include <iostream>

using namespace std;
// Consigna: Dados un mes y el año al que corresponde, informar cuantos días tiene el mes.
int main()
{
    int mes, anio;
    bool esBisiesto = false;

    cout << "Ingrese el mes y luego el anio" << endl;
    cin >> mes >> anio;

    if ((anio % 4 == 0) && (anio % 100 != 0 || anio % 400 == 0))
    {
        esBisiesto = true;
    }
    switch (mes)
    {
    case 1:
        cout << "Enero del " << anio << " tiene 31 dias" << endl;
        break;
    case 2:
        if (esBisiesto)
        {
            cout << "Febrero del " << anio << " tiene 29 dias" << endl;
        }
        else
        {
            cout << "Febrero del " << anio << " tiene 28 dias" << endl;
        }
        break;
    case 3:
        cout << "Marzo del " << anio << " tiene 31 dias" << endl;
        break;
    case 4:
        cout << "Abril del " << anio << " tiene 30 dias" << endl;
        break;
    case 5:
        cout << "Mayo del " << anio << " tiene 31 dias" << endl;
        break;
    case 6:
        cout << "Junio del " << anio << " tiene 30 dias" << endl;
        break;
    case 7:
        cout << "Julio del " << anio << " tiene 31 dias" << endl;
        break;
    case 8:
        cout << "Agosto del " << anio << " tiene 31 dias" << endl;
        break;
    case 9:
        cout << "Septiembre del " << anio << " tiene 30 dias" << endl;
        break;
    case 10:
        cout << "Octubre del " << anio << " tiene 31 dias" << endl;
        break;
    case 11:
        cout << "Noviembre del " << anio << " tiene 30 dias" << endl;
        break;
    case 12:
        cout << "Diciembre del " << anio << " tiene 31 dias" << endl;
        break;
    default:
        cout << "No ingresaste un mes valido" << endl;
        break;
    }
    return 0;
}