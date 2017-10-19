#include "Cola.h"

using namespace std;

template <class T> Cola<T>::Cola():vector<T>() {};

template <class T> void Cola <T>::adicionarElemento(T L)
{
	this ->insert(this->begin(),L);
}

template <class T> void Cola <T>::mostrar()
{
	int n = this -> size();
	for(int i = 0; i < n; i++)
	{
		cout<<"Elemento"<<this->at(i)<<endl;
		
	}
}

template <class T> T Cola <T>::eliminar() //En duda
{
	int Posultimo = this -> size()-1;
	T L = this->at(Posultimo);
	this->pop_back();
	return L;

}
int main()
{
	Cola <int> c;
	c.adicionarElemento(5);
	c.adicionarElemento(5);
	c.adicionarElemento(10);
	c.mostrar();
	cout<<"Vector despues de borrar elementos: "<<endl;
	c.eliminar();
	c.mostrar();
		
	return 0;
}
