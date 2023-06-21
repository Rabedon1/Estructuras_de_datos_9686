/***********************************************************************
 * Module:  listaDobleCircular.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class listaDobleCircular
 ***********************************************************************/


#include "listaDobleCircular.h"
#include <iostream>

template <typename T>
listaDobleCircular<T>::listaDobleCircular()
{
	this->primero = nullptr;
	this->ultimo = nullptr;
}

template <typename T>
listaDobleCircular<T>::~listaDobleCircular()
{
   // TODO : implement
}

template <typename T>
bool listaDobleCircular<T>::estaVacia(){
	return this->cabeza == nullptr;

}

template <typename T>
void listaDobleCircular<T>::insertar(T dato)
{
	Nodo<T>* nuevo = new Nodo<T>(dato);
	if(estaVacia()){
		this->primero = nuevo;
		this->ultimo = nuevo;
		this->primero->setSiguiente(this->ultimo);
		this->primero->setAnterior(this->ultimo);
		this->ultimo->setSiguiente(this->primero);
		this->ultimo->setAnterior(this->primero);
	}else{
		this->ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(this->ultimo);
		nuevo->setSiguiente(this->primero);
		this->primero->setAnterior(nuevo);
		this->ultimo = nuevo;
	}

void listaDobleCircular<T>::eliminar(Persona persona)
{
   // TODO : implement
}

void listaDobleCircular::imprimirDatos(void)
{
   // TODO : implement
}

Nodo listaDobleCircular::crearNodo(Persona persona)
{
   // TODO : implement
}

int listaDobleCircular::cantidadNodos(void)
{
   // TODO : implement
}

void listaDobleCircular::agregarPersona(Persona persona)
{
   // TODO : implement
}

Persona listaDobleCircular::buscarPorCedula(std::string cedula)
{
   // TODO : implement
}

Nodo listaDobleCircular::getUltimo(void)
{
   return ultimo;
}

void listaDobleCircular::setUltimo(Nodo newUltimo)
{
   ultimo = newUltimo;
}

Nodo listaDobleCircular::getPrimero(void)
{
   return primero;
}

void listaDobleCircular::setPrimero(Nodo newPrimero)
{
   primero = newPrimero;
}