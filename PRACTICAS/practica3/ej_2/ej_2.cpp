/*
2. Ejercicio 2
Codifique un programa que permita invertir los elementos de un vector. Se podra hacer ´
usando un vector auxiliar o no, pero en cualquier caso, al final el vector original tiene
que quedar invertido.
*/
#include <iostream>
using namespace std;

int main() {
	int elementos; 
	cout<<"Introduce el numero de elementos que tiene el vector: "<<endl;
	cin>>elementos;
	float v[elementos];
	for (int i=0;i<elementos;i++){
		cout<<"Introduce la posicion "<<i <<" del vector"<<endl;
		cin>>v[i];
	}
	
	
	//mostramos los elementos del vector 
	cout<<"Los elementos del vector son:"<<endl;
	for(int i=0;i<elementos;i++){
		cout<<v[i]<<" ";
	}
	//Buscamos invertir el vector 
	float vI[elementos]; //vector invertido
	cout<<endl;
	cout<<"El nuevo vector invertido es: "<<endl;
	for (int i=0;i<elementos;i++){
		vI[i]=v[elementos-i-1];  // esto se hace porque sino quedaria de forma : v[5-4]=v[1] y v[0] es el inicial
		cout<<vI[i]<<" ";
	}
	
	
	
	return 0;
}