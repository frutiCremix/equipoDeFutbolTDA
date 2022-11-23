#include <stdio.h>
#include <stdlib.h>
#include"titulo.h"
#include"jugador.h"
#include"equipo.h"

int main()
{
    printf("equipo version 1");
    Equipo e=crearEquipo("Velez Sarfield","Jose amalfitani");
    mostrarEquipo(e);

    Jugador j=crearJugador(3332,"Nico","Perez");
    mostrarJugador(j);

    Titulo t=crearTitulo("Libertadores",2011);
    mostrarTitulo(t);
    return 0;
}
