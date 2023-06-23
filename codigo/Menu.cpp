#include <iostream>
#include <conio.h> // Se utiliza para obtener la entrada de teclado sin bloquear
#include "listaDoblecircular.h"
#include "Persona.h"
#include "Registro.h"
#include "archivo.h"
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

