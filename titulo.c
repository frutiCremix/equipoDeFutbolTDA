#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "titulo.h"

struct TituloEstructura{
    char nombreT[20];
    int anio;
};

Titulo crearTitulo(char nombre[20],int anio){
    Titulo t=malloc(sizeof(struct TituloEstructura));
    strcpy(t->nombreT,nombre);
    t->anio=anio;
    return t;
}

void mostrarTitulo(Titulo t){
    printf("esto debe mostrar los datos del titulo");
}
