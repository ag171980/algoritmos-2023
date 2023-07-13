#include <iostream>
#include <stdio.h>

using namespace std;

struct Jugadores {
    int cod_juego;
    int seleccion;
    int edad;
    int altura;
};

struct JugadoresAltos {
    int cod_juego;
    int seleccion;
    int edad;
};

void inicializar(Jugadores vec[], Jugadores aux, int cantPos);

void insertar(Jugadores vec[], int &len1, Jugadores valor, int pos);


void insertarOrdenado(Jugadores vec[], int &len1, Jugadores valor);

void insertarOrdenado2(JugadoresAltos vec[], int &len1, JugadoresAltos valor);


int main() {

    FILE *fJugadores = fopen("Jugadores2021.DAT", "rb");
    int len = 100;
    int len23 = 0;
    int len180 = 0;
    Jugadores vecJugadores[100];
    Jugadores vecJugadores23[len23];
    Jugadores jugAux;

    JugadoresAltos vecJugadores180[len180];
    JugadoresAltos jugAux180;

    jugAux.cod_juego = 0;
    jugAux.seleccion = 0;
    jugAux.edad = 0;
    jugAux.altura = 0;

    inicializar(vecJugadores, jugAux, 100);

    fread(&jugAux, sizeof(struct Jugadores), 1, fJugadores);

    while (!feof(fJugadores)) {

        if (jugAux.edad <= 23) {
            insertarOrdenado(vecJugadores23, len23, jugAux);
        }

        if (jugAux.altura > 180) {
            jugAux180.cod_juego = jugAux.cod_juego;
            jugAux180.seleccion = jugAux.seleccion;
            jugAux180.edad = jugAux.edad;

            insertarOrdenado2(vecJugadores180, len180, jugAux180);
        }

        fread(&jugAux, sizeof(struct Jugadores), 1, fJugadores);
    }

    fclose(fJugadores);


    return 0;
}