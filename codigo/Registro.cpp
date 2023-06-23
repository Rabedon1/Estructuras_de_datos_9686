/***********************************************************************
 * Module:  Registro.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class Registro
 ***********************************************************************/

#include "Fecha.h"
#include "Registro.h"

Registro::Registro(Persona persona, Fecha EntradaDate, Fecha SalidaDate)
{
   this->persona = persona;
   this->entradaDate = SalidaDate;
   this->salidaDate = SalidaDate;
   this->contador = 0;
}

Persona Registro::getPersona(void)
{
   return persona;
}

void Registro::setPersona(Persona newPersona)
{
   persona = newPersona;
}


Registro::Registro()
{

}

Registro::~Registro()
{
   // TODO : implement
}

Fecha Registro::getEntradaDate(void)
{
   return entradaDate;
}

void Registro::setEntradaDate(Fecha newEntradaDate)
{
   entradaDate = newEntradaDate;
}

Fecha Registro::getSalidaDate(void)
{
   return salidaDate;
}

void Registro::setSalidaDate(Fecha newSalidaDate)
{
   salidaDate = newSalidaDate;
}

int Registro::getContador() {
	return contador;
}

void Registro::setContador(int newContador) {
	contador = newContador;
}

void Registro::addContador(void) {
	contador++;
}


std::ostream& operator<<(std::ostream& ostr, Registro& registro) {
	ostr << "Registro: -> {" << registro.persona
  		<< ", Fecha/hora Entrada: " << registro.entradaDate
		<< ", Fecha/hora Salida: "<< registro.salidaDate << "}"<< std::endl;
  return ostr;
}

bool Registro::operator==(Registro& registro) {
	std::string cedula1 = this->getPersona().getCedula();
	std::string cedula2 = registro.getPersona().getCedula();
	return  cedula1 == cedula2;
}

bool Registro::operator>(Registro& registro){
	if (this->entradaDate.getAnio() != registro.getEntradaDate().getAnio())
        return this->entradaDate.getAnio() > registro.getEntradaDate().getAnio();
    
	if (this->entradaDate.getMes() != registro.getEntradaDate().getMes())
    	return this->entradaDate.getMes() > registro.getEntradaDate().getMes();
    
	if (this->entradaDate.getDia() != registro.getEntradaDate().getDia())
        return this->entradaDate.getDia() > registro.getEntradaDate().getDia();
    
	if (this->entradaDate.getHora() != registro.getEntradaDate().getHora())
        return this->entradaDate.getHora() > registro.getEntradaDate().getHora();
    
	if (this->entradaDate.getMinuto() != registro.getEntradaDate().getMinuto())
        return this->entradaDate.getMinuto() > registro.getEntradaDate().getMinuto();
    
    return (this->entradaDate.getSegundo()>registro.getEntradaDate().getSegundo());
}

bool Registro::operator<(Registro& registro){
	if (this->salidaDate.getAnio() != registro.getSalidaDate().getAnio())
        return this->salidaDate.getAnio() > registro.getSalidaDate().getAnio();
    
	if (this->salidaDate.getMes() != registro.getSalidaDate().getMes())
    	return this->salidaDate.getMes() > registro.getSalidaDate().getMes();
    
	if (this->salidaDate.getDia() != registro.getSalidaDate().getDia())
        return this->salidaDate.getDia() > registro.getSalidaDate().getDia();
    
	if (this->salidaDate.getHora() != registro.getSalidaDate().getHora())
        return this->salidaDate.getHora() > registro.getSalidaDate().getHora();
    
	if (this->salidaDate.getMinuto() != registro.getSalidaDate().getMinuto())
        return this->salidaDate.getMinuto() > registro.getSalidaDate().getMinuto();
    
    return (this->salidaDate.getSegundo()>registro.getSalidaDate().getSegundo());
}