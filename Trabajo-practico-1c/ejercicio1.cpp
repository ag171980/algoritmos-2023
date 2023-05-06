#include <iostream>

using namespace std;

// Consigna: Se necesita obtener el promedio de un estudiante
// a partir de sus tres notas parciales, las mismas son ingresadas por el usuario.
int main()
{
    double nota1, nota2, nota3, promedio;

    cout << "Ingrese sus 3 notas de parciales: " << endl;
    cin >> nota1 >> nota2 >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    cout << "El promedio es: " << promedio << endl;
    return 0;
}
