#include <iostream>

using namespace std;

void inicializar(int vec[], int cantP, int ValorIni);
void mostrar(int vec[], int pos);
void cargaMasiva(int vec[], int &len, int cantP);

void sumarizo(int vec[], int len);

void insertar(int vec[], int &len, int valor, int pos);
int main()
{

    int numeros[10];
    int len = 0;
    int sum = 0;

    inicializar(numeros, 10, 0);

    sumarizo(numeros, len);

    mostrar(numeros, 10);
    return 0;
}

void inicializar(int vec[], int cantP, int ValorIni)
{
    for (int i = 0; i < cantP; i++)
    {
        vec[i] = ValorIni;
    }
}

void mostrar(int vec[], int pos)
{
    for (int i = 0; i < pos; i++)
    {
        cout << vec[i] << endl;
    }
}

void cargaMasiva(int vec[], int &len, int cantP)
{
    for (int i = 0; i < cantP; i++)
    {
        cout << "Ingrese un valor: " << endl;
        cin >> vec[i];
        len++;
    }
}
void sumarizo(int vec[], int len)
{
    int suma = 0;
    for (int i = 0; i < len; i++)
    {
        suma += vec[i];
    }

    cout << 'La suma es: ' << suma << endl;
}

void insertar(int vec[], int &len, int valor, int pos)
{

    for (int i = len; i > pos; i--)
    {
        vec[i] = vec[i - 1];
    }
    vec[pos] = valor;

    len++;
}