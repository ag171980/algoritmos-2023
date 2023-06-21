#include <iostream>

using namespace std;

struct Alumno
{
    int legajoId;
    char nombreCompleto[50];
    char curso[6];
    float nota;
};

struct Padron
{
    int dni;
    int nombreCompleto[50];
    int numMesa;
    int numOrden;
};

int main()
{

    Alumno x;
    Alumno y;
    Alumno z;

    cout << "Ingrese un numero de legajo" << endl;
    cin >> x.legajoId;
    cout << "Ingrese un numero de curso" << endl;
    cin >> x.curso;
    cout << "Ingrese un nombre" << endl;
    cin >> x.nombreCompleto;
    cout << "Ingrese una nota" << endl;
    cin >> x.nota;

    cout << "Ingrese un numero de legajo" << endl;
    cin >> y.legajoId;
    cout << "Ingrese un numero de curso" << endl;
    cin >> y.curso;
    cout << "Ingrese un nombre" << endl;
    cin >> y.nombreCompleto;
    cout << "Ingrese una nota" << endl;
    cin >> y.nota;

    cout << "Ingrese un numero de legajo" << endl;
    cin >> z.legajoId;
    cout << "Ingrese un numero de curso" << endl;
    cin >> z.curso;
    cout << "Ingrese un nombre" << endl;
    cin >> z.nombreCompleto;
    cout << "Ingrese una nota" << endl;
    cin >> z.nota;

    float promedio = (x.nota + y.nota + z.nota) / 3;
    cout << "Alumno x:[" << x.legajoId << ", " << x.nombreCompleto << ", " << x.curso << "]" << endl;
    cout << "Alumno y:[" << y.legajoId << ", " << y.nombreCompleto << ", " << y.curso << "]" << endl;
    cout << "Alumno z:[" << z.legajoId << ", " << z.nombreCompleto << ", " << z.curso << "]" << endl;
    return 0;
}