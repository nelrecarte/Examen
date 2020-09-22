#pragma once
#ifndef LISTANODO_H
#define LISTANODO_H
#include <string>

class ListaNodo
{
private:
	char* nombre;
	char* lastname;
	char* credit_card;
	char* date;
	double total;
	int mes; 
	int anio;
	ListaNodo* siguiente; 

public:
	ListaNodo();
	ListaNodo(const char*, const char*, const char*, const char*, double,int, int, ListaNodo*);

	void setNombre(const char*);
	void setLastName(const char*);
	void setCreditCard(const char*);
	void setDate(const char*);
	void setTotal(double);
	void setMes(int);
	void setAnio(int);
	void setSiguiente(ListaNodo*);

	char* getNombre();
	char* getLastName();
	char* getCreditCard();
	char* getDate();
	double getTotal();
	int getMes();
	int getAnio();
	ListaNodo* getSiguiente();
};
#endif // !LISTANODO_H
