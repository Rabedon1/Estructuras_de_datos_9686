#include <iostream>
#include <conio.h> // Se utiliza para obtener la entrada de teclado sin bloquear
#include "listaDoblecircular.h"
#include "Persona.h"
#include "Registro.h"
#include "archivo.cpp"
#include <windows.h>
#include "Fecha.h"
#include "nodo.h"

void registrarEmpleado(listaDobleCircular<Persona>&);
void registrarEntradaSalida(listaDobleCircular<Registro>&, listaDobleCircular<Persona>&);
void mostrarRegistroPorEntrada(listaDobleCircular<Registro>&);
void mostrarRegistroPorSalida(listaDobleCircular<Registro>&);
void mostrarRegistroIndividual();
void mostrarEmpleadosPorNombre(listaDobleCircular<Persona>&);
void mostrarEmpleadosPorApellido(listaDobleCircular<Persona>&);
using namespace std;

void menu(int opcionSeleccionada) {
	
    system("cls"); // Limpia la pantalla

    cout << "=== MENU ===" << endl;
    cout << (opcionSeleccionada == 1 ? "> " : "  ") << "1. Ingresar nuevo personal " << endl;
    cout << (opcionSeleccionada == 2 ? "> " : "  ") << "2. Registrar entrada o salida " << endl;
    cout << (opcionSeleccionada == 3 ? "> " : "  ") << "3. Buscar empleado" << endl;
    cout << (opcionSeleccionada == 4 ? "> " : "  ") << "4. Salir" << endl;
    cout << "============" << endl;
    cout << "Utilice las teclas de direccion para moverse y presione Enter para seleccionar una opcion." << endl;
}

int main() {
//	menu mostrarMenu;
	listaDobleCircular<Persona> listaPersonas;
	listaDobleCircular<Registro> listaRegistros;
	
	// Cargar archivos
	Archivo::cargarCSVEnListaPersona(listaPersonas, "personas.csv");
	Archivo::cargarCSVEnListaRegistro(listaRegistros, listaPersonas, "registros.csv");
    bool salir = false;
    int opcion = 1;

    while (!salir) {
        menu(opcion);

        // Obtener la entrada de teclado sin bloquear
        int tecla = _getch();

        switch (tecla) {
            case 72: // Flecha hacia arriba
                opcion = (opcion > 1) ? opcion - 1 : 4;
                break;
            case 80: // Flecha hacia abajo
                opcion = (opcion < 4) ? opcion + 1 : 1;
                break;
            case 13: // Tecla Enter
                switch (opcion) {
                    case 1:
                        registrarEmpleado(listaPersonas);
                        break;
                    case 2:
						registrarEntradaSalida(listaRegistros, listaPersonas);
                        break;
                    case 3:
						mostrarRegistroPorEntrada(listaRegistros);
                        break;
                    case 4:
                        cout << "Saliendo del programa..." << endl;
                        salir = true;
                        break;
                }
                break;
        }
    }

    return 0;
}
