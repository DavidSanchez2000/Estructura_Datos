#include "Cola.h"
#include <iostream>
#ifndef __COLAPRIORIDADES_H__
#define __COLAPRIORIDADES_H__
using namespace std;

template <class T> class ColaPrioridades:public Cola <T>
{
	public:
		void adicionar(T element);
		int buscarPos(T element);
		void insertar(T element, int Pos);
		void eliminar();
		void buscarProximoActivo();
		void intercambiar(int Pos);
		
		
};

#endif

