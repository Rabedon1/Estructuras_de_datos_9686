/***********************************************************************
 * Module:  Persona.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class Persona
 ***********************************************************************/
  
#include "Persona.h"
#include <iostream>

Fecha Persona::getFechaNacimiento(void) 
{
   return fechaNacimiento;
}

void Persona::setFechaNacimiento(Fecha newFechaNacimiento)
{
   fechaNacimiento = newFechaNacimiento;
}

std::string Persona::getCedula(void)
{
   return cedula;
}

void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}

std::string Persona::getNombre(void)
{
   return nombre;
}

void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

std::string Persona::getApellido(void)
{
   return apellido;
}

void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

Persona::Persona()
{
    this->nombre = "";
    this->apellido = "";
    this->cedula = "";
   
}

Persona::Persona(std::string cedula, std::string nombre ,std::string apellido, Fecha fechaNacimiento){
	
	this->nombre = nombre;
    this->apellido = apellido;
    this->cedula = cedula;
    this->fechaNacimiento = fechaNacimiento;	
}
Persona::~Persona()
{
   // TODO : implement
}


std::ostream& operator <<(std::ostream& ostr,  Persona& persona){
	ostr << "Persona: -> {Nombre: " + persona.nombre
  		+ ", Apellido: " + persona.apellido
		+ ", Cedula: "+ persona.cedula
		+ ", FechaNacimiento: " << persona.fechaNacimiento << "}"<< std::endl;
  return ostr;
	
}


bool Persona::operator==(Persona& persona){
	return (this->cedula == persona.cedula);
}

bool Persona::operator>( Persona& persona){
	return (this->nombre > persona.nombre);
}

bool Persona::operator<(Persona& persona){
	return (this->apellido > persona.apellido);}
	
	
	
	