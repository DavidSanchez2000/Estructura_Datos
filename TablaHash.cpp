#include "TablaHash.h"

using namespace std;

template <class T> TablaHash<T> :: TablaHash(T n):vector<T>(n){
	longitudActual = 0;

}
template <class T> bool TablaHash<T> :: adicionar(T e){
	int k = miHash(e);
	list <T> &l = buffer[k];
	l.push_back(e);
}

template <class T> bool TablaHash<T> :: buscar(T e){	
	int k = miHash(e);
	list<T> l = buffer[l];
	typename list<T>::iterator itr= find(l.begin(),l.end(),e);
	return (itr != NULL);
}

template <class T> bool TablaHash<T> :: eliminar(T e){
	if(buscar(e)==false)
		return false;
	list <T> l = buffer[miHash(e)];
	typename list <T> ::iterator itr = find(l.begin(),l.end(),e);
	l.erase(itr);
	return true;
}

template <class T> void TablaHash<T> :: mostrar(){	
	typename list<T>::iterator itr;
	for(int i = 0; i < buffer.size();i++)
	{
		list<T> ls = buffer[i];
		if(ls.size() >0)
		{
			for(itr = ls.begin(); itr!=ls.end();itr++)
			{
				cout<<*itr;
			}
		}
	}
}


int main()
{
	TablaHash <int> t1(11);
	t1.adicionar(10);
//	t1.mostrar();
	
}

































