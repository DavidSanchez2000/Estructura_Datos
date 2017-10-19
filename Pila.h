#include <vector>
#include <iostream>

using namespace std;

#ifndef __PILA_H__
#define __PILA_H__

template <class T> class Pila:public vector <T> //Cambie esta wea :v <T>
{
	
	public:
		Pila();
//		~Pila();
		void adicionarElemento( T);
		T eliminar();
		void mostrar();	
		
	
};
#endif
	

