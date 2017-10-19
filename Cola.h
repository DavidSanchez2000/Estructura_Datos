#include<iostream>
#include <vector>
using namespace std;

#ifndef __COLA_H__
#define __COLA_H__

template <class T> class Cola:public vector <T>
{
	public:
		Cola();
//		~Cola();
		void adicionarElemento(T L);
	    T eliminar();
		void mostrar();	 
		
		
};
#endif
