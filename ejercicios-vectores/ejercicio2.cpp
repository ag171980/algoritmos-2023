#include <iostream>

using namespace std;
int buscarMayor(int vec[], int &len);
int main()
{

    int prueba1[10] = {20, 19, 111, -2, 55, 901, 12, 5, 129, 1};
    int len = 10;
    int mayor = buscarMayor(prueba1, len);

    cout << "El mayor es: " << mayor << endl;
    return 0;
}
int buscarMayor(int vec[], int &len)
{
    int mayor;
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            mayor = vec[i];
        }

        if (vec[i] > mayor)
        {
            mayor = vec[i];
        }
    }
    return mayor;
}