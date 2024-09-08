/*
7. Ejercicio 7
Escribe un programa que rote k posiciones hacia la derecha los elementos de una fila f
de una matriz.
*/

#include <iostream>
using namespace std;

//Funcion para rotar una fila k posiciones hacia la derecha 

void rotarFila(int m[],int tam,int k){
	//almacenamos temporalmente las filas rotadas
	int aux[tam];
	
	//Copiamos los k elementos al arreglo auxiliar 
	for(int i=0; i<k; i++){
		aux[i] = m[(tam-k+i)%tam];
	}
	
	//Desplazamos los elementos a la derecha
	for(int i=tam -1;i >=k;i--){
		fila[i] = fila[i-k];
	}
}