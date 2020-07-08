#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
    DECLARACION DE FUNCIONES MENÚ
*/
void subMenuJugar(int [], int, string[], int[]);
void subMenuPuntaje(string[], int[]);
void subMenuReglamento();
void reglas();
void combinacionesGanadoras();

/**
    DECLARACION DE FUNCIONES DEL JUEGO
*/
void cargarDados(int [], int);
void juegoMain(int [], int, string[], int[]);
void juegoManual(int [], int, string[], int[]);
void mostrarDados(int [], int);
void tirarDados(int [], int, int);
void cambiarDados(int [], int);
int buscarDadosRepetidos(int [], int, int );///cuenta la cantidad de veces que se repite un //número en el vector
int calcularPuntaje(int [], int);
void cargarNombre(char []); /// CARGA NOMBRE
void ponerCero(int [], int); /// PONE EN 0 (CERO) TODAS LAS POSICIONES DEL VECTOR guardarPuntajes
int ultimoJugador(int []); /// BUSCA LA POSICION DEL VECTOR EN 0 (VACIO) Y LO MUESTRA
void guardarDatos(int, char [], string [], int []); /// RECIBE EL NOMBRE Y PUNTOS DEL JUGADOR Y LOS GUARDA EN PUNTAJES
void ordenarPuntaje(int [], string []);/// ORDENAR PUNTAJES MAYOR A MENOR
void mostrarVector(int [], string []); /// MUESTRA LO QUE CONTIENE LAS POSICIONES DEL VECTOR (PUNTAJES)
void copiarVector(int [], int, int[]);
void ordenarDados(int [], int);
void mostrarPuntosParciales(int [], int);
void juegoMainDos(int [], int, string[], int[]);/// MODO 2 JUGADORES
void guardarDatosDos(int, int, char [], char [], string [], int []);/// RECIBE AMBOS NOMBRES Y PUNTOS DE LOS JUGADORES Y LOS GUARDA EN PUNTAJES
void cargarNombreDos(char [], char []);/// CARGA 2 NOMBRES
void cargarDadosManual(int [], int);
void tirarDadosManual(int [], int, int, int);
void cambiarDadosManual(int [], int);
int validarIngreso(int, int , int );

/**
    DECLARACION DE FUNCIONES DE CARTELES
*/
void cabeceraJuego(int[], int, int, int, int, char[]);
void cartelJugar(); ///cartel MENU jugar
void cartelPuntaje(); /// cartel PUNTAJE
void entreTurno(char [], int, int, bool); /// cartel entre turnos
void cartelGameover(char [], int, int); /// cartel GAME OVER
void cartelGenerala(char [], int, int); /// cartel GENERALA
void entreTurnoDos(char [],char [], int, int, int, bool); /// cartel entre turnos dos
void cartelGameoverDos(char [],char [], int, int, int); /// cartel GAME OVER DOS
#endif // FUNCIONES_H_INCLUDED
