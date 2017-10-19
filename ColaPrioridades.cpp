#include "ColaPrioridades.h"

using namespace std;

template <class T> void ColaPrioridades <T>::adicionar(T element)
{
	this->insert(this->begin(),element);
}

template <class T> int ColaPrioridades <T>::buscarPos(T element)
{
	for(int i = 0; i < this->size(); i++)
	{
		if(ColaPrioridades[i]==element);
	}
	return i;
}

