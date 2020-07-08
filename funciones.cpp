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
        opc = validarIngreso(opc, 1, 4);
        system("cls");
        switch(opc){
            case 1:
                juegoMain(vec, tam, guardarNombres, guardarPuntajes);
                break;
            case 2:
                juegoMainDos(vec, tam, guardarNombres, guardarPuntajes);
                break;
            case 3: juegoManual(vec, tam, guardarNombres, guardarPuntajes);
                break;
            case 4: menu = true;
                break;
        }

    }
}

///Submenu puntajes
void subMenuPuntaje(string guardarNombres[], int guardarPuntajes[]){
    cartelPuntaje();
    ordenarPuntaje(guardarPuntajes, guardarNombres);
    mostrarVector(guardarPuntajes, guardarNombres);
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
        opc = validarIngreso(opc, 1, 3);
        system("cls");
        switch(opc){
            case 1: reglas();
                break;
            case 2: combinacionesGanadoras();
                break;
            case 3: menu = true;
                break;
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


/**
    JUEGO DE UN JUGADOR
*/
void juegoMain(int vec[],int tam, string guardarNombres[], int guardarPuntajes[]){

    int cantDados, nRonda=0, puntajeTotal=0, i, puntosRonda=0, lanzamiento;
    char conf='S', nombre[25];
    bool generalaServida = true, mostrarEntreTurno = true;
    cargarNombre(nombre); /// CARGA EL NOMBRE

    for(i=0;i<10 && generalaServida;i++){
        cargarDados(vec, tam);
        puntosRonda = calcularPuntaje(vec, tam);
        nRonda = i+1;
        lanzamiento = 2; //prueba ciclos
        while(lanzamiento>0){
            if(puntosRonda==50){
                lanzamiento = -1;
                generalaServida = false;
                puntajeTotal += 1000;
                mostrarEntreTurno = false;
                cartelGenerala(nombre, nRonda, puntajeTotal);
            }else{
                lanzamiento--;
                cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento, nombre);
                cout << endl << endl;
                mostrarPuntosParciales(vec, tam);
                cout << "¿CONTINUAR LANZANDO? (S/N): ";
                cin >> conf;
                while(conf!='S' && conf!='s' && conf!='N' && conf!='n'){
                    cout << "\nIngrese una opcion valida!" << endl;
                    cin >> conf;
                }
                if(conf=='S' || conf == 's'){
                    cout << endl << "¿CUANTOS DADOS VOLVES A TIRAR? (1-5): ";
                    cantDados = validarIngreso(cantDados, 1, 5);
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
                        }
                    }else{
                        puntosRonda = calcularPuntaje(vec, tam);
                        lanzamiento = -1; //termina ciclo;
                    }
                    cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento, nombre);
                    system("pause");
                }

            }
            entreTurno(nombre, nRonda, puntosRonda, mostrarEntreTurno); ///MUESTRA NOMBRE, RONDA, PUNTOS ENTRE RONDAS
            puntajeTotal+=puntosRonda;
        }
        //puntajeTotal+=puntosRonda;

        if(nRonda==10){
            cartelGameover(nombre, nRonda, puntajeTotal);
        }

        guardarDatos(puntajeTotal, nombre, guardarNombres, guardarPuntajes); ///GUARDA LOS DATOS EN PUNTAJE
}

/**
    JUEGO DE DOS JUGADORES
*/
void juegoMainDos(int vec[],int tam, string guardarNombres[], int guardarPuntajes[]){

    int cantDados, nRonda=0, puntajeTotalUno=0, puntajeTotalDos=0, i, puntosRonda=0, lanzamiento;
    char conf='S', nombreUno[25], nombreDos[25];
    bool generalaServida = true, mostrarEntreTurno = true, proximoTurno;
    //char nombre[25]; ///la declare para que me deje correr todo
    cargarNombreDos(nombreUno, nombreDos); /// CARGA 2 NOMBRES

    for(i=0;i<10 && generalaServida;i++){
        cargarDados(vec, tam);
        puntosRonda = calcularPuntaje(vec, tam);
        nRonda = i+1;
        lanzamiento = 2; //prueba ciclos

        /// Comienza ciclo del primer jugador
        while(lanzamiento>0){
            if(lanzamiento == 2 && puntosRonda==50){
                lanzamiento = -1;
                generalaServida = false;
                puntajeTotalUno += 1000;
                mostrarEntreTurno = false;
                cartelGenerala(nombreUno, nRonda, puntajeTotalUno);
            }else{
                lanzamiento--;
                cabeceraJuego(vec, tam, nRonda, puntajeTotalUno, lanzamiento, nombreUno);
                cout << endl << endl;
                mostrarPuntosParciales(vec, tam);
                cout << "¿CONTINUAR LANZANDO? (S/N): ";
                cin >> conf;
                while(conf!='S' && conf!='s' && conf!='N' && conf!='n'){
                    cout << "\nIngrese una opcion valida!" << endl;
                    cin >> conf;
                }
                if(conf=='S' || conf == 's'){
                    cout << endl << "¿CUANTOS DADOS VOLVES A TIRAR? (1-5): ";
                    cantDados = validarIngreso(cantDados, 1 ,5);
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
                        }
                    }else{
                        puntosRonda = calcularPuntaje(vec, tam);
                        lanzamiento = -1; //termina ciclo;
                    }
                    cabeceraJuego(vec, tam, nRonda, puntajeTotalUno, lanzamiento, nombreUno);
                    system("pause");
                }

            }
            puntajeTotalUno+=puntosRonda;
            cargarDados(vec, tam);
            puntosRonda = calcularPuntaje(vec, tam);
            lanzamiento = 2;
            proximoTurno = true;
            entreTurnoDos(nombreUno, nombreDos, nRonda, puntajeTotalUno, puntajeTotalDos, proximoTurno);///MUESTRA NOMBRE, RONDA, PUNTOS ENTRE RONDAS

            /// Comienza ciclo del segudo jugador
            while(lanzamiento>0){
            if(lanzamiento == 2 && puntosRonda==50){
                lanzamiento = -1;
                generalaServida = false;
                puntajeTotalDos += 1000;
                mostrarEntreTurno = false;
                cartelGenerala(nombreDos, nRonda, puntajeTotalDos);
            }else{
                lanzamiento--;
                cabeceraJuego(vec, tam, nRonda, puntajeTotalDos, lanzamiento, nombreDos);
                cout << endl << endl;
                mostrarPuntosParciales(vec, tam);
                cout << "¿CONTINUAR LANZANDO? (S/N): ";
                cin >> conf;
                while(conf!='S' && conf!='s' && conf!='N' && conf!='n'){
                    cout << "\nIngrese una opcion valida!" << endl;
                    cin >> conf;
                }
                if(conf=='S' || conf == 's'){
                    cout << endl << "¿CUANTOS DADOS VOLVES A TIRAR? (1-5): ";
                    cantDados = validarIngreso(cantDados, 1, 5);
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
                        }
                    }else{
                        puntosRonda = calcularPuntaje(vec, tam);
                        lanzamiento = -1; //termina ciclo;
                    }
                    cabeceraJuego(vec, tam, nRonda, puntajeTotalDos, lanzamiento, nombreDos);
                    system("pause");
                }

            }
            proximoTurno = false;
            puntajeTotalDos+=puntosRonda;
            entreTurnoDos(nombreUno, nombreDos, nRonda, puntajeTotalUno, puntajeTotalDos, proximoTurno);///MUESTRA NOMBRE, RONDA, PUNTOS ENTRE RONDAS

        }


        if(nRonda==10){
            cartelGameoverDos(nombreUno, nombreDos, nRonda, puntajeTotalUno, puntajeTotalDos);///CARTEL GAME OVER DOS JUGADORES
        }
        guardarDatosDos(puntajeTotalUno, puntajeTotalDos, nombreUno, nombreDos, guardarNombres, guardarPuntajes); ///GUARDA LOS DATOS EN PUNTAJE
}


/**
    JUEGO CON DADOS MANUALES
*/

void juegoManual(int vec[],int tam, string guardarNombres[], int guardarPuntajes[]){
    ponerCero(vec, tam);
    int cantDados, nRonda=0, puntajeTotal=0, i, puntosRonda=0, lanzamiento;
    char conf, nombre[25];
    bool generalaServida = true, mostrarEntreTurno = true;
    cargarNombre(nombre); /// CARGA EL NOMBRE

    for(i=0;i<10 && generalaServida;i++){
        lanzamiento = 3; //prueba ciclos
        nRonda = i+1;
        ponerCero(vec, tam);
        cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento-1, nombre);
        cargarDadosManual(vec, tam);
        puntosRonda = calcularPuntaje(vec, tam);
        while(lanzamiento>0){
            if(lanzamiento == 3 && puntosRonda==50){
                lanzamiento = -1;
                generalaServida = false;
                puntajeTotal += 1000;
                mostrarEntreTurno = false;
                cartelGenerala(nombre, nRonda, puntajeTotal);
            }
            else{
                lanzamiento--;
                cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento, nombre);
                cout << endl << endl;
                mostrarPuntosParciales(vec, tam);
                cout << "¿CONTINUAR LANZANDO? (S/N): ";
                cin >> conf;
                while(conf!='S' && conf!='s' && conf!='N' && conf!='n'){
                    cout << "\nIngrese una opcion valida!" << endl;
                    cin >> conf;
                }
                if(conf=='S' || conf == 's'){
                    cout << endl << "¿CUANTOS DADOS VOLVES A TIRAR? (1-5): ";
                    cantDados = validarIngreso(cantDados, 1, 5);
                    switch(cantDados){
                        case 1: cambiarDadosManual(vec, 1);
                                puntosRonda = calcularPuntaje(vec, tam);
                            break;
                        case 2: cambiarDadosManual(vec, 2);
                                puntosRonda = calcularPuntaje(vec, tam);
                            break;
                        case 3: cambiarDadosManual(vec, 3);
                                puntosRonda = calcularPuntaje(vec, tam);
                            break;
                        case 4: cambiarDadosManual(vec, 4);
                                puntosRonda = calcularPuntaje(vec, tam);
                            break;
                        case 5: cargarDadosManual(vec, tam);
                                puntosRonda = calcularPuntaje(vec, tam);
                            break;
                        }
                    }else{
                        puntosRonda = calcularPuntaje(vec, tam);
                        lanzamiento = -1; //termina ciclo;
                    }
                    cabeceraJuego(vec, tam, nRonda, puntajeTotal, lanzamiento, nombre);
                    system("pause");
                }
                //ponerCero(vec, tam);
            }

            entreTurno(nombre, nRonda, puntosRonda, mostrarEntreTurno); ///MUESTRA NOMBRE, RONDA, PUNTOS ENTRE RONDAS
            puntajeTotal+=puntosRonda;
        }


        if(nRonda==10){
            cartelGameover(nombre, nRonda, puntajeTotal);
        }
        guardarDatos(puntajeTotal, nombre, guardarNombres, guardarPuntajes); ///GUARDA LOS DATOS EN PUNTAJE
}

void cargarDados(int vec[],int tam){

    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++){
        vec[i] = 1 + (rand()%6);
    }
}

int validarIngreso(int j, int menor, int mayor){
    //validamos que el ingreso sea un entero y entre el 1 y el 6
    while(!(cin >> j) || (j < menor || j > mayor)){
        //le indicamos el error al usuario
        cout << "\nError: Ingrese un numero del " << menor << " al " << mayor << " por favor: ";
        //limpiamos el ultimo ingreso
        cin.clear();
        //descartamos el ultimo ingreso
        cin.ignore(132, '\n');
    }
    return j;
}

void cargarDadosManual(int vec[], int tam){

    int i, j, menor=1, mayor=6;
    for(i=0;i<tam;i++){
        cout << "Ingrese un valor para el dado n° " << i+1 << " (1-6): ";
        j = validarIngreso(j, menor, mayor);
        vec[i] = j;
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

void tirarDadosManual(int vec[], int cant, int pos, int valor){
    int i;
    for(i=0;i<cant;i++){
        vec[pos] = valor;
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

void cambiarDadosManual(int vec[], int cant){
    int i, pos, valor;
    for(i=0; i<cant; i++){
        cout << endl << i+1 << " - ¿CUAL? ";
        pos = validarIngreso(pos, 1, 5);
        cout << endl << "POR QUE VALOR? ";
        valor = validarIngreso(valor, 1, 6);
        tirarDadosManual(vec, cant, pos-1, valor);
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
        cout << endl<<"Se obtuvo: GENERALA" << endl;
    }
    else{
        if ((vCopia[0]==vCopia[1] && vCopia[1]==vCopia[2] && vCopia[2]==vCopia[3]) || (vCopia[1]==vCopia[2] && vCopia[2]==vCopia[3] && vCopia[3]==vCopia[4])){ //POKER
            puntos=40;
            cout << endl << "Se obtuvo: POKER" << endl;
        }
        else{
            if (((vCopia[0]==vCopia[1] && vCopia[1]==vCopia[2]) && (vCopia[3]==vCopia[4])) || ((vCopia[2]==vCopia[3] && vCopia[3]==vCopia[4]) && (vCopia[0]==vCopia[1]))){ //FULL
                puntos=30;
                cout << endl << "Se obtuvo: FULL" << endl;
            }
            else{
                if (vCopia[0]==(vCopia[1]-1) && vCopia[1]==(vCopia[2]-1) && vCopia[2]==(vCopia[3]-1) && vCopia[3]==(vCopia[4]-1)){ //ESCALERA
                    puntos=25;
                    cout << endl << "Se obtuvo: ESCALERA" << endl;
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
    cout << "---------------------------------------------------------------------------------" << endl;
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
    cout<<"Ingrese su nombre para registrarse: ";
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

/// RECIBE EL NOMBRE Y PUNTOS DEL JUGADOR Y LOS GUARDA EN PUNTAJES
void guardarDatos(int puntos, char nombre[], string guardarNombres[], int guardarPuntajes[]){
     int ultimoRegistro;
     ultimoRegistro = ultimoJugador(guardarPuntajes);
     guardarPuntajes[ultimoRegistro] = puntos;
     guardarNombres[ultimoRegistro] = string (nombre);
}

/// ORDENAR PUNTAJES DE MAYOR A MENOR
void ordenarPuntaje(int guardarPuntajes[], string guardarNombres[]){
    int i,j, posmax;
    int limite, auxPuntos;
    string auxNombres;
    limite = ultimoJugador(guardarPuntajes);
    for(i=0; i < limite-1; i++){
        posmax=i;
        for(j=i+1; j < limite; j++){
            if(guardarPuntajes[j] > guardarPuntajes[posmax]) posmax=j;
        }
        auxPuntos = guardarPuntajes[i];
        guardarPuntajes[i] = guardarPuntajes[posmax];
        guardarPuntajes[posmax] = auxPuntos;

        auxNombres = guardarNombres[i];
        guardarNombres[i] = guardarNombres[posmax];
        guardarNombres[posmax] = auxNombres;
    }
}

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

/// MUESTRA LO QUE CONTIENE LAS POSICIONES DEL VECTOR (PUNTAJES)
void mostrarVector(int guardarPuntajes[], string guardarNombres[]){

    int i, tam=10;
    void cartelPuntaje();
    cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
    for(i=0;i<tam;i++){

    cout << "\t\t\t\t\t"<< i+1 << " - JUGADOR " << guardarNombres[i] << " | PUNTAJE: " << guardarPuntajes[i] << endl << endl;

    }
    cout << "\t\t----------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
    system("pause");
}

void mostrarPuntosParciales(int vec[], int tam){
    int puntos = 0;
    puntos = calcularPuntaje(vec, tam);
    cout << "PUNTOS ACTUALES: " << puntos << endl << endl;
}

/// ENTRE TURNOS
void entreTurno(char nombre[], int nronda, int puntos, bool estado){
    if(estado==true){
        system("cls");
        cout << "---------------------------------------------------------------------------------" << endl << endl;
        cout << "\t\tRONDA N° " <<nronda << " | JUGADOR " << nombre << " | PUNTAJE: " << puntos << endl << endl;
        cout << "---------------------------------------------------------------------------------" << endl << endl;
        cout << endl << endl;
        system("pause");
    }
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

void cartelGameover(char nombre[], int nronda, int puntos){
    system("cls");
    cout << endl << endl;
    cout << "\t\t..######......###....##.....##.########.....#######..##.....##.########.########.." << endl;
    cout << "\t\t.##....##....##.##...###...###.##..........##.....##.##.....##.##.......##.....##." << endl;
    cout << "\t\t.##.........##...##..####.####.##..........##.....##.##.....##.##.......##.....##." << endl;
    cout << "\t\t.##...####.##.....##.##.###.##.######......##.....##.##.....##.######...########.." << endl;
    cout << "\t\t.##....##..#########.##.....##.##..........##.....##..##...##..##.......##...##..." << endl;
    cout << "\t\t.##....##..##.....##.##.....##.##..........##.....##...##.##...##.......##....##.." << endl;
    cout << "\t\t..######...##.....##.##.....##.########.....#######.....###....########.##.....##." << endl << endl;
    cout << endl << endl;
    cout << "\t\t\tNO CONSEGUISTE SACAR GENERALA SERVIDA :( MEJOR SUERTE LA PROXIMA!" << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\tRONDAS TOTALES: " <<nronda << " | JUGADOR: " << nombre << " | PUNTAJE TOTAL: " << puntos << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
    system("pause");
}

void cartelGenerala(char nombre [], int nRonda, int puntos){
    system("cls");
    cout << "GENERALA GANASTE" << endl << endl;
    system("pause");
} /// cartel GENERALA

/**
    DEFINICION DE LAS FUNCIONES PARA EL MODO 2 JUGADORES
*/

/// CARGA 2 NOMBRES
void cargarNombreDos(char nombreUno[], char nombreDos[]){
    cout << endl << endl;
    cout << "\t\t.########..####.########.##....##.##.....##.########.##....##.####.########...#######...######." << endl;
    cout << "\t\t.##.....##..##..##.......###...##.##.....##.##.......###...##..##..##.....##.##.....##.##....##" << endl;
    cout << "\t\t.##.....##..##..##.......####..##.##.....##.##.......####..##..##..##.....##.##.....##.##......" << endl;
    cout << "\t\t.########...##..######...##.##.##.##.....##.######...##.##.##..##..##.....##.##.....##..######." << endl;
    cout << "\t\t.##.....##..##..##.......##..####..##...##..##.......##..####..##..##.....##.##.....##.......##" << endl;
    cout << "\t\t.##.....##..##..##.......##...###...##.##...##.......##...###..##..##.....##.##.....##.##....##" << endl;
    cout << "\t\t.########..####.########.##....##....###....########.##....##.####.########...#######...######." << endl << endl;
    cout << endl << endl;
    cout<<"1er Jugador ingrese su nombre para registrarse: ";
    cin>>nombreUno;
    cout<< endl;
    cout<<"2do Jugador ingrese su nombre para registrarse: ";
    cin>>nombreDos;
    cout<< endl;
    cout << nombreUno<<" y "<< nombreDos<<" listos para continuar?"<< endl << endl;
    system("pause");
}

/// RECIBE LOS NOMBRES Y PUNTOS DEL JUGADOR 1, JUGADOR 2 Y LOS GUARDA EN PUNTAJES
void guardarDatosDos(int puntosUno, int puntosDos, char nombreUno[], char nombreDos[], string guardarNombres[], int guardarPuntajes[]){
     int ultimoRegistro, ultimoRegistro2;
     ultimoRegistro = ultimoJugador(guardarPuntajes);
     guardarPuntajes[ultimoRegistro] = puntosUno;
     guardarNombres[ultimoRegistro] = string (nombreUno);
///GUARDA EL 2DO JUGADOR
     ultimoRegistro2 = ultimoJugador(guardarPuntajes);
     guardarPuntajes[ultimoRegistro2] = puntosDos;
     guardarNombres[ultimoRegistro2] = string (nombreDos);
}
/// cartel entre turnos dos
void entreTurnoDos(char nombreUno[],char nombreDos[], int nRonda, int puntosUno, int puntosDos, bool proximoTurno){
    system("cls");

    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\tRONDA N° " << nRonda << endl << endl;
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    if(proximoTurno==true){
        cout << "\t\t\tPROXIMO TURNO " << nombreDos << endl << endl;
    }else{
        cout << "\t\t\tPROXIMO TURNO " << nombreUno << endl << endl;
    }
    cout << "\t\tJUGADOR N° 1: " << nombreUno << " | PUNTAJE: " << puntosUno << endl << endl;
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\tJUGADOR N° 2: " << nombreDos << " | PUNTAJE: " << puntosDos << endl << endl;
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << endl << endl;
    system("pause");
}
/// cartel GAME OVER DOS
void cartelGameoverDos(char nombreUno[],char nombreDos[], int nRonda, int puntosUno, int puntosDos){
    system("cls");
    int primero, segundo;
    primero = puntosUno;
    segundo = puntosDos;

    cout << endl << endl;
    cout << "\t\t..######......###....##.....##.########.....#######..##.....##.########.########.." << endl;
    cout << "\t\t.##....##....##.##...###...###.##..........##.....##.##.....##.##.......##.....##." << endl;
    cout << "\t\t.##.........##...##..####.####.##..........##.....##.##.....##.##.......##.....##." << endl;
    cout << "\t\t.##...####.##.....##.##.###.##.######......##.....##.##.....##.######...########.." << endl;
    cout << "\t\t.##....##..#########.##.....##.##..........##.....##..##...##..##.......##...##..." << endl;
    cout << "\t\t.##....##..##.....##.##.....##.##..........##.....##...##.##...##.......##....##.." << endl;
    cout << "\t\t..######...##.....##.##.....##.########.....#######.....###....########.##.....##." << endl << endl;
    cout << endl << endl;
    cout << "\t\t\tNO CONSEGUIERON SACAR GENERALA SERVIDA :( MEJOR SUERTE LA PROXIMA!" << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\tRONDAS TOTALES: " <<nRonda << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;
    if(primero > segundo){

    cout << "\t\t\t\tGANADOR JUGADOR: " << nombreUno << " | PUNTAJE TOTAL: " << puntosUno << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\tPERDEDOR JUGADOR: " << nombreDos << " | PUNTAJE TOTAL: " << puntosDos << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;

    }else{

    cout << "\t\t\t\tGANADOR JUGADOR: " << nombreDos << " | PUNTAJE TOTAL: " << puntosDos << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\tPERDEDOR JUGADOR: " << nombreUno << " | PUNTAJE TOTAL: " << puntosUno << endl << endl;
    cout << "\t\t---------------------------------------------------------------------------------" << endl << endl;

    }
    cout << endl << endl;
    system("pause");
}
