/***********************************************************************
 * Module:  listaDobleCircular.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class listaDobleCircular
 ***********************************************************************/

#if !defined(__Class_Diagram_2_listaDobleCircular_h)
#define __Class_Diagram_2_listaDobleCircular_h


#include "Nodo.h"
#include "CRUDLista.h"
template <typename T>
class listaDobleCircular:public CRUDLista<T>
{
public:
   listaDobleCircular();
   ~listaDobleCircular();
   bool vacia()override;
   void insertar(T)override;
   void eliminar(T)override;
   bool buscar(T)override;
   void imprimir()override;
   Nodo<T>* getPrimero();
   Nodo<T>* getUltimo();
   void setPrimero(Nodo<T>*);
   void setUltimo(Nodo<T>*);

protected:
private:
   Nodo<T>* primero;
   Nodo<T>* ultimo;


};

#endif