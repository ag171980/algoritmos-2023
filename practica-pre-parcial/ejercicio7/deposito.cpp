//
// Created by agutierrez on 06/07/23.
//
/*

 PROD_DEP.DAT.
COD_PROD: Código del producto / Numérico
PESO: Peso en kilogramos del producto / Numérico
VTO: Fecha de vencimiento del producto / Numérico Formato ‘MMAAAA’

Se pide realizar un programa que lea ese archivo y genere dos archivos nuevos. El primero
(PESADOS.dat) que contenga todos los productos de más de 50 kg. Con el siguiente
formato:
COD_PROD: Código del producto / Numérico
VTO: Fecha de vencimiento del producto / Numérico Formato ‘MMAAAA’

El segundo  que contenga los productos que se vencen en el año 2021 con el
siguiente formato:

COD_PROD: Código del producto / Numérico
PESO: Peso en kilogramos del producto / Numérico
VTO: Fecha de vencimiento del producto / Numérico Formato ‘MMAAAA’
 */

#include <iostream>
#include <stdio.h>

using namespace std;
struct Productos {
    int cod_prod;
    int peso;
    int vencimiento;
};
struct Pesados {
    int cod_prod;
    int vencimiento;
};

void inicializar(Productos vec[], Productos aux, int cantPos);

int main() {
    //Productos vecProductos[100];
    Productos vencen2021;
    Pesados masPesados;
    int len = 0;
    //Productos aux;
    Productos carga;

    //aux.cod_prod = 0;
    //aux.peso = 0;
    //aux.vencimiento = 0;

    //inicializar(vecProductos, aux, len);

    FILE *fProdDep = fopen("PROD_DEP.DAT", "rb");
    FILE *fPesados = fopen("PESADOS.DAT", "wb");
    FILE *fVencen = fopen("VENC2021.DAT", "wb");

    fread(&carga, sizeof(struct Productos), 1, fProdDep);

    while (!feof(fProdDep)) {
        if (carga.peso > 50) {
            masPesados.cod_prod = carga.cod_prod;
            masPesados.vencimiento = carga.vencimiento;
            fwrite(&masPesados, sizeof(struct Pesados), 1,fPesados);
        }

        if(carga.vencimiento > 122020){
            vencen2021 = carga;
            fwrite(&vencen2021, sizeof(struct Productos),1,fVencen);

        }

        fread(&carga, sizeof(struct Productos), 1, fProdDep);
    }

    fclose(fProdDep);
    fclose(fPesados);
    fclose(fVencen);
    return 0;
}
