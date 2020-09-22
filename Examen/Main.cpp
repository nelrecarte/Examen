#include "Utilerias.h"
#include "ListaNodo.h"
#include "ListaSimple.h"
#include "ArbolBinario.h"
#include <conio.h>
#include <iostream>

int main()
{
	Utilerias funcion;
	ListaSimple lista;
	ArbolBinario arbol;

	std::cout << funcion.obtenerCantidadRegistros() << "\n";

	funcion.imprimirCantidadPorTipoPago();
	
	lista.cargarDatos(2009, 1, 5);
	std::cout << "El monto total por mes es: " << lista.obtenerTotalxMes(2) << "\n";

	arbol.agregarElementos(&lista);

	arbol.imprimirArbol();
	

	_getch();
}