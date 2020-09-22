#include "Utilerias.h"

Utilerias::Utilerias()
{

}

int Utilerias::obtenerCantidadRegistros()
{
	int contador;

	fstream file("datab.bin" , ios::in | ios::binary);

	if (!file)
	{
		cout << "Error al abrir archivo";
		return;
	}

	
}