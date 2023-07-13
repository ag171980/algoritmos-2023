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

int main() {
    FILE *fJugadores = fopen("Jugadores2021.DAT", "rb");
    FILE *fJugadores23 = fopen("SUB23.DAT", "wb");
    FILE *fJugadoresMay180 = fopen("MAY180.DAT", "wb");
    Jugadores jugAux;
    JugadoresAltos jugadoresAltos;


    fread(&jugAux, sizeof(struct Jugadores), 1, fJugadores);

    while (!feof(fJugadores)) {

        if (jugAux.edad <= 23) {
            fwrite(&jugAux, sizeof(struct Jugadores), 1, fJugadores23);
        }
        if (jugAux.altura > 180) {
            jugadoresAltos.cod_juego = jugAux.cod_juego;
            jugadoresAltos.seleccion = jugAux.seleccion;
            jugadoresAltos.edad = jugAux.edad;
            fwrite(&jugadoresAltos, sizeof(struct JugadoresAltos), 1, fJugadoresMay180);
        }

        fread(&jugAux, sizeof(struct Jugadores), 1, fJugadores);
    }

    fclose(fJugadores);
    fclose(fJugadores23);
    fclose(fJugadoresMay180);
    return 0;
}
