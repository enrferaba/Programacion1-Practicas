/*
Escribe un programa que tras pedir 2 numeros reales por pantalla muestre cu ´ al es el ´
mayor de los dos. Se debe hacer con la estructure if-else y el operador ternario visto en
clase.
*/

#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	
	//NUMEROS
	
	cout<<"Introduce un valor para num1 :"<<endl;
	cin>>num1;
	
	cout<<"Introduce un valor para num2 :"<<endl;
	cin>>num2;
	
	//CONDICIONES
	if (num1>num2){
		cout<<num1<< " es mayor que "<<num2<<endl;
	}
	else if (num1<num2){
		cout<<num2<< " es mayor que "<<num1<<endl;
	}
	else {
		cout<<"Son el mismo numero";
	}
	
	
	
	return 0;
}	