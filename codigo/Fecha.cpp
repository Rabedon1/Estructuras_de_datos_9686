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

int Fecha::getHora(void)
{
   return hora;
}

void Fecha::setHora(int newHora)
{
   hora = newHora;
}

int Fecha::getMinuto(void)
{
   return minuto;
}

void Fecha::setMinuto(int newMinuto)
{
   minuto = newMinuto;
}

int Fecha::getSegundo(void)
{
   return segundo;
}

void Fecha::setSegundo(int newSegundo)
{
   segundo = newSegundo;
}

int Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(int newDia)
{
   dia = newDia;
}

int Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(int newMes)
{
   mes = newMes;
}

int Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}


Fecha::Fecha()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    std::time_t tiempoActual = std::time(nullptr);

    std::tm* tiempoLocal = std::localtime(&tiempoActual);

	this->dia = tiempoLocal->tm_mday;
	this->mes = tiempoLocal->tm_mon+1;
    this->anio = tiempoLocal->tm_year + 1900;
    this->hora = tiempoLocal->tm_hour;
    this->minuto = tiempoLocal->tm_min;
    this->segundo = tiempoLocal->tm_sec;
}

Fecha::Fecha(int newAnio, int newMes, int newDia,int newHora,int newMinuto, int newSegundo)
{
   anio = newAnio;
   mes = newMes;
   dia = newDia;
   hora = newHora;
   minuto = newMinuto;
   segundo = newSegundo;
}

std::ostream& operator <<(std::ostream& os, const Fecha& fechaActual){
	os<<std::to_string(fechaActual.dia) + "/"+std::to_string(fechaActual.mes)+"/"+std::to_string(fechaActual.anio)+" - hora: "+
	std::to_string(fechaActual.hora)+":"+std::to_string(fechaActual.minuto)+":"+std::to_string(fechaActual.segundo);
	return os;
}

Fecha::~Fecha()
{
}