/***********************************************************************
 * Module:  Registro.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class Registro
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Registro_h)
#define __Class_Diagram_2_Registro_h

class Fecha;

#include "Fecha.h"
#include "persona.h"

class Registro
{
public:
   Registro();
   ~Registro();
   Fecha getFechaEntrada(void);
   void setFechaEntrada(Fecha newFechaEntrada);
   Fecha getFechaSalida(void);
   void setFechaSalida(Fecha newFechaSalida);
   void insertarEntrada(Persona persona, Fecha fecha);
   void insertarSalida(Persona persona, Fecha fecha);

   Fecha** fecha;

protected:
private:
   Fecha fechaEntrada;
   Fecha fechaSalida;


};

#endif