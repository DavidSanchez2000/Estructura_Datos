#include<algorithm>
#include <vector>
#include <stdlib.h>
#include<iostream>
#include<list>

using namespace std;

template <class T> class TablaHash:public vector<T>
{
	private:
		vector< list<T> > buffer;
		int longitudActual;
		int miHash(T k){
			return k % buffer.size();
		}
	public:
		TablaHash(T n);
		bool adicionar(T e);
		bool eliminar(T e);
		bool buscar(T e);
		void mostrar();
		void limpiar();
};


