/***********************************************************************
 * Module:  listaDobleCircular.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class listaDobleCircular
 ***********************************************************************/


#include "listaDobleCircular.h"
#include <iostream>
using namespace std;
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
bool listaDobleCircular<T>::vacia(){
	return this->cabeza == nullptr;

}

template <typename T>
void listaDobleCircular<T>::insertar(T dato)
{
	Nodo<T>* nuevo = new Nodo<T>(dato);
	if(vacia()){
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
}
template <typename T>
void listaDobleCircular<T>::eliminar(T dato)
{
	if(!vacia()){
		if(this->primero->getDato() == dato){
			Nodo<T>* aux = this->primero;
			this ->primero = this->primero->getSiguiente();
			this->primero -> setAnterior(this->ultimo);
			this->ultimo->setSiguiente(this->primero);
		}
		else{
			Nodo<T>* aux = this->primero;
			while (aux->getSiguiente() != this->primero){
				if(aux->getSiguiente()->getDato() == dato){
					Nodo<T>* aux2 = aux->getSiguiente();
					aux->setSiguiente(aux2->getSiguiente());
					aux2->getSiguiente()->setAnterior(aux);
					delete aux2;
					break;
				}
				aux = aux->getSiguiente();
			}
		}
	}
}

template <typename T>
void listaDobleCircular<T>::imprimir()
{
	if (!vacia()){
		Nodo<T>* aux = this->primero;
		do{
			std::cout <<aux->getDato()<<"-";
			aux = aux ->getSiguiente();
		}
		while(aux != this->primero);
		cout<<endl;
		}	
	}

template <typename T>
Nodo<T>* listaDobleCircular<T>::getUltimo(void)
{
   return ultimo;
}

template <typename T>
void listaDobleCircular<T>::setUltimo(Nodo<T>* newUltimo)
{
   ultimo = newUltimo;
}

template <typename T>
Nodo<T>* listaDobleCircular<T>::getPrimero(void)
{
   return primero;
}

template <typename T>
void listaDobleCircular<T>::setPrimero(Nodo<T>* newPrimero)
{
   primero = newPrimero;
}