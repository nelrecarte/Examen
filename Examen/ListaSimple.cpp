#include "ListaSimple.h"
#include "Utilerias.h"

ListaSimple::ListaSimple()
{

}

bool ListaSimple::estaVacia()
{
	return primero == nullptr;
}

void ListaSimple::cargarDatos(int _anio, int mesInicio, int mesFinal)
{
	if (mesInicio > mesFinal)
	{
		cout << "Mes De inicio es mayor al de final, intente de nuevo";
		return;
	}
	Utilerias x;
	ListaNodo* nuevo;
	x.archivo.open("datab.bin", ios::in | ios::binary);

	x.archivo.seekg(0, ios::end);
	long sizeFile = x.archivo.tellg();
	x.archivo.seekg(0, ios::beg);

	registro reg;

	while (x.archivo.tellg() != sizeFile)
	{
		x.archivo.read(reinterpret_cast<char*>(&reg), sizeof(registro));
		//cout << reg.payment_type << "\n";
		if (reg.year == _anio) 
		{
			if (reg.month >= mesInicio && reg.month <= mesFinal)
			{
				nuevo = new ListaNodo(reg.name, reg.lastname, reg.credit_card, reg.date, reg.total, reg.month, reg.month, nullptr);
				if (estaVacia())
				{
					primero = nuevo;
				}
				else
				{
					ListaNodo* actual = primero;
					while (actual->getSiguiente() != nullptr)
					{
						actual = actual->getSiguiente();
					}
					actual->setSiguiente(nuevo);
				}
			}
		}
	}
	x.archivo.close();
}

double ListaSimple::obtenerTotalxMes(int mes)
{
	double total = 0; 
	if (estaVacia())
		return 0;

	ListaNodo* actual = primero;

	while (actual != nullptr)
	{
		if (actual->getMes() == mes)
		{
			total += actual->getTotal();
		}

		actual = actual->getSiguiente();
	}

	cout << "El monto total adeudado de las tarjetas de creditos es: " << total << "\n";
	return total;
}

void ListaSimple::eliminarDatosMes(int mes)
{
	ListaNodo* actual = primero;
	ListaNodo* nuevo;

	while (actual != nullptr)
	{
		if (actual->getMes() == mes)
		{
			if (actual == primero)
			{
				primero = actual->getSiguiente();
				actual = primero->getSiguiente();
			}
		}
	}
}
//bool estaVacia();
//void cargarDatos(int, int, int);
//double obtenerTotalxMes(int);
//void eliminarDatosMes(int);