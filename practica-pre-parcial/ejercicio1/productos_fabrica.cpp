//
// Created by agutierrez on 04/07/23.
//
#include <iostream>

#include "productos_fabrica.h"

struct Producto {
    int cod_producto;
    int stock_disponible;
};
using namespace std;

int posicionMasFabricado(Producto vec[], int len);

int cantProductosFabricados(Producto vec[], int len);

int posicionMenosFabricado(Producto vec[], int len);

int main() {
    int lenProductos = 10;
    Producto productos[lenProductos];
    for (int i = 0; i < lenProductos; i++) {
        productos[i].cod_producto = i * 2;
        productos[i].stock_disponible = i * 10;
    }

    int posMas = posicionMasFabricado(productos, lenProductos);
    int posMin = posicionMenosFabricado(productos, lenProductos);

    cout << "El producto con mas productos fabricados esta en la posicion: " << posMas << endl;

    cout << "El producto con menos productos fabricados esta en la posicion: " << posMin << endl;

    cout << "La cantidad de productos en total es: " << cantProductosFabricados(productos, lenProductos) << endl;


    return 0;
}

int posicionMasFabricado(Producto vec[], int len) {
    int primero = vec[0].stock_disponible;
    int pos = 0;
    for (int i = 1; i < len; i++) {
        if (vec[i].stock_disponible > primero) {
            primero = vec[i].stock_disponible;
            pos = i;
        }
    }
    return pos;
}


int posicionMenosFabricado(Producto vec[], int len) {
    int primero = vec[0].stock_disponible;
    int pos = 0;
    for (int i = 1; i < len; i++) {
        if (vec[i].stock_disponible < primero) {
            primero = vec[i].stock_disponible;
            pos = i;
        }
    }
    return pos;
}

int cantProductosFabricados(Producto vec[], int len) {
    int suma = 0;
    for (int i = 1; i < len; i++) {
        suma += vec[i].stock_disponible;
    }
    return suma;
}