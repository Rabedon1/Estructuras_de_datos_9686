/***********************************************************************
 * Module:  listaDobleCircular.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class listaDobleCircular
 ***********************************************************************/

#if !defined(__Class_Diagram_2_listaDobleCircular_h)
#define __Class_Diagram_2_listaDobleCircular_h

class Nodo;

#include <Nodo.h>
#include <Persona.h>

class listaDobleCircular
{
public:
   listaDobleCircular();
   ~listaDobleCircular();
   void insertar(Persona persona);
   void eliminar(Persona persona);
   void imprimirDatos(void);
   Nodo crearNodo(Persona persona);
   int cantidadNodos(void);
   void agregarPersona(Persona persona);
   Persona buscarPorCedula(std::string cedula);
   Nodo getUltimo(void);
   void setUltimo(Nodo newUltimo);
   Nodo getPrimero(void);
   void setPrimero(Nodo newPrimero);

   Nodo** nodo;

protected:
private:
   Nodo ultimo;
   Nodo primero;


};

#endif