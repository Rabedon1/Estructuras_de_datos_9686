/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

template <typename T>
Nodo<T>::Nodo(T dato){
	this->dato = dato;
	this->siguiente = nullptr;
	this->anterior = nullptr;
}

template <typename T>
Nodo<T>::~Nodo(){
}

template <typename T>
void Nodo<T>::setDato(T dato){
	this->dato = dato;

}

template <typename T>
T Nodo<T>::getDato(){
	return this->dato;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T>* siguiente){
	this->siguiente = siguiente;
}

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente(){
	return this->siguiente;
}

template <typename T>
void Nodo<T>::setAnterior(Nodo<T>* anterior){
	this->anterior = anterior;
}

template <typename T>
Nodo<T>* Nodo<T>::getAnterior(){
	return this->anterior;
}

