#include "cola.h"

Cola::Cola(){
	this->H=NULL;
	this->T=NULL;
}

Cola::Cola(int dato){
	Nodo *m= new Nodo(dato);
	this->H=m;
	this->T=H;
}

bool Cola::IsVacio(){
	
	return (this->H == NULL && this->T == NULL);
}



void Cola::Encolar(int dato){
	Nodo *m= new Nodo(dato);
	if (IsVacio())
	{
		this->T=m;
		this->H=m;
		return ;
	}

	this->T->Sig=m->Sig;
	this->T=m;
	return ;
}

Nodo* Cola::Buscar(int ref){
	Nodo *aux = this->H;

	if (IsVacio())
	{
		//error "La cola esta vacía."
		return NULL;
	}

	while(aux->Dato != ref){
		if(aux->Sig == NULL){
		//error"La referencia no esta en la cola."
			return NULL;
		}
		aux=aux->Sig;
	}

	return aux;
}

Nodo* Cola::Buscar(int ref,Nodo *n){
	if (IsVacio())
	{
		//error"La lista esta vacía"
		return NULL;
	}

	if (n->Dato != ref)
	{
		if(n->Sig == NULL){
		//error<<"La referencia no esta en la lista."
			return NULL;
		}
		return Buscar(ref,n->Sig);
	}

	return n;
}

int Cola::Desencolar(){
	int d = this->H->Dato;
	if (IsVacio())
	{
	//error"La lista esta vacía."
		return d;
	}
	Nodo *aux = this->H;
	if (this->H == this->T)
	{
		this->H = NULL;
		this->T = NULL;
		return d;
	}

	while(aux->Sig != this->T)
		aux=aux->Sig;

	this->T=aux;
	this->T->Sig=NULL;
	return d;
}

