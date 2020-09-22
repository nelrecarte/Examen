#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include "NodoArbol.h"
#include "ListaSimple.h"
#include <fstream>
#include <iostream>

using namespace std;

class ArbolBinario
{
private:
	NodoArbol* raiz;

public:
	ArbolBinario();

	void agregarElemento(const char*);
	NodoArbol* agregarAux(NodoArbol*, const char*);

	void imprimirArbol();
	void imprimirAux(NodoArbol*);

	void agregarElementos(ListaSimple*);
};
#endif // !ARBOLBINARIO_H

