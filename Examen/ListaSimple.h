#pragma once

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "ListaNodo.h"
#include "Utilerias.h"

class ListaSimple
{
private:
	ListaNodo* primero;

public: 
	ListaSimple();

	bool estaVacia();
	void cargarDatos(int, int, int);
	double obtenerTotalxMes(int);
	void eliminarDatosMes(int);
	
};
#endif // !LISTASIMPLE_H

