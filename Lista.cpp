#include "Lista.h"

using namespace std;

template <class T> Lista<T> :: Lista():vector<T>() {};

template <class T> void Lista<T>::adicionarElemento(T element ,int Pos)
{
	this -> insert(this ->begin()+ Pos,element);
}

