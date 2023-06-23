#ifndef ARCHIVO_H
#define ARCHIVO_H
#include "Persona.h"
#include "Registro.h"
#include <string>


template <typename T>
class listaDobleCircular;

class Archivo
{
	public:
		Archivo();
		~Archivo();
		static Fecha extraerFecha(std::string input);
		static void guardarListaPersonaComoCSV(listaDobleCircular<Persona>&, std::string);
		static void cargarCSVEnListaPersona(listaDobleCircular<Persona>&, std::string);
		static void guardarListaRegistroComoCSV(listaDobleCircular<Registro>&, std::string);
		static void cargarCSVEnListaRegistro(listaDobleCircular<Registro>&, listaDobleCircular<Persona>&, std::string);
		
	private:		
		
};
#endif // ARCHIVO_H
