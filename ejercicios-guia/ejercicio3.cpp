#include <iostream>

using namespace std;
// Consigna: Dado valor numérico entero que se ingresa por teclado, se pide informar:
// * La quinta parte de dicho valor,
// * el resto de la division por 5 y
// * la séptima parte de la quinta parte.
int main()
{
    int numero, resto;
    float quintaParte, septimaParte;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    quintaParte = numero / 5;
    resto = numero % 5;
    septimaParte = quintaParte / 7;
    cout << "La quinta parte es: " << quintaParte << endl;
    cout << "El resto de la division por 5 es: " << resto << endl;
    cout << "La septima parte de la quinta parte es: " << septimaParte << endl;
    return 0;
}
