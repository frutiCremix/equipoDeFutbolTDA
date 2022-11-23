#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "equipo.h"
#include "jugador.h"

struct EquipoEstructura{
    char nombreEquipo[20];
    int cantidadJugadores;
    char nombreEstadio[50];
    Jugador jugadores[23];
};

Equipo crearEquipo(char nombreEquipoP[20],char nombreEstadio[50]){
    Equipo e=malloc(sizeof(struct EquipoEstructura));

    strcpy(e->nombreEquipo,nombreEquipoP);
    strcpy(e->nombreEstadio,nombreEstadio);
    e->cantidadJugadores=0;
    return e;
}

Equipo agregarJugador(Equipo e){
        return e;
}
void mostrarEquipo(Equipo e){
    printf("esto debe mostrar equipo");
}

void mostrarJugadores(Equipo e){
    printf("jugadores del equipo");
}
