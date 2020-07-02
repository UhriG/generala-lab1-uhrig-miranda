#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

#include "funciones.h"

int main()
{
    setlocale(LC_ALL, "");
    system("color 0a");
    const int tam = 5;
    int vec[tam];
    cargarDados(vec, tam);
    int opc;
    char sn;

    while(true){
        system("cls");
        cout << endl << endl;
        cout << "\t\t ..######...########.##....##.########.########.....###....##..........###... " << endl;
        cout << "\t\t .##....##..##.......###...##.##.......##.....##...##.##...##.........##.##.. " << endl;
        cout << "\t\t .##........##.......####..##.##.......##.....##..##...##..##........##...##. " << endl;
        cout << "\t\t .##...####.######...##.##.##.######...########..##.....##.##.......##.....## " << endl;
        cout << "\t\t .##....##..##.......##..####.##.......##...##...#########.##.......######### " << endl;
        cout << "\t\t .##....##..##.......##...###.##.......##....##..##.....##.##.......##.....## " << endl;
        cout << "\t\t ..######...########.##....##.########.##.....##.##.....##.########.##.....## " << endl << endl;
        cout << "1. Jugar " << endl;
        cout << "2. Puntajes " << endl;
        cout << "3. Reglas " << endl;
        cout << "4. Salir " << endl << endl;
        cout << "Ingrese la opción deseada: ";
        cin >> opc;
        system("cls");
        switch(opc){
            case 1: subMenuJugar(vec, tam);
                break;
            case 2: subMenuPuntaje(vec, tam);
                break;
            case 3:
                break;
            case 4: cout << endl << "¿ESTA SEGURO QUE DESEA SALIR? (S/N): ";
                cin >> sn;
                if(sn=='S' || sn=='s'){
                    system("cls");
                    cout << endl << "\t\tDESARROLLADO POR CRISTIAN UHRIG Y MAXIMILIANO MIRANDA - TUP 1 AÑO - UTN FRGP" << endl << endl;
                    cout << endl << "¡Vuelvas prontos!" << endl << endl;
                    return 0;
                }
                break;
            default: cout << endl << "Ingrese una opción correcta (1-4)" << endl << endl;
                    system("pause");
        }

    }

    return 0;
}
