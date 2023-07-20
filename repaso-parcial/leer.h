//
// Created by agutierrez on 13/07/23.
//

#ifndef ALGORITMOS_2023_PROOVEDORES_H
#define ALGORITMOS_2023_PROOVEDORES_H

#include <iostream>
#include <stdio.h>

using namespace std;

void inicializar(ProovedoresA vec[], int len, ProovedoresA aux);

void insertarOrdenado(ProovedoresA vec[], int &len, ProovedoresA prov);

void insertar(ProovedoresA vec[], int &len, ProovedoresA prov, int pos);

void cargarArchivo(FILE *fProv, ProovedoresA vec[], int len);

void leerArchivo() {
    FILE *fProvAll;
    FILE *fProvA;
    FILE *fProvG;

    Proovedores provAux;
    int lenA = 0;
    int lenG = 0;
    ProovedoresA vecProvA[100];
    ProovedoresA vecProvG[100];
    ProovedoresA provAAux;
    provAAux.cod_prod = 0;
    provAAux.cpe = 0;

    inicializar(vecProvA, 5, provAAux);
    inicializar(vecProvG, 5, provAAux);

    fProvAll = fopen("Prov_AllProd.DAT", "rb");

    fread(&provAux, sizeof(struct Proovedores), 1, fProvAll);
    while (!feof(fProvAll)) {

        provAAux.cod_prod = provAux.cod_prod;
        provAAux.cpe = provAux.cpe;

        if (provAux.tipo_prod == 'A') {
            insertarOrdenado(vecProvA, lenA, provAAux);
        }

        if (provAux.tipo_prod == 'G') {
            insertarOrdenado(vecProvG, lenG, provAAux);
        }

        fread(&provAux, sizeof(struct Proovedores), 1, fProvAll);
    }
    fclose(fProvAll);
    fProvA = fopen("PROV_A.DAT", "wb");
    cargarArchivo(fProvA, vecProvA, lenA);
    fclose(fProvA);
    fProvG = fopen("PROV_G.DAT", "wb");
    cargarArchivo(fProvG, vecProvG, lenG);
    fclose(fProvG);
}

void inicializar(ProovedoresA vec[], int len, ProovedoresA aux) {
    for (int i = 0; i < len; i++) {
        vec[i].cod_prod = aux.cod_prod;
        vec[i].cpe = aux.cpe;
    }
}

void insertarOrdenado(ProovedoresA vec[], int &len, ProovedoresA prov) {
    //1 d�nde lo voy a cargar, buscar la posici�n en la que lo tengo que insertar
    int i = 0;
    while (i < len && vec[i].cpe <= prov.cpe) {
        i++;
    }
    //2 CARGAR el valor en la posici�n que determin�
    if (i == len) {
        vec[len].cod_prod = prov.cod_prod;
        vec[len].cpe = prov.cpe;
        len++;
    } else insertar(vec, len, prov, i);
}

void insertar(ProovedoresA vec[], int &len, ProovedoresA prov, int pos) {
    //generar el movimiento de los valores para generar el espacio de carga necesario
    for (int i = len; i > pos; i--) {
        vec[i].cod_prod = vec[i - 1].cod_prod;
        vec[i].cpe = vec[i - 1].cpe;
    }
    //cargo el valor
    vec[pos].cod_prod = prov.cod_prod;
    vec[pos].cpe = prov.cpe;
    len++;
}

void cargarArchivo(FILE *fProv, ProovedoresA vec[], int len){
    for (int i = 0; i < len; i++) {
        fwrite(&vec[i], sizeof(struct ProovedoresA), 1, fProv);
    }
}

#endif //ALGORITMOS_2023_PROOVEDORES_H

