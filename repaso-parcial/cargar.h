//
// Created by agutierrez on 7/19/23.
//

#ifndef ALGORITMOS_2023_CARGAR_H
#define ALGORITMOS_2023_CARGAR_H
#include <iostream>
#include <stdio.h>



void cargarNuevoArchivo() {
    FILE *fArch = fopen("Prov_AllProd.DAT", "wb");
    Proovedores provAux;

    for (int i = 0; i < 5; i++) {
        if(i == 0){
            provAux.cod_prod = 23;
            provAux.tipo_prod = 'A';
            provAux.cpe = 230;
        }
        if(i == 1){
            provAux.cod_prod = 44;
            provAux.tipo_prod = 'G';
            provAux.cpe = 15;
        }
        if(i == 2){
            provAux.cod_prod = 5;
            provAux.tipo_prod = 'G';
            provAux.cpe = 99;
        }
        if(i == 3){
            provAux.cod_prod = 111;
            provAux.tipo_prod = 'F';
            provAux.cpe = 80;
        }
        if(i == 4){
            provAux.cod_prod = 55;
            provAux.tipo_prod = 'G';
            provAux.cpe = 500;
        }

        fwrite(&provAux, sizeof(struct Proovedores), 1, fArch);
    }

    fclose(fArch);
}



#endif //ALGORITMOS_2023_CARGAR_H
