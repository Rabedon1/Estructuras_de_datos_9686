#include "Archivo.h"
#include "listaDobleCircular.cpp"
#include <iostream>
#include <fstream>
#include <sstream>

GestorArchivo::GestorArchivo() {
}

GestorArchivo::~GestorArchivo() {
}

Fecha GestorArchivo::extraerFecha(std::string input) {
	int anio, mes, dia, hora, minuto, segundo;
	std::stringstream ss(input);
    char dl;

    ss >> dia >> dl >> mes >> dl >> anio
		>> dl >> dl >> dl >> dl >> dl >> dl
		>> hora >> dl >> minuto >> dl >> segundo;
		
	return Fecha(anio, mes, dia, hora, minuto, segundo);
}

// Función para guardar los elementos de una ListaCircularDoble en un archivo CSV
void GestorArchivo::guardarListaPersonaComoCSV(listaDobleCircular<Persona>& lista,std::string nombreArchivo) {
    std::ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        Nodo<Persona>* actual = lista.getPrimero();
        if (actual != nullptr) {
        	archivo << "CEDULA" << ";"
                        << "NOMBRE" << ";"
                        << "APELLIDO" << ";"
						<< "FECHA NACIMIENTO" <<std::endl;
            do {
                archivo << actual->getDato().getCedula() << ";"
                        << actual->getDato().getNombre() << ";"
                        << actual->getDato().getApellido() << ";"
                        << actual->getDato().getFechaNacimiento() << std::endl;
                actual = actual->getSiguiente();
            } while (actual != lista.getPrimero());
        }
        archivo.close();
        std::cout << "Archivo guardado correctamente." << std::endl;
    } else {
        std::cerr << "No se pudo abrir el archivo para escritura." << std::endl;
    }
}

// Función para cargar los elementos de un archivo CSV en una ListaCircularDoble
void GestorArchivo::cargarCSVEnListaPersona(listaDobleCircular<Persona>& lista, std::string nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    Fecha fecha;
    if (archivo.is_open()) {
        std::string linea;
        std::getline(archivo, linea);
        while (std::getline(archivo, linea)) {
            std::istringstream ss(linea);
            std::string cedula, nombre, apellido, strFecha;
            std::getline(ss, cedula, ';');
            std::getline(ss, nombre, ';');
            std::getline(ss, apellido, ';');
            std::getline(ss, strFecha, ';');
            fecha = extraerFecha(strFecha);
            Persona persona(cedula, nombre, apellido, fecha);
            lista.insertar(persona);
        }
        archivo.close();
        std::cout << "Archivo cargado correctamente." << std::endl;
    } else {
        std::cerr << "No se pudo abrir el archivo para lectura." << std::endl;
    }
}

void GestorArchivo::guardarListaRegistroComoCSV(listaDobleCircular<listaDobleCircular>& lista, std::string nombreArchivo){
	std::ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        NodoDoble<RegistroEntradaSalida>* actual = lista.getCabeza();
        if (actual != nullptr) {
        	archivo << "CEDULA" << ";"
                        << "FECHA / HORA ENTRADA" << ";"
                        << "FECHA / HORA SALIDA" << ";"
                        << "CONTADOR REGISTRO" << std::endl;
            do {
                archivo << actual->getDato().getPersona().getCedula() << ";"
                        << actual->getDato().getFechaEntrada() << ";"
                        << actual->getDato().getFechaSalida() << ";"
                        << actual->getDato().getContadorRegistro() << std::endl;
                actual = actual->getSiguiente();
            } while (actual != lista.getCabeza());
        }
        archivo.close();
        std::cout << "Archivo guardado correctamente." << std::endl;
    } else {
        std::cerr << "No se pudo abrir el archivo para escritura." << std::endl;
    }
}

void GestorArchivo::cargarCSVEnListaRegistro(listaDobleCircular<Registro>& listaRegistros, listaDobleCircular<Persona>& listaPersonas, std::string nombreArchivo){
	std::ifstream archivo(nombreArchivo);
	Persona personaRegistro;
    Fecha fechaEntrada;
    Fecha fechaSalida;
    if (archivo.is_open()) {
        std::string linea;
        std::getline(archivo, linea);
        while (std::getline(archivo, linea)) {
            std::istringstream ss(linea);
            std::string cedula, strFechaEntrada, strFechaSalida, strContador;
            int contadorRegistro;
            std::getline(ss, cedula, ';');
            std::getline(ss, strFechaEntrada, ';');
            std::getline(ss, strFechaSalida, ';');
            std::getline(ss, strContador, ';');
            
            fechaEntrada = extraerFecha(strFechaEntrada);
            fechaSalida = extraerFecha(strFechaSalida);
            contadorRegistro = std::stoi(strContador);
            
            Persona personaEncontrada(cedula, "", "", fechaEntrada);
            personaRegistro = listaPersonas.extraer(personaEncontrada);
            RegistroEntradaSalida registro(personaRegistro, fechaEntrada, fechaSalida);
            registro.setContadorRegistro(contadorRegistro);
            listaRegistros.insertar(registro);
        }
        archivo.close();
        std::cout << "Archivo cargado correctamente." << std::endl;
    } else {
        std::cerr << "No se pudo abrir el archivo para lectura." << std::endl;
    }
}