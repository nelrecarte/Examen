#include "Utilerias.h"

Utilerias::Utilerias()
{

}

int Utilerias::obtenerCantidadRegistros()
{
	archivo.open("datab.bin", ios::in | ios::binary);

	long contador;
	
	archivo.seekg(0, ios::end);
	contador = archivo.tellg();

	archivo.close();
	
	return contador/ sizeof(registro);
}

void Utilerias::imprimirCantidadPorTipoPago()
{
	archivo.open("datab.bin", ios::in | ios::binary);
	long cash = 0, credit = 0, NA = 0;
	long pos;

	archivo.seekg(0, ios::end);
	long sizeFile = archivo.tellg();
	archivo.seekg(0, ios::beg);

	registro reg;

	while (archivo.tellg() != sizeFile )	
	{
		archivo.read(reinterpret_cast<char*>(&reg), sizeof(registro));
		//cout << reg.payment_type << "\n";
		if (!strcmp(reg.payment_type, "Cash"))
		{
			cash++;
		}
		else if (!strcmp(reg.payment_type, "Credit"))
		{
			credit++;
		}
		else if (!strcmp(reg.payment_type, "NA"))
		{
			NA++;
		}
	}

	archivo.close();
	cout << "Cash: " << cash << "\n";
	cout << "Credit: " << credit << "\n";
	cout << "NA: " << NA << "\n";

}

