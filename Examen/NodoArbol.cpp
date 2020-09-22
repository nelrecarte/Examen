#include "NodoArbol.h"
#include <iostream>
using namespace std;

NodoArbol::NodoArbol() : apellido(nullptr), hijoIzquierdo(nullptr), hijoDerecho(nullptr)
{}

NodoArbol::NodoArbol(const char* _nombre, NodoArbol* _hIzquierdo, NodoArbol* _hDerecho)
{
	setApellido(_nombre);
	setHijoIzquierdo(_hIzquierdo);
	setHijoDerecho(_hDerecho);
}

void NodoArbol::setApellido(const char* _nombre)
{

	apellido = new char[strlen(_nombre)];
	strcpy_s(apellido, strlen(_nombre) + 1, _nombre);
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hIzquierdo)
{
	this->hijoIzquierdo = _hIzquierdo;
}

void NodoArbol::setHijoDerecho(NodoArbol* _hDerecho)
{
	this->hijoDerecho = _hDerecho;
}

char* NodoArbol::getApellido()
{
	return this->apellido;
}

NodoArbol* NodoArbol::getHijoIzquierdo()
{
	return this->hijoIzquierdo;
}

NodoArbol* NodoArbol::getHijoDerecho()
{
	return this->hijoDerecho;
}
