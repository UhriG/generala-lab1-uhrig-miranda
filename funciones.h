#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
    DECLARACION DE FUNCIONES MEN�
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
int buscarDadosRepetidos(int [], int, int );///cuenta la cantidad de veces que se repite un //n�mero en el vector
int calcularPuntaje(int [], int);
#endif // FUNCIONES_H_INCLUDED
