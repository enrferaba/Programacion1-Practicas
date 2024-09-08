/*
Codifique un programa en C++ que lea un numero real e imprima la ra ´ ´ız cuadrada del
mismo. Como la ra´ız solo esta definida para n ´ umeros positivos, si el n ´ umero introdu- ´
cido es negativo, el programa no calcula la ra´ız e imprime por pantalla un mensaje de
error
*/

#include <iostream>
using namespace std;
#include <cmath>

int main(){
	int a;
	int aa;
	
	
	cout<<"Teclea un valor para a: "<<endl;
	cin>>a;
	aa=sqrt(a);
	
	if (a>=0){
		cout<<"El valor de la raiz cuadrada de a es: "<<aa<<endl; 
	}else{
		cout<<"Error"<<endl;
	}
	
	return 0;
}	