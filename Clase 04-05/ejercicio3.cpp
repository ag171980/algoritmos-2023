#include <iostream>

// Estrategia
// 1. Pedir el mes al usuario
// 2. Leer el mes
// 3. comparar y mostrar por pantalla el nombre del mes

using namespace std;

int main()
{
	// Declaro variable(s)
	int mes;

	// Le pido el mes al usuario
	cout << "Ingrese un mes: ";
	// Leo el mes y lo guardo
	cin >> mes;

	switch (mes)
	{
	case 1:
		cout << "Tu mes es Enero" << endl;
		break;
	case 2:
		cout << "Tu mes es Febrero" << endl;
		break;
	case 3:
		cout << "Tu mes es Marzo" << endl;
		break;
	case 4:
		cout << "Tu mes es Abril" << endl;
		break;
	case 5:
		cout << "Tu mes es Mayo" << endl;
		break;
	case 6:
		cout << "Tu mes es Junio" << endl;
		break;
	case 7:
		cout << "Tu mes es Julio" << endl;
		break;
	case 8:
		cout << "Tu mes es Agosto" << endl;
		break;
	case 9:
		cout << "Tu mes es Septiembre" << endl;
		break;
	case 10:
		cout << "Tu mes es Octubre" << endl;
		break;
	case 11:
		cout << "Tu mes es Noviembre" << endl;
		break;
	case 12:
		cout << "Tu mes es Diciembre" << endl;
		break;
	default:
		cout << "El numero ingresado no corresponde a un mes :(" << endl;
		break;
	}

	return 0;
}
