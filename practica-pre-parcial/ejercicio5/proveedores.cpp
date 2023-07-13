//
// Created by agutierrez on 06/07/23.
//

#include "proveedores.h"

#include <iostream>
#include <stdio.h>


/*
 * Se tiene un archivo de registros de tamaño fijo de proveedores con nombre ISP_G.DAT. El
formato del registro de este archivo es el siguiente:
ID_ISP: Número de Proveedor de Internet/ Numérico
TIPO_PROD: Tipo de producto que vende / Un caracter 'A'; 'F' o 'G'. (ADSL– Fibra– 4G)
CPI: Cantidad de Pedidos de instalación / Numérico
CC: Cantidad de Clientes / Numérico
Los registros en el archivo no tienen ningún orden específico y se sabe que no contiene más
de 100.
Se pide:
- Ordenar el Archivo ISP_G.dat
- Informar por pantalla la cantidad total de clientes, sin importar el proveedo*/
struct Proveedores {
    int id_isp;
    char tipo_prod;
    int cpi;
    int cc;
};
using namespace std;

void inicializar(Proveedores vec[], Proveedores aux, int cantPos);

void insertarOrdenado(Proveedores vec[], int &len1, Proveedores valor);

void insertar(Proveedores vec[], int &len1, Proveedores valor, int pos);

void cargarOrdenado(Proveedores vec[], int len);

int main() {
    int len = 0;
    Proveedores vecProveedores[100];
    Proveedores provAux;
    Proveedores aux;
    int contador = 0;

    aux.id_isp = 0;
    aux.tipo_prod = '\0';
    aux.cpi = 0;
    aux.cc = 0;

    inicializar(vecProveedores, aux, 100);
    FILE *fProv = fopen("ISP_G.DAT", "rb");
    fread(&provAux, sizeof(struct Proveedores), 1, fProv);

    while (!feof(fProv)) {

        insertarOrdenado(vecProveedores, len, provAux);
        contador += provAux.cc;
        fread(&provAux, sizeof(struct Proveedores), 1, fProv);
    }
    fclose(fProv);

    cargarOrdenado(vecProveedores, len);
    cout << "Cantidad de clientes: " << contador << endl;
    return 0;
}


void
void inicializar(Proveedores vec[], Proveedores aux, int cantPos) {
}

void cargarOrdenado(Proveedores vec[], int len) {
    FILE *fProv = fopen("ISP_G.DAT", "wb");
    for (int i = 0; i < len; i++) {
        fwrite(&vec[i], sizeof(struct Proveedores), 1, fProv);
    }
    fclose(fProv);
}


void insertarOrdenado(Proveedores vec[], int &len1, Proveedores valor) {
    //1 d�nde lo voy a cargar, buscar la posici�n en la que lo tengo que insertar
    int i = 0;
    while (i < len1 && vec[i].id_isp <= valor.id_isp) {
        i++;
    }
    //2 CARGAR el valor en la posici�n que determin�
    if (i == len1) {
        vec[len1].id_isp = valor.id_isp;
        vec[len1].tipo_prod = valor.tipo_prod;
        vec[len1].cpi = valor.cpi;
        vec[len1].cc = valor.cc;
        len1++;
    } else insertar(vec, len1, valor, i);
}

void insertar(Proveedores vec[], int &len1, Proveedores valor, int pos) {
    //generar el movimiento de los valores para generar el espacio de carga necesario
    for (int i = len1; i > pos; i--) {
        vec[i].id_isp = vec[i - 1].id_isp;
        vec[i].tipo_prod = vec[i - 1].tipo_prod;
        vec[i].cpi = vec[i - 1].cpi;
        vec[i].cc = vec[i - 1].cc;
    }
    //cargo el valor
    vec[pos].id_isp = valor.id_isp;
    vec[pos].tipo_prod = valor.tipo_prod;
    vec[pos].cpi = valor.cpi;
    vec[pos].cc = valor.cc;
    len1++;
}
