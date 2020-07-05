#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
using namespace std;
#include "funciones.h"

/**
    DEFINICION DE LAS FUNCIONES PARA EL MENU
*/

///Submenu jugar
void subMenuJugar(int vec[], int tam, string guardarNombres[], int guardarPuntajes[]){
    bool menu = false;
    int opc;
    system("cls");
    while(!menu){
        system("cls");
        cartelJugar();
        cout << "1. 1 Jugador " << endl;
        cout << "2. 2 Jugadores " << endl;
        cout << "3. Demo - Ingreso manual de dados " << endl;
        cout << "4. Volver " << endl << endl;
        cout << "Ingrese la opción deseada: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                juegoMain(vec, tam, guardarNombres, guardarPuntajes);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: menu = true;
                break;
            default: cout << "Por favor ingrese una opción válida (1-4)" << endl << endl;
                     system("pause");
        }

    }
}

///Submenu puntajes
void subMenuPuntaje(int vec[], int tam){
    bool menu = false;
    int opc;
    system("cls");
    while(!menu){
        system("cls");
        cout << "\t\t\t\tPUNTAJES" << endl;
        cout << "1 para volver al menú anterior: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1: menu = true;
                break;

            default: cout << "Por favor ingrese una opción válida (1-4)" << endl << endl;
                     system("pause");

        }

    }
}

void subMenuReglamento(){
    bool menu = false;
    int opc;
    system("cls");
    while(!menu){
        system("cls");
        cout << "\t\t\t\tREGLAMENTO Y COMBINACIONES GANADORAS" << endl;
        cout << "1. Reglamento " << endl;
        cout << "2. Combinaciones ganadoras " << endl;
        cout << "3. Volver " << endl << endl;
        cout << "Ingrese la opción deseada: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1: reglas();
                break;
            case 2: combinacionesGanadoras();
                break;
            case 3: menu = true;
                break;
            default: cout << "Ingrese una opción válida (1-3)";
                     system("pause");
        }
    }
}

void reglas(){
    system("cls");
    cout << endl << "\t\t\t\t\tREGLAMENTO DEL JUEGO" << endl << endl << endl;

    cout << "\tEl objetivo del juego es sacar Generala Servida, u obtener la puntuación más alta" << endl;
    cout << "\tde un conjunto de rondas establecidas. " << endl << endl;

    cout << "\tUna ronda puede estar compuesta por hasta tres lanzamientos por jugador." << endl;
    cout << "\tUn lanzamiento consiste en tirar los cinco dados y evaluar sus valores para determinar el puntaje." << endl;
    cout << "\tEn caso que el jugador lo considere puede volver a tirar todos a algunos de los dados en dos oportunidades más." << endl;
    cout << "\tEl sistema preguntará si quiere volver a lanzar,  y si la respuesta es sí," << endl;
    cout << "\tpreguntará cuáles son los dados que quiere elegir para volver a tirar. " << endl << endl;

    cout << "\tEl puntaje de un lanzamiento está determinado por una serie de reglas que figuran" << endl;
    cout << "\ten la sección Combinaciones ganadoras." << endl << endl;

    cout << "\tEl puntaje obtenido se suma al puntaje anterior del jugador. Si un jugador saca" << endl;
    cout << "\tGenerala en el primer tiro gana la partida." << endl << endl << endl << endl;
    system("pause");
}

void combinacionesGanadoras(){
    system("cls");
    cout << endl << "\t\t\t\tCOMBINACIONES GANADORAS" << endl << endl << endl;
    cout << "\t             Combinación             | Nombre jugada |    Puntaje otorgado    " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 ó más dados con valor 1            | Juego de 1    | Suma de la cantidad    " << endl;
    cout << "\t                                     |               | de dados con el valor 1" << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 ó más dados con valor 2            | Juego de 2    | 2*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 2      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 ó más dados con valor 3            | Juego de 3    | 3*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 3      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 ó más dados con valor 4            | Juego de 4    | 4*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 4      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 ó más dados con valor 5            | Juego de 5    | 5*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 5      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 ó más dados con valor 6            | Juego de 6    | 6*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 6      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t5 dados en orden creciente           | Escalera      | 25                     " << endl;
    cout << "\t(1, 2, 3, 4, 5) ó (2,3,4,5,6)        |               |                        " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t3 dados iguales, más otros 2 iguales | Full          | 30                     " << endl;
    cout << "\tEjemplo:                             |               |                        " << endl;
    cout << "\t(3,3,3,2,2), (1,1,4,4,4)             |               |                        " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t 4 dados iguales                     | Póker         | 40                     " << endl;
    cout << "\t Ejemplo:                            |               |                        " << endl;
    cout << "\t(3,3,3,3,2), (1,4,4,4,4)             |               |                        " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t5 dados con el mismo valor           | Generala      | 50                     " << endl;
    cout << "\tEjemplos:                            |               | Si es en un tiro       " << endl;
    cout << "\t(1,1,1,1,1) , (6,6,6,6,6), etc       |               | sólo gana el partido   " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl << endl;

    cout << "\tDe obtener más de una combinación en el mismo lanzamiento, siempre deberá     " << endl;
    cout << "\tsumar el puntaje de mayor valor.                                              " << endl;
    cout << endl << endl;
    system("pause");
}
/**
    DEFINICION DE LAS FUNCIONES PARA EL JUEGO
*/

void juegoMain(int vec[],int tam, string guardarNombres[], int guardarPuntajes[]){

    int cantDados, nRonda=0, puntajeTotal=0, i, cont=0, puntosRonda=0;
    bool menu = false, ciclo=false;
    char conf='S', nombre[25];
    int lanzamiento;
    cargarNombre(nombre); /// CARGA EL NOMBRE
    puntosRonda = calcularPuntaje(vec, tam);
    for(i=0;i<10;i++){
        cargarDados(vec, tam);
        nRonda = i+1;
        lanzamiento = 0; //prueba ciclos
        while(lanzamiento<2){
            lanzamiento++;
            cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento, nombre);
            cout << endl << endl;
            mostrarPuntosParciales(vec, tam);
            cout << "¿CONTINUAR LANZANDO? (S/N): ";
            cin >> conf;
            if(conf=='S' || conf == 's'){
                cout << endl << "¿CUANTOS DADOS VOLVES A TIRAR? (1-5): ";
                cin >> cantDados;
                switch(cantDados){
                    case 1: cambiarDados(vec, 1);
                            puntosRonda = calcularPuntaje(vec, tam);
                        break;
                    case 2: cambiarDados(vec, 2);
                            puntosRonda = calcularPuntaje(vec, tam);
                        break;
                    case 3: cambiarDados(vec, 3);
                            puntosRonda = calcularPuntaje(vec, tam);
                        break;
                    case 4: cambiarDados(vec, 4);
                            puntosRonda = calcularPuntaje(vec, tam);
                        break;
                    case 5: cargarDados(vec, tam);
                            puntosRonda = calcularPuntaje(vec, tam);
                        break;
                    default: cout << endl << "¡Ingrese un numero valido del 1 al 5!" << endl << endl;
                            system("pause");
                    }
                }else{
                    menu = true;
                    lanzamiento = 2; //termina ciclo;
                }
                cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento, nombre);
                system("pause");
            }
            puntajeTotal+=puntosRonda;
            entreTurno(nombre, nRonda, puntosRonda); ///MUESTRA NOMBRE, RONDA, PUNTOS ENTRE RONDAS
        }
        guardarDatos(puntajeTotal, nombre, guardarNombres, guardarPuntajes); ///GUARDA LOS DATOS EN PUNTAJE
        menu = false;
}

void cargarDados(int vec[],int tam){

    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++){
        vec[i] = 1 + (rand()%6);
    }
}

void mostrarDados(int vec[], int tam){
    int i;
    for(i=0;i<tam; i++){
        cout << "\t" << vec[i];
    }
    cout << endl;
}

void tirarDados(int vec[], int cant, int pos){
    int i;
    srand(time(NULL));
    for(i=0;i<cant;i++){
        vec[pos] = 1 + (rand()%6);
    }
}

void cambiarDados(int vec[],int i){
    int j, pos;
    for(j=0; j<i; j++){
        cout << endl << j+1 << " - ¿CUAL? ";
        cin >> pos;
        tirarDados(vec, i, pos-1);
    }
}
int buscarDadosRepetidos(int vec[], int tam, int numero){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(vec[i]==numero) cant++;
        }
    return cant;
}

//Ordena el vector de dados de menor a mayor.
void ordenarDados(int vec[], int tam){
    int i,j, posmin, aux;
    for(i=0;i<tam;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(vec[j]<vec[posmin]) posmin=j;
        }
        aux=vec[i];
        vec[i]=vec[posmin];
        vec[posmin]=aux;
    }
}

//Copia en otro vector el contenido del vector 1
void copiarVector(int vec[], int tam, int v2[]){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=vec[i];
    }
}

//Calcula que tipo de puntaje corresponde por jugada.
int calcularPuntaje(int vec[], int tam){
    int vCopia[tam], puntos;
    int uno, dos, tres, cuatro, cinco, seis;

    copiarVector(vec, tam, vCopia);
    ordenarDados(vCopia,tam);

    if (vCopia[0]==vCopia[1] && vCopia[1]==vCopia[2] && vCopia[2]==vCopia[3] && vCopia[3]==vCopia[4]){ //GENERALA
        puntos=50;
        cout<<endl<<"Se obtuvo: GENERALA"<<endl;
    }
    else{
        if ((vCopia[0]==vCopia[1] && vCopia[1]==vCopia[2] && vCopia[2]==vCopia[3]) || (vCopia[1]==vCopia[2] && vCopia[2]==vCopia[3] && vCopia[3]==vCopia[4])){ //POKER
            puntos=40;
            cout<<endl<<"Se obtuvo: POKER"<<endl;
        }
        else{
            if (((vCopia[0]==vCopia[1] && vCopia[1]==vCopia[2]) && (vCopia[3]==vCopia[4])) || ((vCopia[2]==vCopia[3] && vCopia[3]==vCopia[4]) && (vCopia[0]==vCopia[1]))){ //FULL
                puntos=30;
                cout<<endl<<"Se obtuvo: FULL"<<endl;
            }
            else{
                if (vec[0]==(vec[1]-1) && vec[1]==(vec[2]-1) && vec[2]==(vec[3]-1) && vec[3]==(vec[4]-1)){ //ESCALERA
                    puntos=25;
                    cout<<endl<<"Se obtuvo: ESCALERA"<<endl;
                }
                else{
                    uno = buscarDadosRepetidos(vec, tam, 1)*1;
                    dos = buscarDadosRepetidos(vec, tam, 2)*2;
                    tres = buscarDadosRepetidos(vec, tam, 3)*3;
                    cuatro = buscarDadosRepetidos(vec, tam, 4)*4;
                    cinco = buscarDadosRepetidos(vec, tam, 5)*5;
                    seis = buscarDadosRepetidos(vec, tam, 6)*6;
                    if (seis>uno && seis>dos && seis>tres && seis>cuatro && seis>cinco){
                        puntos=seis;
                    }
                    else{
                        if (cinco>uno && cinco>dos && cinco>tres && cinco>cuatro){
                            puntos=cinco;
                        }
                        else{
                            if (cuatro>uno && cuatro>dos && cuatro>tres){
                                puntos=cuatro;
                            }
                            else{
                                if (tres>uno && tres>dos){
                                    puntos=tres;
                                }
                                else{
                                    if(dos>uno){
                                        puntos=dos;
                                    }
                                    else{
                                        puntos=uno;
                                    }
                                }
                            }
                        }
                    }
                    cout<<endl;
                }
            }
        }
    }
    return puntos;
}

void cabeceraJuego(int vec[], int tam, int nRonda, int puntaje, int lanzamiento, char nombre[]){
    system("cls");
    cout << "\t\tTURNO DE " << nombre << " | RONDA N°: " << nRonda << " | PUNTAJE: " << puntaje << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "--------------------- TE QUEDAN "<< lanzamiento+1 << " LANZAMIENTOS ----------------------------------" << endl << endl;
    mostrarDados(vec, tam);
    cout << endl;
}

/// CARGA NOMBRE
void cargarNombre(char nombre[]){
    cout << endl << endl;
    cout << "\t\t.########..####.########.##....##.##.....##.########.##....##.####.########...#######." << endl;
    cout << "\t\t.##.....##..##..##.......###...##.##.....##.##.......###...##..##..##.....##.##.....##" << endl;
    cout << "\t\t.##.....##..##..##.......####..##.##.....##.##.......####..##..##..##.....##.##.....##" << endl;
    cout << "\t\t.########...##..######...##.##.##.##.....##.######...##.##.##..##..##.....##.##.....##" << endl;
    cout << "\t\t.##.....##..##..##.......##..####..##...##..##.......##..####..##..##.....##.##.....##" << endl;
    cout << "\t\t.##.....##..##..##.......##...###...##.##...##.......##...###..##..##.....##.##.....##" << endl;
    cout << "\t\t.########..####.########.##....##....###....########.##....##.####.########...#######." << endl << endl;
    cout << endl << endl;
    cout<<"Ingrese tu nombre para registrarse: ";
    cin>>nombre;
    cout<< endl;
    cout << nombre<<" listo para continuar?"<< endl << endl;
    system("pause");
}

//RANKIGN DE PUNTAJE
/// PONE EN 0 (CERO) TODAS LAS POSICIONES DEL VECTOR guardarPuntajes
void ponerCero(int guardarPuntajes[], int tam){
    int i;
    for(i=0;i<tam;i++){
        guardarPuntajes[i]=0;
    }
}

/// BUSCA LA POSICION DEL VECTOR EN 0 (VACIO) Y LO DEVUELVE
int ultimoJugador(int puntos[]){
    for (int i=0;i<30;i++){
        if (puntos[i]==0){
            return(i);
        }
    }
}

/// RECIBE EL NOMBRE Y PUNTOS DEL JUGADOR Y LOS ALMACENA EN PUNTAJES
void guardarDatos(int puntos, char nombre[], string guardarNombres[], int guardarPuntajes[]){
     int ultimoregistro;
     ultimoregistro = ultimoJugador(guardarPuntajes);
     guardarPuntajes[ultimoregistro] = puntos;
     guardarNombres[ultimoregistro] = string (nombre);
}

/// ORDENAR PUNTAJES DE MENOR A MAYOR
void ordenarRanking(int guardarPuntajes[], char guardarNombres[]){
    int limite, posmin, auxPuntos;
    char auxNombres;
    limite= ultimoJugador(guardarPuntajes);
    for(int i=0;i<limite;i++){

        for(int x=0;x<limite-1;x++){

            if(guardarPuntajes[x]<guardarPuntajes[i]) {
                auxPuntos = guardarPuntajes[i];
                guardarPuntajes[i] = guardarPuntajes[x];
                guardarPuntajes[x] = auxPuntos;
                auxNombres = guardarNombres[i];
                guardarNombres[i] = guardarPuntajes[x];
                guardarNombres[i] = auxNombres;
            }
        }
    }

}
/**
void ordenarVectorDescendente(int v[], int tam ){
    int i,j, posmax, aux;
    for(i=0;i<tam-1;i++){
        posmax=i;
        for(j=i+1;j<tam;j++){
            if(v[j]>v[posmax]) posmax=j;
        }
        aux=v[i];
        v[i]=v[posmax];
        v[posmax]=aux;
    }
}
*/

/// MUESTRA LO QUE CONTIENE LAS POSICIONES DEL VECTOR (PUNTAJES)
void mostrarVector(int guardarPuntajes[], char guardarNombres[]){

    int i, tam=30;
    void cartelPuntaje();
    for(i=0;i<tam;i++){
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\tJUGADOR " << guardarNombres[i] << " | PUNTAJE: " << guardarPuntajes[i] << endl << endl;
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
        cout<< guardarNombres[i] << "\t";
        cout<< guardarPuntajes[i] << "\t";
    cout << endl << endl;

    }
    system("pause");
}

void mostrarPuntosParciales(int vec[], int tam){
    int puntos = 0;
    puntos = calcularPuntaje(vec, tam);
    cout << "PUNTOS ACTUALES: " << puntos << endl << endl;
}

/// ENTRE TURNOS
void entreTurno(char nombre[], int nronda, int puntos){
    system("cls");
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\tRONDA N° " <<nronda << " | JUGADOR " << nombre << " | PUNTAJE: " << puntos << endl << endl;
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
    system("pause");
}

/// CARTELES
void cartelJugar(){
cout << endl << endl;
    cout << "\t\t.......##.##.....##..######......###....########.." << endl;
    cout << "\t\t.......##.##.....##.##....##....##.##...##.....##." << endl;
    cout << "\t\t.......##.##.....##.##.........##...##..##.....##." << endl;
    cout << "\t\t.......##.##.....##.##...####.##.....##.########.." << endl;
    cout << "\t\t.##....##.##.....##.##....##..#########.##...##..." << endl;
    cout << "\t\t.##....##.##.....##.##....##..##.....##.##....##.." << endl;
    cout << "\t\t..######...#######...######...##.....##.##.....##." << endl << endl;
    cout << endl << endl;
}

void cartelPuntaje(){
cout << endl << endl;
    cout << "\t\t.########..##.....##.##....##.########....###..........##.########..######.." << endl;
    cout << "\t\t.##.....##.##.....##.###...##....##......##.##.........##.##.......##....##." << endl;
    cout << "\t\t.##.....##.##.....##.####..##....##.....##...##........##.##.......##......." << endl;
    cout << "\t\t.########..##.....##.##.##.##....##....##.....##.......##.######....######.." << endl;
    cout << "\t\t.##........##.....##.##..####....##....#########.##....##.##.............##." << endl;
    cout << "\t\t.##........##.....##.##...###....##....##.....##.##....##.##.......##....##." << endl;
    cout << "\t\t.##.........#######..##....##....##....##.....##..######..########..######.." << endl << endl;
    cout << endl << endl;
}
