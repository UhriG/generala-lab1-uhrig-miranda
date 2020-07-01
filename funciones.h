#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
    DECLARACION DE FUNCIONES MENÚ
*/
void subMenuJugar(int [], int);
void subMenuPuntaje(int [], int);

/**
    DECLARACION DE FUNCIONES DEL JUEGO
*/
void cargarDados(int [], int);
void juegoMain(int [], int);
void mostrarDados(int [], int);
void tirarDados(int [], int, int);
void cambiarDados(int [], int);
int buscarDadosrepetidos(int v[], int tam , int numero);///cuenta la cantidad de veces que se repite un //número en el vector

#endif // FUNCIONES_H_INCLUDED
