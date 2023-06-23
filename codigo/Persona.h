/***********************************************************************
 * Module:  Persona.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Persona_h)
#define __Class_Diagram_2_Persona_h

#include "Persona.h"
#include <string>
#include <iostream>
#include "Fecha.h"

class Persona
{
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   Fecha getFechaNacimiento(void);
   void setFechaNacimiento(Fecha);
   Persona();
   Persona(std::string cedula, std::string nombre, std::string apellido, Fecha fechaNacimiento);
   ~Persona();
	
	friend std::ostream& operator<<(std::ostream&, Persona&);
	bool operator == (Persona&);
	bool operator >(Persona&);
	bool operator <(Persona&);

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
<<<<<<< HEAD
	Fecha fechaNacimoento;
=======
   Fecha fechaNacimiento;
>>>>>>> f807cc6018870076bb4d65051e46e88577eee884

};

#endif