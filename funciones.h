#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
    DECLARACION DE FUNCIONES MEN�
*/
void subMenuJugar(int [], int, string[], int[]);
void subMenuPuntaje(int [], int, string[], int[]);
void subMenuReglamento();
void reglas();
void combinacionesGanadoras();
/**
    DECLARACION DE FUNCIONES DEL JUEGO
*/
void cargarDados(int [], int);
void juegoMain(int [], int, string[], int[]);
void mostrarDados(int [], int);
void tirarDados(int [], int, int);
void cambiarDados(int [], int);
int buscarDadosRepetidos(int [], int, int );///cuenta la cantidad de veces que se repite un //n�mero en el vector
int calcularPuntaje(int [], int);
void cabeceraJuego(int[], int, int, int, int, char[]);
void cargarNombre(char []); /// CARGA NOMBRE
void ponerCero(int [], int); /// PONE EN 0 (CERO) TODAS LAS POSICIONES DEL VECTOR guardarPuntajes
int ultimoJugador(int []); /// BUSCA LA POSICION DEL VECTOR EN 0 (VACIO) Y LO MUESTRA
void guardarDatos(int, char [], string [], int []); /// RECIBE EL NOMBRE Y PUNTOS DEL JUGADOR Y LOS GUARDA EN PUNTAJES
void ordenarPuntaje(int [], string []);/// ORDENAR PUNTAJES MAYOR A MENOR
void mostrarVector(int [], string []); /// MUESTRA LO QUE CONTIENE LAS POSICIONES DEL VECTOR (PUNTAJES)
void copiarVector(int [], int, int[]);
void ordenarDados(int [], int);
void mostrarPuntosParciales(int [], int);

void cargarNombres(char [], char []);/// CARGA 2 NOMBRES

/**
    DECLARACION DE FUNCIONES DE CARTELES
*/
void cartelJugar(); ///cartel MENU jugar
void cartelPuntaje(); /// cartel PUNTAJE
void entreTurno(char [], int, int); /// cartel entre turnos
void cartelGameover(char [], int, int); /// cartel GAME OVER
#endif // FUNCIONES_H_INCLUDED
