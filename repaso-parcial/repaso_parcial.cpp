#include <iostream>
#include <stdio.h>
#include "struct.h"
#include "cargar.h"
#include "leer.h"

using namespace std;

void cargarNuevoArchivo();

void leerArchivo();

int main() {
    int opciones;

    cout << "1. Crear archivo con 5 datos ya cargados" << endl;
    cout << "2. Leer archivo" << endl;
    cout << "3. Leer archivos PROV_G y PROV_A" << endl;
    cin >> opciones;

    if (opciones == 1) {
        cargarNuevoArchivo();

        cout << "Archivo generado" << endl;
    }
    if (opciones == 2) {
        leerArchivo();
    }
    if (opciones == 3) {
        FILE *fProvA = fopen("PROV_A.DAT", "rb");
        ProovedoresA provAux;

        fread(&provAux, sizeof(struct ProovedoresA), 1, fProvA);
        cout << "En archivo PROV_A.DAT" << endl;
        while (!feof(fProvA)) {
            cout << "cod_prod: " << provAux.cod_prod << endl;
            cout << "cpe: " << provAux.cpe << endl;

            fread(&provAux, sizeof(struct ProovedoresA), 1, fProvA);
        }

        fclose(fProvA);
        cout << "----------------" << endl;
        FILE *fProvG = fopen("PROV_G.DAT", "rb");

        fread(&provAux, sizeof(struct ProovedoresA), 1, fProvG);
        cout << "En archivo PROV_G.DAT" << endl;
        while (!feof(fProvG)) {
            cout << "cod_prod: " << provAux.cod_prod << endl;
            cout << "cpe: " << provAux.cpe << endl;

            fread(&provAux, sizeof(struct ProovedoresA), 1, fProvG);
        }
        fclose(fProvG);

    }

    return 0;
}


/*
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

    inicializar(vecProvA, provAAux, 100);
    inicializar(vecProvG, provAAux, 100);

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

    fProvA = fopen("PROV_A.DAT", "wb");
    cargarArchivo(fProvA, vecProvA, lenA);
    fclose(fProvA);
    fProvG = fopen("PROV_G.DAT", "wb");
    cargarArchivo(fProvG, vecProvG, lenG);
    fclose(fProvG);

    fclose(fProvAll);
}

void cargarArchivo(FILE *fProv, ProovedoresA vec[], int len) {

    for (int i = 0; i < len; i++) {
        fwrite(&vec[i], sizeof(struct ProovedoresA), 1, fProv);
    }
}
*/