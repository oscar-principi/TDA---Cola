#include <iostream>
#include "menu.h"
#include "funciones.h"

using namespace std;


void menuInicio() {
    int opcion;
    cout << "****************" << endl;
    cout << "  MENU INICIO   " << endl;
    cout << "****************" << endl << endl;

    cout << "1-Crear COLA" << endl;
    cout << "0-Salir" << endl << endl;

    cout << "****************" << endl << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1: menuCola();
        break;
    case 0: exit(0);

    default: menuInicio();
    }
}

void menuCola() {
    system("cls");
    int opcion=1;
    Nodo* inicio = nullptr, *fin = nullptr;

    while (opcion != 0) {

        cout << "************************" << endl;
        cout << "        MENU COLA       " << endl;
        cout << "************************" << endl << endl;

        cout << "1-Insertar nodo en COLA" << endl;
        cout << "2-Eliminar nodo en COLA" << endl;
        cout << "3-Listar nodos de COLA" << endl;
        cout << "0-Salir" << endl << endl;

        cout << "************************" << endl << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: 
            int numero;
            system("cls");
            cout << "************************" << endl;
            cout << "          COLA          " << endl;
            cout << "************************" << endl << endl;
            cout << endl <<"Ingrese un numero: ";
            cin >> numero;
            insertarElementoCola(inicio, fin, numero);
            cout << endl <<"************************" << endl <<endl;
            system("cls");
            cout << "************************" << endl;
            cout << "          COLA          " << endl;
            cout << "************************" << endl << endl;
            listarCola(inicio, fin);
            cout << endl << "************************" << endl << endl;

            cout << endl;
            break;
        case 2:
            system("cls");
            cout << "************************" << endl;
            cout << "          COLA          " << endl;
            cout << "************************" << endl << endl;
            eliminarElementoCola(inicio, fin, numero);
            cout << endl << "************************" << endl << endl;
            listarCola(inicio, fin);
            cout << endl << "************************" << endl << endl;

            cout << endl;
            break;
        case 3: 
            system("cls");
            cout << "************************" << endl;
            cout << "          COLA          " << endl;
            cout << "************************" << endl;
            listarCola(inicio, fin);
            cout << endl << "************************" << endl <<endl;

            cout << endl;
            break;
        case 0: 
            exit(0);

        default: 
            menuCola();
        }
        system("pause");
        system("cls");
    }
}

