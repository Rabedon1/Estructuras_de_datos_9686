/***********************************************************************
 * Module:  Registro.cpp
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Implementation of the class Registro
 ***********************************************************************/

#include "Fecha.h"
#include "Registro.h"

////////////////////////////////////////////////////////////////////////
// Name:       Registro::Registro()
// Purpose:    Implementation of Registro::Registro()
// Return:     
////////////////////////////////////////////////////////////////////////

Registro::Registro()
{
   fecha = NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::~Registro()
// Purpose:    Implementation of Registro::~Registro()
// Return:     
////////////////////////////////////////////////////////////////////////

Registro::~Registro()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::getFechaEntrada()
// Purpose:    Implementation of Registro::getFechaEntrada()
// Return:     Fecha
////////////////////////////////////////////////////////////////////////

Fecha Registro::getFechaEntrada(void)
{
   return fechaEntrada;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::setFechaEntrada(Fecha newFechaEntrada)
// Purpose:    Implementation of Registro::setFechaEntrada()
// Parameters:
// - newFechaEntrada
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::setFechaEntrada(Fecha newFechaEntrada)
{
   fechaEntrada = newFechaEntrada;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::getFechaSalida()
// Purpose:    Implementation of Registro::getFechaSalida()
// Return:     Fecha
////////////////////////////////////////////////////////////////////////

Fecha Registro::getFechaSalida(void)
{
   return fechaSalida;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::setFechaSalida(Fecha newFechaSalida)
// Purpose:    Implementation of Registro::setFechaSalida()
// Parameters:
// - newFechaSalida
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::setFechaSalida(Fecha newFechaSalida)
{
   fechaSalida = newFechaSalida;
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::insertarEntrada(Persona persona, Fecha fecha)
// Purpose:    Implementation of Registro::insertarEntrada()
// Parameters:
// - persona
// - fecha
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::insertarEntrada(Persona persona, Fecha fecha)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Registro::insertarSalida(Persona persona, Fecha fecha)
// Purpose:    Implementation of Registro::insertarSalida()
// Parameters:
// - persona
// - fecha
// Return:     void
////////////////////////////////////////////////////////////////////////

void Registro::insertarSalida(Persona persona, Fecha fecha)
{
   // TODO : implement
}