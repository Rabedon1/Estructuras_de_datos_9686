/***********************************************************************
 * Module:  Nodo.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Nodo_h)
#define __Class_Diagram_2_Nodo_h

class Persona;

#include <Persona.h>

class Nodo
{
public:
   Nodo getAnterior(void);
   void setAnterior(Nodo newAnterior);
   Nodo getSiguiente(void);
   void setSiguiente(Nodo newSiguiente);
   Nodo(Persona persona);
   ~Nodo();

   Persona** persona;

protected:
private:
   Nodo anterior;
   Nodo siguiente;


};

#endif