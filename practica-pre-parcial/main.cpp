#include <iostream>
#include <stdio.h>

using namespace std;
/*
Dado un vector de productos que contiene el código del producto, fecha de vencimiento del lote y la cantidad de unidades disponibles en
 depósito (Se sabe que máximo hay 200 productos en la empresa), determinar:
a- ¿Cuál es el producto que más unidades tiene en depósito?
b- ¿Cuáles son los productos que se vencen posterior al 01112022? (Mostrarlos por pantalla)
c- Calcular el promedio de unidades en el depósito por producto.
*/

struct Productos {
    int cod_prod;
    int vencimiento;
    int cant_disponibles;
};

int mayorUnidades(Productos vec[], int cantVec);

void promedioUnidades(Productos vec[], int cantVec);

void productosVencen(Productos vec[], int cantVec);

int main() {
    int lenArr;
    Productos arrPRoductos[200];

    //a
    int posicion = mayorUnidades(arrPRoductos, lenArr);
    cout << arrPRoductos[posicion].cod_prod << endl;

    //b
    productosVencen(arrPRoductos, lenArr);

    //c
    promedioUnidades(arrPRoductos, lenArr);
}

int mayorUnidades(Productos vec[], int cantVec) {
    int mayor = vec[0].cant_disponibles;
    int pos = 0;
    for (int i = 1; i < lenArr; i++) {
        if (vec[i].cant_disponibles > mayor) {
            pos = i;
        }
    }
    return i;
}

void productosVencen(Productos vec[], int cantVec) {
    for (int i = 0; i < cantVec; i++) {
        if (vec[i].vencimiento > 01112022) {
            cout << "***** Producto " << i << "*****" << endl;
            cout << "Cod Producto: " << vec[i].cod_prod << endl;
            cout << "Fecha de vencimiento: " << vec[i].vencimiento << endl;
            cout << "Unidades: " << vec[i].cant_disponibles << endl;
        }
    }
}

void promedioUnidades(Productos vec[], int cantVec) {
    int sumaUnidades = 0;
    for (int i = 0; i < cantVec; i++) {
        sumaUnidades += vec[i].cant_disponibles;
    }

    cout << "El promedio es: " << sumaUnidades / cantVec << endl;
}