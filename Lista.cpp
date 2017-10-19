#include "Lista.h"

using namespace std;

template <class T> Lista<T> :: Lista():vector<T>() {};

template <class T> void Lista<T>::insertar(T element ,int pos)
{
	this -> insert(this ->begin()+ pos,element);
}

template <class T> T Lista<T>::eliminar(int pos)
{
	T element =  this->at(pos);
	this->erase(this->begin() + pos);
	return element;
}

template <class T> void Lista<T>::mostrar()
{
	for(int i = 0; i< this->size();i++)
	{
		cout<<"Elemento"<< this->at(i)<<endl;
	}
}

template <class T> int Lista<T>::longitud()
{
	int L = this->size();
	cout<<"Longitud"<< this->size();
}

template <class T> void Lista<T>::adicionarElemento(T element)
{
	this->push_back(element);
}

template <class T> void Lista <T>::buscar(T element )

{
	vector <T> tmpl(this);
	int n = this->size();
	for (int i = 0; i < n; i++)
	{
		if(this->push_back(i)== element)
		{	return element;
		}
	}
}
