/*
3. Ejercicio 3
Un polinomio de grado N se puede representar en programacion como un conjunto de ´
N elementos reales, donde cada elemento ser´ıa el coeficiente asociado a un termino del ´
polinomio. Implemente un programa que realice de manera secuencial las siguientes
operaciones:
1. Leer un polinomio de grado N introducido por el usuario.
2. Mostrar el polinomio por pantalla de manera adecuada.
3. Evaluar el polinomio en un punto X introducido por el usuario.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int elementos;
	//cuantos elementos tendra el vector 
	cout<<"Introduce el grado del polinomio +1: "<<endl;
	cin>>elementos;

	//Introducimos los valores del vector
	float v[elementos];
	for(int i =0;i<elementos;i++){
		cout<<"Introduce la posicion "<<i << " del vector"<<endl;
		cin>>v[i];
	}		

	//Mostramos el vector 
	cout<<endl;
	cout<<"Mostramos el vector "<<endl;
	for (int i=0;i<elementos;i++){
		cout<<v[i]<<" ";
	}
	//Mostramos el vector que deberia de ser de forma ax^n+bx^n ...
	cout<<endl;
	cout<<"Mostramos el polinomio de forma correcta "<<endl;
	for(int i=0;i<elementos;i++){
		cout<<v[i]<<" x^ "<<i;
		if(i!=elementos-1){
			cout<<"+";
		}	
	}
	
	//evalusmos para un valor de x introducido por el usuario
	cout<<endl;
	float x;
	cout<<"Introduce el valor de x: "<<endl;
	cin>>x;
	
	float res=0;
	for(int i=0;i<elementos;i++){
		res= res + v[i] *pow(x,i);
	}
	
	cout<<"El resultado del polinomio con x="<<x<<" es de: "<<res<<endl;
	
	
	
	


	return 0;
}