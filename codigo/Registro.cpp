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
    
	if (this->fechaEntrada.getMinuto() != registro.getFechaEntrada().getMinuto())
        return this->fechaEntrada.getMinuto() > registro.getFechaEntrada().getMinuto();
    
    return (this->fechaEntrada.getSegundo()>registro.getFechaEntrada().getSegundo());
    //return(persona.getNombre()>registro.persona.getNombre());
}

bool RegistroEntradaSalida::operator<( const RegistroEntradaSalida& registro){
	if (this->fechaSalida.getAnio() != registro.getFechaSalida().getAnio())
        return this->fechaSalida.getAnio() > registro.getFechaSalida().getAnio();
    
	if (this->fechaSalida.getMes() != registro.getFechaSalida().getMes())
    	return this->fechaSalida.getMes() > registro.getFechaSalida().getMes();
    
	if (this->fechaSalida.getDia() != registro.getFechaSalida().getDia())
        return this->fechaSalida.getDia() > registro.getFechaSalida().getDia();
    
	if (this->fechaSalida.getHora() != registro.getFechaSalida().getHora())
        return this->fechaSalida.getHora() > registro.getFechaSalida().getHora();
    
	if (this->fechaSalida.getMinuto() != registro.getFechaSalida().getMinuto())
        return this->fechaSalida.getMinuto() > registro.getFechaSalida().getMinuto();
    
    return (this->fechaSalida.getSegundo()>registro.getFechaSalida().getSegundo());
}