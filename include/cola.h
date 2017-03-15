#include "Nodo.h"

class Cola
{
public:
	Nodo *H,*T;
	int Dato;
	
	Cola();
	Cola(int dato);

	void Encolar(int dato);
	bool IsVacio();
	Nodo* Buscar(int ref);
	Nodo* Buscar(int ref,Nodo *n);
	int Desencolar();
};
