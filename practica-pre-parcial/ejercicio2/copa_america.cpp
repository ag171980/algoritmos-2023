//
// Created by agutierrez on 04/07/23.
//

#include "copa_america.h"

#include <iostream>

using namespace std;

struct Jugador {
    int cod_jugador;
    char letra_seleccion;
    int cant_goles;
};

int masGolesConvertidos(Jugador vec[], int len);

int menosGolesConvertidos(Jugador vec[], int len);

int promedioGoles(Jugador vec[], int len);

int main() {

    int cantJugadores = 6;
    Jugador vecJugadores[cantJugadores];

    for (int i = 0; i < cantJugadores; i++) {
        vecJugadores[i].cod_jugador = (i * 3)/2;
        vecJugadores[i].letra_seleccion = 'S';
        vecJugadores[i].cant_goles = (i * 2);
    }

    int masGoles = masGolesConvertidos(vecJugadores, cantJugadores);

    int menosGoles = menosGolesConvertidos(vecJugadores, cantJugadores);

    int promedio = promedioGoles(vecJugadores, cantJugadores);


    //1.
    cout << "---- Jugador con mas goles ----" << endl;
    cout << "Cod_Jugador: " << vecJugadores[masGoles].cod_jugador << endl;
    cout << "Letra Seleccion: " << vecJugadores[masGoles].letra_seleccion << endl;
    cout << "Cant Goles: " << vecJugadores[masGoles].cant_goles << endl;
    cout << endl;
    cout << " ------------------- " << endl;
    cout << endl;
    //2.
    cout << "---- Jugador con menos goles ----" << endl;
    cout << "Cod_Jugador: " << vecJugadores[menosGoles].cod_jugador << endl;
    cout << "Letra Seleccion: " << vecJugadores[menosGoles].letra_seleccion << endl;
    cout << "Cant Goles: " << vecJugadores[menosGoles].cant_goles << endl;
    cout << endl;
    cout << " ------------------- " << endl;
    cout << endl;
    //3.

    cout << "El promedio de los goles respecto a la cantidad de jugadores es: " << promedio << endl;

    return 0;
}

int masGolesConvertidos(Jugador vec[], int len) {
    int cantGoles = vec[0].cant_goles;
    int pos = 0;
    for (int i = 1; i < len; i++) {
        if (vec[i].cant_goles > cantGoles) {
            cantGoles = vec[i].cant_goles;
            pos = i;
        }
    }
    return pos;
}

int menosGolesConvertidos(Jugador vec[], int len) {
    int cantGoles = vec[0].cant_goles;
    int pos = 0;
    for (int i = 1; i < len; i++) {
        if (vec[i].cant_goles < cantGoles) {
            cantGoles = vec[i].cant_goles;
            pos = i;
        }
    }
    return pos;
}

int promedioGoles(Jugador vec[], int len) {
    int suma = 0;

    for (int i = 0; i < len; i++) {
        suma += vec[i].cant_goles;
    }
    return (suma / len);
}