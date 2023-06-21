#include <iostream>
#include <string>
using namespace std;
// Consigna:

bool esMayor(int fechaIng, int fechaCmp);
int main()
{
    int num, mayor, menor;
    int posMayor, posMenor;

    string nombreMay, nombreMen, nombreIng;
    int fechaMay, fechaMen, fechaIng;
    bool terminar = false;
    int contador = 0;
    while (!terminar)
    {
        cout << "Ingrese el nombre: " << endl;
        cin >> nombreIng;
        if (nombreIng == "fin")
        {
            terminar = true;
            break;
        }
        cout << "Ingrese la fecha: " << endl;
        cin >> fechaIng;

        if (contador == 0)
        {
            fechaMay = fechaIng;
            fechaMen = fechaIng;

            nombreMay = nombreIng;
            nombreMen = nombreIng;
            contador++;
        }
        if (esMayor(fechaIng, fechaMay))
        {
            fechaMay = fechaIng;
            nombreMay = nombreIng;
        }
        if (!esMayor(fechaIng, fechaMen))
        {
            fechaMen = fechaIng;
            nombreMen = nombreIng;
        }
    }

    cout << "El mayor es " << nombreMay << " e ingreso " << fechaMay << endl;
    cout << "El menor es " << nombreMen << " e ingreso " << fechaMen << endl;

    return 0;
}

bool esMayor(int fechaIng, int fechaCmp)
{
    string fechaIngStr = to_string(fechaIng), fechaCmpStr = to_string(fechaCmp);
    string diaIngStr, mesIngStr, anioIngStr, diaCmpStr, mesCmpStr, anioCmpStr;
    for (int i = 0; i < fechaIngStr.length(); i++)
    {
        if (i <= 1)
        {
            diaIngStr += fechaIngStr[i];
            diaCmpStr += fechaCmpStr[i];
        }
        if (i >= 2 && i <= 3)
        {
            mesIngStr += fechaIngStr[i];
            mesCmpStr += fechaCmpStr[i];
        }
        if (i >= 4)
        {
            anioIngStr += fechaIngStr[i];
            anioCmpStr += fechaCmpStr[i];
        }
    }
    int anioActual = 2023, mesActual = 5, diaActual = 20;
    int anioIng = stoi(anioIngStr), diaIng = stoi(diaIngStr), mesIng = stoi(mesIngStr);
    int anioCmp = stoi(anioCmpStr), diaCmp = stoi(diaCmpStr), mesCmp = stoi(mesCmpStr);

    if (anioActual - anioIng > anioActual - anioCmp)
    {
        return true;
    }
    else
    {
        if (anioActual - anioIng < anioActual - anioCmp)
        {
            return false;
        }
        else
        {
            if (mesActual - mesIng > mesActual - mesCmp)
            {
                return true;
            }
            else
            {
                if (mesActual - mesIng < mesActual - mesCmp)
                {
                    return false;
                }
                else
                {
                    if (diaActual - diaIng > diaActual - diaIng)
                    {
                        return true;
                    }
                    else
                    {
                        if (diaActual - diaIng < diaActual - diaIng)
                        {
                            return false;
                        }
                        else
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }
}
