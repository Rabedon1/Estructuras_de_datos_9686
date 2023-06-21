/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include <ctime> 
#include <locale>
#include "Fecha.h"
#include <ostream>
#include <string>
#include <cstring>

std::string Fecha::getHora(void)
{
   return hora;
}

void Fecha::setHora(std::string newHora)
{
   hora = newHora;
}

std::string Fecha::getMinuto(void)
{
   return minuto;
}

void Fecha::setMinuto(std::string newMinuto)
{
   minuto = newMinuto;
}

std::string Fecha::getSegundo(void)
{
   return segundo;
}

void Fecha::setSegundo(std::string newSegundo)
{
   segundo = newSegundo;
}

std::string Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(std::string newDia)
{
   dia = newDia;
}

std::string Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(std::string newMes)
{
   mes = newMes;
}

std::string Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(std::string newAnio)
{
   anio = newAnio;
}


Fecha::Fecha()
{
}

Fecha::Fecha(std::string newAnio, std::string newMes, std::string newDia,std:: string newHora,std:: string newMinuto, std::string newSegundo)
{
   anio = newAnio;
   mes = newMes;
   dia = newDia;
   hora = newHora;
   minuto = newMinuto;
   segundo = newSegundo;
}
Fecha::Fecha(std::string newDia,std:: string newMes, std::string newAnio)
{
  this->dia= newDia;
   this->mes= newMes;
   this->anio= newAnio;
   this->hora= "00";
   this->minuto= "00";
   this->segundo= "00";
}
// Name:       Fecha::~Fecha()
// Purpose:    Implementation of Fecha::~Fecha()
// Return:     
////////////////////////////////////////////////////////////////////////

Fecha::~Fecha()
{
   // TODO : implement
}