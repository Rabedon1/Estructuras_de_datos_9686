/***********************************************************************
 * Module:  Persona.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class Persona
 ***********************************************************************/
  
#include "Persona.h"
#include <iostream>

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
   fecha = NULL;
   registro = NULL;
}

Persona::~Persona()
{
   // TODO : implement
}