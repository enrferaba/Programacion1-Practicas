/*
Escribe y disena un programa que lea n ˜ umeros por teclado hasta que se introduzca un ´
-1. El programa mostrara por pantalla el n ´ umero de pares e impares le ´ ´ıdos.
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	
	//Introducir
	cout<<"Introduzca el valor de n: "<<endl;
	cin>>n;
	
	
	cout<<"Numeros contados,miramos si son par/impar"<<endl;
	//Bucles
	
	
	for (int numero=1; numero<=n; numero++){
		
		if (numero!=-1){
			if (numero%2==0){
				cout<<numero<<" es par"<<endl;
			}
			else {
				cout<<numero<<" es impar"<<endl;
			}
		}
	
	}
	
	cout<<"Finaliza el programa "<<endl;

	return 0;
}