#include <iostream>

// Estrategia
// 1. Pedir el valor al usuario
// 2. Leer el valor
// 3. Preguntar si es mayor a 0
// 4. mostrar si es positivo o negativo
using namespace std;

int main()
{
	// Declaro variable(s)
	int num;

	// Le pido el valor al usuario
	cout << "Ingrese un valor: ";
	// Leo el valor y lo guardo en num
	cin >> num;

	// Pregunto si num es mayor a 0 y muestro lo que corresponde
	if (num > 0)
	{
		cout << "Es positivo!" << endl;
	}
	else
	{
		cout << "Es negativo!" << endl;
	}

	return 0;
}
