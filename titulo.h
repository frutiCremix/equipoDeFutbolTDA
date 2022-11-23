#ifndef TITULO_H_INCLUDED
#define TITULO_H_INCLUDED

struct TituloEstructura;
typedef struct TituloEstructura *Titulo;

Titulo crearTitulo(char nombreT[20],int anio);

void mostrarTitulo(Titulo t);

#endif // TITULO_H_INCLUDED

