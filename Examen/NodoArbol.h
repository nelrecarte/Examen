#pragma once
#ifndef NODOARBOL_H
#define NODOARBOL_H

class NodoArbol
{
private:
	char* apellido;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;

public:
	NodoArbol();
	NodoArbol(const char*, NodoArbol*, NodoArbol*);

	void setApellido(const char*);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	char* getApellido(void);
	NodoArbol* getHijoIzquierdo(void);
	NodoArbol* getHijoDerecho(void);
};
#endif // !NODOARBOL_H
