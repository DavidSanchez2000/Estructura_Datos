#include<iostream>
#include<vector>

using namespace std;

#ifndef __LISTA_H__
#define __LISTA_H__

template <class T> class  Lista:public vector <T>
{
	public:
		Lista();
//		~Lista();
                void adicionarElemento(T element);
		T eliminar(int pos);
		void mostrar();
		int longitud();
		void insertar(T element, int pos);
		void buscar(T);
		void getelemento(int pos);
		void setElemento(T,int pos);
};
#endif
