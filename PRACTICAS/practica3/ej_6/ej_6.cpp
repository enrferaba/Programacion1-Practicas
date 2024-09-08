/*
6. Ejercicio 6
Dada una matriz de reales de m filas y n columnas,
 implemente un programa que calcule la media de los elementos de
 cada columna y las almacene en un vector de n elementos.

*/

#include <iostream>
using namespace std;
int main(){
	int m, n;
	
	// Introducimos por teclado
	cout<<"Introduce el numero de filas de la matriz: "<<endl;
	cin>>m;
	
	cout<<"Introduce el numero de columnas de la matriz: "<<endl;
	cin>>n;
	
	//Creamos la matriz
	int matriz[m][n];
	
	//Introducimos los elementos en la matriz;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"Introduce el elemento de la fila: "<<i+1<<" y el elemento de la columna: "<<j+1<<endl;
			cin>>matriz[i][j];
		}
		cout<<endl;
	}
	
	//Mostramos la nueva matriz 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//calculamos la media de los elementos de cada columna
	double medias[n]={0};
	
	for(int j=0;j<n;j++){
		double suma = 0;
		for(int i=0;i<m;i++){
			suma= suma + matriz[i][j];
		}
		medias[j]=suma/m;
	}
	cout<<"La media de cada columna es: "<<endl;
	for(int j=0;j<n;j++){
		cout<<"C"<<j<<": "<<medias[j]<<endl;
	}
	
	
	
	
	return 0;
}