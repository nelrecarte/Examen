#include "ListaNodo.h"

ListaNodo::ListaNodo()
{

}

ListaNodo::ListaNodo(const char* _nombre, const char* _apellido, const char* _tarjeta, const char* _fecha, double _total, int _mes, int _anio, ListaNodo* _siguiente)
{
	setNombre(_nombre);
	setLastName(_apellido);
	setCreditCard(_tarjeta);
	setDate(_fecha);
	setTotal(_total);
	setMes(_mes);
	setAnio(_anio);
	setSiguiente(_siguiente);
}

void ListaNodo::setNombre(const char* _nombre)
{
	strcpy_s(nombre,strlen(_nombre), _nombre);
}

void ListaNodo::setLastName(const char* _lastName)
{
	strcpy_s(lastname, strlen(_lastName), _lastName);
}

void ListaNodo::setCreditCard(const char* _tarjeta)
{
	strcpy_s(credit_card, strlen(_tarjeta), _tarjeta);
}
void ListaNodo::setDate(const char* _fecha)
{
	strcpy_s(date, strlen(_fecha), _fecha);
}

void ListaNodo::setTotal(double _total)
{
	this->total = _total;
}

void ListaNodo::setMes(int _mes)
{
	this->mes = _mes;
}
void ListaNodo::setAnio(int _anio)
{
	this->anio = _anio;
}
void ListaNodo::setSiguiente(ListaNodo* _siguiente)
{
	this->siguiente = _siguiente;
}

char* ListaNodo::getNombre()
{
	return this->nombre;
}
char* ListaNodo::getLastName()
{
	return this->lastname;
}
char* ListaNodo::getCreditCard()
{
	return this->credit_card;
}
char* ListaNodo::getDate()
{
	return this->date;
}
double ListaNodo::getTotal()
{
	return this->total;
}
int ListaNodo::getMes()
{
	return this->mes;
}
int ListaNodo::getAnio()
{
	return this->anio;
}
ListaNodo* ListaNodo::getSiguiente()
{
	return this->siguiente;
}
//ListaNodo(const char*, const char*, const char*, const char*, double, ListaNodo*);