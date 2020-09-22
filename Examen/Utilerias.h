#pragma once
#ifndef UTILERIAS_H
#define UTILERIAS_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct registro
{
	int id;
	char name[30];
	char lastname[30];
	char credit_card[25];
	char date[12];
	short int day;
	short int month;
	short int year;
	char payment_type[10];
	double total;
	char business_type[20];
	char business_name[50];
};


class Utilerias
{
	
public:
	Utilerias();

	fstream archivo;

	//Lee el archivo binario y obtiene la cantidad de registros almacenados
	int obtenerCantidadRegistros();

	//Lee el archivo binario y obtiene la cantidad de registros almacenados por tipo de pago "Payment_type" 
	// Cash: xxxx Credit : xxxxx NA: xxxxx
	void imprimirCantidadPorTipoPago();

};
#endif // !UTILERIAS_H

