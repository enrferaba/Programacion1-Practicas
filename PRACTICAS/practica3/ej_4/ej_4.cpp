/*
4. Ejercicio 4
Realice un programa que maneje un vector de enteros de tamano˜ N a traves de un men ´ u´
con cinco opciones:
Anadir un elemento al vector (comprobando que el vector no est ˜ e lleno). ´
Eliminar un elemento del vector (comprobando que no este vac ´ ´ıo). Realiza los
desplazamientos de elementos necesarios para que no queden huecos en el vector.
Mostrar el contenido del vector.
Contar el numero de divisores de 5. ´
Terminar.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout <<"Bienvenido a mi programa "<<endl;
	int opcion;
	int n;
	cout<<"Introducir el numero de elmeentos del vector"<<endl;
	cin>>n;
	float v[n]; 
	
	do {
		cout<<"Ingrese el numero de la opcion que desee hacer:"
		cout<<"1. Añadir un elemento al vector"<<endl;
		cout<<"2. Eliminar un elemento del vector"<<endl;
		cout<<"3. Mostrar el contenido del vector"<<endl;
		cout<<"4. Contar el numero de divisores de 5 "<<endl;
		cout<<"5. Finaliza el programa "<<endl;
		cin>>opcion;
		
		//comrpobamos si el vector esta lleno 
		if (opcion==1){
			if (i<n){
				cout<<" Ha elejido la elccion de añadir un elemento"<<endl;
				cout<<"Ingrese el elemento "<<i<<endl;
				cin>>v[i];
				i++;
			}
			else{
				cout<<"No se puede ingresar un elemento porqure el vecto ya esta lleno "<<endl;
			}
		}
		else{
			
			
		}
		if( opcion== 2){
			
			
		}
		
		else{
			
		}
		if( opcion== 3){
			
			
		}
		
		else{
			
		}
		if( opcion== 4){
			
			
		}
		
		else{
			
		}
		
		
	
	
	
	return 0;
}

