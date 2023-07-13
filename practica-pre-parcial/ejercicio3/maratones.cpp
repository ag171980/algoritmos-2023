//
// Created by agutierrez on 04/07/23.
//

#include "maratones.h"

#include <iostream>

using namespace std;


struct Maraton {
    int cod_maraton;
    int cant_inscriptos;
};

int masInscriptos(Maraton vec[], int len);

int menosInscriptos(Maraton vec[], int len);

int promedioInscriptos(Maraton vec[], int len);

int main() {
    int lenVec = 50;
    Maraton vecMaraton[lenVec];

    int masInsc = masInscriptos(vecMaraton, lenVec);
    int menosInsc = menosInscriptos(vecMaraton, lenVec);
    int promedio = promedioInscriptos(vecMaraton, lenVec);

    //1.
    cout << "La maraton que mas inscriptos tuvo fue la del codigo: " << vecMaraton[masInsc].cod_maraton << endl;
    cout << "La maraton que menos inscriptos tuvo fue la del codigo: " << vecMaraton[menosInsc].cod_maraton << endl;
    cout << "El promedio de inscriptos fue de : " << promedio << endl;
    return 0;
}

int masInscriptos(Maraton vec[], int len) {
    int primero = vec[0].cant_inscriptos;
    int pos = 0;
    for (int i = 1; i < len; i++) {
        if (vec[i].cant_inscriptos > primero) {
            primero = vec[i].cant_inscriptos;
            pos = i;
        }
    }
    return pos;
}

int menosInscriptos(Maraton vec[], int len) {
    int primero = vec[0].cant_inscriptos;
    int pos = 0;
    for (int i = 1; i < len; i++) {
        if (vec[i].cant_inscriptos < primero) {
            primero = vec[i].cant_inscriptos;
            pos = i;
        }
    }
    return pos;
}

int promedioInscriptos(Maraton vec[], int len) {
    int cantInscriptos = 0;
    for (int i = 0; i < len; i++) {
        cantInscriptos += vec[i].cant_inscriptos;
    }
    return cantInscriptos / len;
}