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

/**
    DEFINICION DE LAS FUNCIONES PARA EL JUEGO
*/

void juegoMain(int vec[],int tam){

    int cantDados, nRonda=0, puntaje=0, i, cont=0;
    bool menu = false, ciclo=false;
    char conf='S', nombre[20];
    int lanzamiento; //prueba de ciclos
    cout << "INGRESE SU NOMBRE: ";
    //cin.getline(nombre, 20);
    cin >> nombre;
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
                        break;
                    case 2: cambiarDados(vec, 2);
                        break;
                    case 3: cambiarDados(vec, 3);
                        break;
                    case 4: cambiarDados(vec, 4);
                        break;
                    case 5: cargarDados(vec, tam);
                        break;
                    default: cout << endl << "�Ingrese un numero valido del 1 al 5!" << endl << endl;
                            system("pause");
                    }
                }else{
                    menu = true;
                    lanzamiento = 2; //termina ciclo
                    system("cls");
                     mostrarDados(vec, tam);
                     system("pause");
                }
            }
             cabeceraJuego(vec, tam, nRonda, puntaje, lanzamiento, nombre);
             system("pause");
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
    cout << "\t\tTURNO DE " <<nombre << " | RONDA N�: " << nRonda << " | PUNTAJE: " << puntaje << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "--------------------- LANZAMIENTO N�: "<< lanzamiento << " -----------------------------------------" << endl << endl;
    mostrarDados(vec, tam);
}
