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
void subMenuJugar(int vec[], int tam){
    bool menu = false;
    int opc;
    system("cls");
    while(!menu){
        system("cls");
        cout << "\t\t\t\tJugar" << endl;
        cout << "1. 1 Jugador " << endl;
        cout << "2. 2 Jugadores " << endl;
        cout << "3. Demo - Ingreso manual de dados " << endl;
        cout << "4. Volver " << endl << endl;
        cout << "Ingrese la opci�n deseada: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1:
                juegoMain(vec, tam);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: menu = true;
                break;
            default: cout << "Por favor ingrese una opci�n v�lida (1-4)" << endl << endl;
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
        cout << "1 para volver al men� anterior: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1: menu = true;
                break;

            default: cout << "Por favor ingrese una opci�n v�lida (1-4)" << endl << endl;
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
        cout << "Ingrese la opci�n deseada: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1: reglas();
                break;
            case 2: combinacionesGanadoras();
                break;
            case 3: menu = true;
                break;
            default: cout << "Ingrese una opci�n v�lida (1-3)";
                     system("pause");
        }
    }
}

void reglas(){
    system("cls");
    cout << endl << "\t\t\t\t\tREGLAMENTO DEL JUEGO" << endl << endl << endl;

    cout << "\tEl objetivo del juego es sacar Generala Servida, u obtener la puntuaci�n m�s alta" << endl;
    cout << "\tde un conjunto de rondas establecidas. " << endl << endl;

    cout << "\tUna ronda puede estar compuesta por hasta tres lanzamientos por jugador." << endl;
    cout << "\tUn lanzamiento consiste en tirar los cinco dados y evaluar sus valores para determinar el puntaje." << endl;
    cout << "\tEn caso que el jugador lo considere puede volver a tirar todos a algunos de los dados en dos oportunidades m�s." << endl;
    cout << "\tEl sistema preguntar� si quiere volver a lanzar,  y si la respuesta es s�," << endl;
    cout << "\tpreguntar� cu�les son los dados que quiere elegir para volver a tirar. " << endl << endl;

    cout << "\tEl puntaje de un lanzamiento est� determinado por una serie de reglas que figuran" << endl;
    cout << "\ten la secci�n Combinaciones ganadoras." << endl << endl;

    cout << "\tEl puntaje obtenido se suma al puntaje anterior del jugador. Si un jugador saca" << endl;
    cout << "\tGenerala en el primer tiro gana la partida." << endl << endl << endl << endl;
    system("pause");
}

void combinacionesGanadoras(){
    system("cls");
    cout << endl << "\t\t\t\tCOMBINACIONES GANADORAS" << endl << endl << endl;
    cout << "\t             Combinaci�n             | Nombre jugada |    Puntaje otorgado    " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 � m�s dados con valor 1            | Juego de 1    | Suma de la cantidad    " << endl;
    cout << "\t                                     |               | de dados con el valor 1" << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 � m�s dados con valor 2            | Juego de 2    | 2*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 2      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 � m�s dados con valor 3            | Juego de 3    | 3*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 3      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 � m�s dados con valor 4            | Juego de 4    | 4*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 4      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 � m�s dados con valor 5            | Juego de 5    | 5*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 5      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t1 � m�s dados con valor 6            | Juego de 6    | 6*suma cantidad de     " << endl;
    cout << "\t                                     |               | dados con valor 6      " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t5 dados en orden creciente           | Escalera      | 25                     " << endl;
    cout << "\t(1, 2, 3, 4, 5) � (2,3,4,5,6)        |               |                        " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t3 dados iguales, m�s otros 2 iguales | Full          | 30                     " << endl;
    cout << "\tEjemplo:                             |               |                        " << endl;
    cout << "\t(3,3,3,2,2), (1,1,4,4,4)             |               |                        " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t 4 dados iguales                     | P�ker         | 40                     " << endl;
    cout << "\t Ejemplo:                            |               |                        " << endl;
    cout << "\t(3,3,3,3,2), (1,4,4,4,4)             |               |                        " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl;
    cout << "\t5 dados con el mismo valor           | Generala      | 50                     " << endl;
    cout << "\tEjemplos:                            |               | Si es en un tiro       " << endl;
    cout << "\t(1,1,1,1,1) , (6,6,6,6,6), etc       |               | s�lo gana el partido   " << endl;
    cout << "\t------------------------------------------------------------------------------" << endl << endl;

    cout << "\tDe obtener m�s de una combinaci�n en el mismo lanzamiento, siempre deber�     " << endl;
    cout << "\tsumar el puntaje de mayor valor.                                              " << endl;
    cout << endl << endl;
    system("pause");
}
/**
    DEFINICION DE LAS FUNCIONES PARA EL JUEGO
*/

void juegoMain(int vec[],int tam){

    int cantDados, nRonda=0, puntaje=0, i, cont=0, puntos=0;
    bool menu = false, ciclo=false;
    char conf='S', nombre[25];
    int lanzamiento;
    puntos = calcularPuntaje(vec, tam);
    puntaje+=puntos;
    for(i=0;i<10;i++){
        cargarDados(vec, tam);
        nRonda = i+1;
        lanzamiento = 0; //prueba ciclos
        while(lanzamiento<2){
            lanzamiento++;
            cabeceraJuego(vec, tam, nRonda, puntaje, lanzamiento, nombre);
            cout << endl << endl;
            cout << "�CONTINUAR LANZANDO? (S/N): ";
            cin >> conf;
            if(conf=='S' || conf == 's'){
                cout << endl << "�CUANTOS DADOS VOLVES A TIRAR? (1-5): ";
                cin >> cantDados;
                switch(cantDados){
                    case 1: cambiarDados(vec, 1);
                            puntos = calcularPuntaje(vec, tam);
                            puntaje+=puntos;
                        break;
                    case 2: cambiarDados(vec, 2);
                        puntos = calcularPuntaje(vec, tam);
                            puntaje+=puntos;
                        break;
                    case 3: cambiarDados(vec, 3);
                            puntos = calcularPuntaje(vec, tam);
                            puntaje+=puntos;
                        break;
                    case 4: cambiarDados(vec, 4);
                            puntos = calcularPuntaje(vec, tam);
                            puntaje+=puntos;
                        break;
                    case 5: cargarDados(vec, tam);
                            puntos = calcularPuntaje(vec, tam);
                            puntaje+=puntos;
                        break;
                    default: cout << endl << "�Ingrese un numero valido del 1 al 5!" << endl << endl;
                            system("pause");
                    }
                }else{
                    menu = true;
                    lanzamiento = 2; //termina ciclo;
                }
                cabeceraJuego(vec, tam, nRonda, puntaje, lanzamiento, nombre);
                system("pause");
            }
        }
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
        cout << endl << j+1 << " - �CUAL? ";
        cin >> pos;
        tirarDados(vec, i, pos-1);
    }
}
int buscarDadosRepetidos(int v[], int tam, int numero){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

int calcularPuntaje(int v[], int tam){
    int i, cant, puntos;
    for(i=0;i<tam; i++){
        cant = buscarDadosRepetidos(v, tam, i+1);
        if(cant==5){
            int puntos = 50; //Generala
        }
        if(cant==4){
            puntos = 40; //Poker
        }
    }

    int uno = buscarDadosRepetidos(v, tam, 1)*1;
    int dos = buscarDadosRepetidos(v, tam, 2)*2;
    int tres = buscarDadosRepetidos(v, tam, 2)*3;
    int cuatro = buscarDadosRepetidos(v, tam, 2)*4;
    int cinco = buscarDadosRepetidos(v, tam, 2)*5;
    int seis = buscarDadosRepetidos(v, tam, 2)*6;

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

    return puntos;
}

void cabeceraJuego(int vec[], int tam, int nRonda, int puntaje, int lanzamiento, char nombre[]){
    system("cls");
    cout << "\t\tTURNO DE " << nombre << " | RONDA N�: " << nRonda << " | PUNTAJE: " << puntaje << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "--------------------- LANZAMIENTO N�: "<< lanzamiento+1 << " -----------------------------------------" << endl << endl;
    mostrarDados(vec, tam);
    cout << endl;
}
