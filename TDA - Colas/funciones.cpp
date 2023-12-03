#include <iostream>
#include "funciones.h"
#include "nodo.h"

using namespace std;



void insertarElementoCola(Nodo*& inicio, Nodo*& fin, int dato) {
    Nodo* nuevoNodo = new Nodo();

    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = nullptr;

    colaVacia(inicio) ? inicio = nuevoNodo : fin->siguiente = nuevoNodo;

    fin = nuevoNodo;
}

void eliminarElementoCola(Nodo*& inicio, Nodo*& fin, int& dato) {
    dato = inicio->dato;
    Nodo* nodoAux = inicio;

    if (inicio == fin) {
        inicio = nullptr;
        fin = nullptr;
    }
    else {
        inicio = inicio->siguiente;
    }

    delete nodoAux;
    cout << "Elemento eliminado: " << dato << endl;
}

void listarCola(Nodo* inicio, Nodo* fin) {
    if (colaVacia(inicio)) {
        cout << "La cola esta vacia!" << endl;
        return;
    }

    cout <<"Elementos en la cola: ";
    Nodo* actual = inicio;

    while (actual != nullptr) {
        cout << actual->dato << " | ";
        actual = actual->siguiente;
    }

    cout << endl;
}


bool colaVacia(Nodo* inicio) {
    return (inicio == nullptr) ? true : false; //Condicional ternario con retorno booleano
}

