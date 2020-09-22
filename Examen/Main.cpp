#include "Utilerias.h"
#include "ListaNodo.h"
#include "ListaSimple.h"
#include <conio.h>
#include <iostream>

int main()
{
	Utilerias funcion;

	std::cout << funcion.obtenerCantidadRegistros() << "\n";

	funcion.imprimirCantidadPorTipoPago();

	

	_getch();
}