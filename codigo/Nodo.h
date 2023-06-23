/***********************************************************************
 * Module:  Nodo.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Nodo_h)
#define __Class_Diagram_2_Nodo_h

#pragma once
template <typename T>
class Nodo
{
public:
	Nodo(T);
	~Nodo();
	void setDato(T);
	T getDato();
	void setSiguiente(Nodo*);
	Nodo* getSiguiente();
	void setAnterior(Nodo*);
	Nodo* getAnterior();
protected:
private:
	T dato;
	Nodo<T>* siguiente;
	Nodo<T>* anterior;
};

#endif