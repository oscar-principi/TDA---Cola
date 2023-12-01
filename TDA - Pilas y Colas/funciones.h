#pragma once
#include "nodo.h"

void insertarElementoCola(Nodo*& inicio, Nodo*& fin, int dato);
void eliminarElementoCola(Nodo*& inicio, Nodo*& fin, int& dato); //El dato se pasa por referencia porque se va a eliminar.
void listarCola(Nodo* inicio, Nodo* fin);
bool colaVacia(Nodo* inicio);

