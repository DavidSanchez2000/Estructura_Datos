#include "Pila.h"

template <class T> Pila<T>::Pila():vector<T>() {};



template <class T> void Pila <T>::adicionarElemento(T L)
{
	this -> push_back(L);
}


template <class T> void Pila <T>::mostrar()
{
	int n = this->size();
	for(int t = 0; t < n; t ++)
	{
		cout<<"Elemento: "<<this->at (t)<<","<<endl;
	}



}

template <class T> T Pila <T>::eliminar()
{
	int Posultimo = this -> size()-1;
	T L = this->at(Posultimo);
	this->pop_back();
	return L;
}

int main()
{
	Pila <int> p;
	p.adicionarElemento(5);
	p.adicionarElemento(4);
	p.adicionarElemento(10);
	p.mostrar();
	cout<<"Vector despues de borrar elementos: "<<endl;
	p.eliminar();
	p.mostrar();
	
	return 0;
}

