#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
    DECLARACION DE FUNCIONES MENÚ
*/
void subMenuJugar(int [], int, char[], int[]);
void subMenuPuntaje(int [], int);
void subMenuReglamento();
void reglas();
void combinacionesGanadoras();
/**
    DECLARACION DE FUNCIONES DEL JUEGO
*/
void cargarDados(int [], int);
void juegoMain(int [], int, char[], int[]);
void mostrarDados(int [], int);
void tirarDados(int [], int, int);
void cambiarDados(int [], int);
int buscarDadosRepetidos(int [], int, int );///cuenta la cantidad de veces que se repite un //número en el vector
int calcularPuntaje(int [], int);
void cabeceraJuego(int[], int, int, int, int, char[]);
void cargarNombre(char nombre[]); /// carga nombre
void entreTurno(char nombre[], int nronda, int puntos); /// cartel entre turnos

/**
    DECLARACION DE FUNCIONES DE CARTELES
*/
void cartelJugar(); ///cartel MENU jugar

#endif // FUNCIONES_H_INCLUDED
