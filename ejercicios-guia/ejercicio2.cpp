#include <iostream>

using namespace std;
// Consigna: Dada una terna de números naturales que representan el día, el mes y el año
// de una determinada fecha informarla como un solo número natural de 8 dígitos (aaaammdd).
int main()
{
    int dia, mes, anio;
    cout << "Ingrese anio, mes y dia (en ese orden)" << endl;
    cin >> anio >> mes >> dia;

    cout << (anio * 10000) + (mes * 100) + dia << endl;
    return 0;
}