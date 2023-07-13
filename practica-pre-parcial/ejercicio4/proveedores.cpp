#include <iostream>
#include <stdio.h>

using namespace std;

struct Proveedores {
    int id_isp;
    char tipo_prod;
    int cpi;
    int cc;
};

struct ProveedoresArch {
    int id_isp;
    int cpi;
    int cc;
};

void inicializar(Proveedores vec[], int &len, Proveedores provAux);

int main() {
    FILE *fProveedores;
    FILE *fProvA;
    FILE *fProvF;
    FILE *fProvG;

    int len = 0;

    Proveedores provAux;
    ProveedoresArch provArchAux;

    provAux.id_isp = 0;
    provAux.tipo_prod = '\0';
    provAux.cpi = 0;
    provAux.cc = 0;


    fProveedores = fopen("ISP_G.DAT", "rb");

    fread(&provAux, sizeof(struct Proveedores), 1, fProveedores);

    while (!feof(fProveedores)) {
        provArchAux.id_isp = provAux.id_isp;
        provArchAux.cpi = provAux.cpi;
        provArchAux.cc = provAux.cc;
        if (provAux.tipo_prod == 'A') {
            fwrite(&provArchAux, sizeof(struct ProveedoresArch), 1, fProvA);
        }
        if (provAux.tipo_prod == 'F') {
            fwrite(&provArchAux, sizeof(struct ProveedoresArch), 1, fProvF);
        }
        if (provAux.tipo_prod == 'G') {
            fwrite(&provArchAux, sizeof(struct ProveedoresArch), 1, fProvG);

        }

        fread(&provAux, sizeof(struct Proveedores), 1, fProveedores);
    }

    return 0;
}