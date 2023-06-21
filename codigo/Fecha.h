/***********************************************************************
 * Module:  Fecha.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Fecha_h)
#define __Class_Diagram_2_Fecha_h
#include <iostream>
#include <ostream>
#include <string>
#include <cstring>
class Fecha
{
public:
   int getAnio(void);
   void setAnio(int newAnio);
   int getMes(void);
   void setMes(int newMes);
   int getDia(void);
   void setDia(int newDia);
   int getHora(void);
   void setHora(int newHora);
   int getMinuto(void);
   void setMinuto(int newMinuto);
   int getSegundo(void);
   void setSegundo(int newSegundo);
   Fecha();
   Fecha(int, int, int, int, int, int);
   ~Fecha();
   friend std::ostream& operator<<(std::ostream&, const Fecha&);

private:
   int mes;
   int dia;
   int anio;
   int hora;
   int minuto;
   int segundo;

};

#endif