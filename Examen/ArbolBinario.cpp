#include "ArbolBinario.h"
#include <iostream>
using std::cout;

ArbolBinario::ArbolBinario() : raiz(nullptr)
{}

void ArbolBinario::agregarElemento(const char* _apellido)
{
	raiz = agregarAux(raiz, _apellido);
}

NodoArbol* ArbolBinario::agregarAux(NodoArbol* _raiz, const char* _apellido)
{
	if (_raiz == nullptr)
	{
		NodoArbol* nuevo = new NodoArbol(_apellido, nullptr, nullptr);
		_raiz = nuevo;
	}
	else if (strcmp(_apellido, _raiz->getApellido()) > 0)
		_raiz->setHijoDerecho(agregarAux(_raiz->getHijoDerecho(), _apellido));

	else if (strcmp(_apellido, _raiz->getApellido()) < 0)
		_raiz->setHijoIzquierdo(agregarAux(_raiz->getHijoIzquierdo(), _apellido));

	return _raiz;
}

void ArbolBinario::imprimirArbol()
{
	imprimirAux(raiz);
}

void ArbolBinario::imprimirAux(NodoArbol* _raiz)
{

	if (_raiz == nullptr)
		return;

	cout << "[ " << _raiz->getApellido() << " ] " << "\n";
	imprimirAux(_raiz->getHijoIzquierdo());
	imprimirAux(_raiz->getHijoDerecho());
}

void ArbolBinario::agregarElementos(ListaSimple* lista)
{
	ListaNodo* actual = lista->primero;

	while (actual != nullptr) {

		agregarElemento(actual->getLastName());

		actual = actual->getSiguiente();
	}
}