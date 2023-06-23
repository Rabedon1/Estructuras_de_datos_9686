
#include "Persona.h"
#include "Registro.h"
#include "listaDobleCircular.h"
#include <string>


template <typename T>
class ListaDobleCircular;

class GestorArchivo
{
	public:
		GestorArchivo();
		~GestorArchivo();
		static Fecha extraerFecha(std::string input);
		static void guardarListaPersonaComoCSV(listaDobleCircular<Persona>&, std::string);
		static void cargarCSVEnListaPersona(listaDobleCircular<Persona>&, std::string);
		static void guardarListaRegistroComoCSV(listaDobleCircular<Registro>&, std::string);
		static void cargarCSVEnListaRegistro(listaDobleCircular<Registro>&, listaDobleCircular<Persona>&, std::string);
		
	private:		
		
};