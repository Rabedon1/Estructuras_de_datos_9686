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
   this->EntradaDate = SalidaDate;
   this->SalidaDate = SalidaDate;
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
   return EntradaDate;
}

void Registro::setEntradaDate(Fecha newEntradaDate)
{
   EntradaDate = newEntradaDate;
}

Fecha Registro::getSalidaDate(void)
{
   return SalidaDate;
}

void Registro::setSalidaDate(Fecha newSalidaDate)
{
   SalidaDate = newSalidaDate;
}

std::ostream& operator<<(std::ostream& ostr, Registro& registro) {
	ostr << "Registro: -> {" << registro.persona
  		<< ", Fecha/hora Entrada: " << Registro.fechaEntrada
		<< ", Fecha/hora Salida: "<< registro.fechaSalida << "}"<< std::endl;
  return os;
}

bool RegistroEntradaSalida::operator==(RegistroEntradaSalida& registro) {
	std::string cedula1 = this->getPersona().getCedula();
	std::string cedula2 = registro.getPersona().getCedula();
	return  cedula1 == cedula2;
}

bool RegistroEntradaSalida::operator>(const RegistroEntradaSalida& registro){
	if (this->fechaEntrada.getAnio() != registro.getFechaEntrada().getAnio())
        return this->fechaEntrada.getAnio() > registro.getFechaEntrada().getAnio();
    
	if (this->fechaEntrada.getMes() != registro.getFechaEntrada().getMes())
    	return this->fechaEntrada.getMes() > registro.getFechaEntrada().getMes();
    
	if (this->fechaEntrada.getDia() != registro.getFechaEntrada().getDia())
        return this->fechaEntrada.getDia() > registro.getFechaEntrada().getDia();
    
	if (this->fechaEntrada.getHora() != registro.getFechaEntrada().getHora())
        return this->fechaEntrada.getHora() > registro.getFechaEntrada().getHora();
    
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