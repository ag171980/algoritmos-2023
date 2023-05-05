#include <iostream>

using namespace std;

int main()
{
	// Declaro variables
	int numero, suma = 0;

	for (int i = 0; i <= 9; i++)
	{
		// pedir valores
		cout << "Ingrese un valor: " << endl;
		// Leer
		cin >> numero;
		// Sumar cada valor
		suma = suma + numero;
	}

	// Mostrar el total de la suma
	cout << "El resultado es: " << suma << endl;
	return 0;
}
