#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct JugadorEstructura;
typedef struct JugadorEstructura *Jugador;

Jugador crearJugador(int DNI,char nombre[20],char apellido[20]);

void mostrarJugador(Jugador j);

Jugador agregarTitulo(Jugador j);

void mostrarTitulos(Jugador j);

#endif // JUGADOR_H_INCLUDED

