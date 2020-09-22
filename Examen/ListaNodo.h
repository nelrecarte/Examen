#pragma once
#ifndef LISTANODO_H
#define LISTANODO_H

class ListaNodo
{
private:
	char* nombre;
	char* lastname;
	char* credit_card;
	char* date;
	double total;
	ListaNodo* siguiente; 

public:
	ListaNodo();
	ListaNodo(const char*, const char*, const char*, const char*, double, ListaNodo*);

	void setNombre(const char*);
	void setLastName(const char*);
	void setCreditCard(const char*);
	void setDate(const char*);
	void setTotal(double);
	void setSiguiente(ListaNodo*);

	char* getNombre();
	char* getLastName();
	char* getCreditCard();
	char* getDate();
	double getTotal();
	ListaNodo* getSiguiente();
};
#endif // !LISTANODO_H
