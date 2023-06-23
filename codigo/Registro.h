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
#include <iostream>

class Registro
{
public:
   Registro();
   Registro(Persona persona, Fecha EntradaDate, Fecha SalidaDate);
   ~Registro();
   Persona getPersona(void);
   void setPersona(Persona newPersona);
   Fecha getEntradaDate(void);
   void setEntradaDate(Fecha newEntradaDate);
   Fecha getSalidaDate(void);
   void setSalidaDate(Fecha newSalidaDate);
   int getContador(void);
   void setContador(int newContador);
   void addContador(void);
   
   friend std::ostream& operator<<(std::ostream&, Registro);
   bool operator == (Registro&);
   bool operator>(Registro&);
   bool operator<(Registro&);
protected:
private:
   Persona persona;
   Fecha EntradaDate;
   Fecha SalidaDate;
   int contador;

};

#endif