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
	return this->primero == nullptr;

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
			std::cout<< aux->getDato()<<"-";
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
template <typename T>
void listaDobleCircular<T>::shellSort()
{
    int n = contarElementos();

    // Calcula el tamaño del salto inicial
    int salto = n / 2;

    while (salto > 0) {
        for (int i = salto; i < n; i++) {
            Nodo<T>* temp = obtenerNodoEnPosicion(i);
            T dato = temp->getDato();
            int j = i;

            while (j >= salto && obtenerNodoEnPosicion(j - salto)->getDato() > dato) {
                Nodo<T>* nodoActual = obtenerNodoEnPosicion(j);
                Nodo<T>* nodoSalto = obtenerNodoEnPosicion(j - salto);

                nodoActual->setDato(nodoSalto->getDato());
                j -= salto;
            }

            Nodo<T>* nodoActual = obtenerNodoEnPosicion(j);
            nodoActual->setDato(dato);
        }

        salto /= 2;
    }
}

template <typename T>
int listaDobleCircular<T>::contarElementos() const
{
    int count = 0;
    Nodo<T>* aux = primero;

    do {
        count++;
        aux = aux->getSiguiente();
    } while (aux != primero);

    return count;
}

template <typename T>
Nodo<T>* listaDobleCircular<T>::obtenerNodoEnPosicion(int posicion) const
{
    Nodo<T>* aux = primero;

    for (int i = 0; i < posicion; i++) {
        aux = aux->getSiguiente();
    }

    return aux;
}

template <typename T>
T listaDobleCircular<T>::extraer(T dato){
	if (!vacia()){
		Nodo<T>* aux = this->primero;
		do{
			if (aux->getDato() == dato){
				return aux->getDato();
			}
			aux = aux->getSiguiente();
		} while (aux != this->primero);
	}
	return dato;
}
template <typename T>
Nodo<T>* listaDobleCircular<T>::extraerNodo(T dato){
	if (!vacia()){
		Nodo<T>* aux = this->cola;
		do{
			if (aux->getDato() == dato){
				return aux;
			}
			aux = aux->getAnterior();
		} while (aux != this->cola);
	}
	
	return nullptr;
}