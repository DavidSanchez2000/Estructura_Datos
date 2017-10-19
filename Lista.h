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
	    void adicionarElemento(T element,int Pos);
		T eliminar(int pos);
		void mostrar();
		int longitud();
		void insertar(T);
		void buscar(T);
		void getelemento(int pos);
		void setElemento(T,int pos);
		
				
};
#endif
