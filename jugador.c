#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "jugador.h"
#include "titulo.h"

struct JugadorEstructura{
int DNI;
char nombre[20];
char apellido[20];
int cantidadTitulos;
Titulo titulos[30];
};

Jugador crearJugador(int DNI,char nombre[20],char apellido[20]){
    Jugador j=malloc(sizeof(struct JugadorEstructura));
    strcpy(j->nombre,nombre);
    strcpy(j->apellido,apellido);
    j->DNI=DNI;
    j->cantidadTitulos=0;
    return j;
}

void mostrarJugador(Jugador j){
    printf("esto debe mostrar al jugador");
}
Jugador agregarTitulos(Jugador j){
    printf("debe msotrar los titulos del jugador");
return j;
}

void mostrarTitulos(Jugador j){
    printf("esto debe mostrar titulos del jugador");
}
