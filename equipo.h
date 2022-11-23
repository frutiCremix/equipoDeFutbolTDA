#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED

struct EquipoEstructura;
typedef struct EquipoEstructura *Equipo;

Equipo crearEquipo(char nombreEquipo[20],char nombreEstadio[50]);

Equipo agregarJugador(Equipo e);

void mostrarEquipo(Equipo e);

void mostrarJugadores(Equipo e);

#endif // EQUIPO_H_INCLUDED
