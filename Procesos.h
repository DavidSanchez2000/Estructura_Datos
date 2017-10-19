#include <iostream>
#ifndef __PROCESOS_H__ 
#define __PROCESOS_H__
#include <vetcor>
using namespace std;


template <class T> class Procesos
{
	private:
		string nombre;
		int estado;
		int cantidadCpu;
		int cantidadMemoria;
		int prioridad;
	public:
		Procesos(string nombre, int estado, int cantidadCpu,int cantidadMemoria,int prioridad);
		void mostrar();
		
		
};

#endif
