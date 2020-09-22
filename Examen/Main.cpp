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

	ListaSimple lista;
	
	lista.cargarDatos(2009, 1, 5);
	std::cout << lista.obtenerTotalxMes(2);
	

	_getch();
}