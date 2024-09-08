/*
Se desea calcula el precio medio de un producto que se vende en cuatro establecimientos.
 Para ello, implemente un programa en C++ que lea por teclado cuatro precios y
calcule su media. Ademas, se desea saber cu ´ al es el porcentaje que supone el precio ´
en cada uno de los comercios con respecto al total, y tambien deber ´ a ser probado por ´
pantalla.
*/


#include <iostream>

using namespace std;

int main(){
	float precio1;
	float precio2;
	float precio3;
	float precio4;
	
	cout<<" Teclea el valor del precio 1: "<<endl;
	cin>>precio1;
	
	cout<<" Teclea el valor del precio 2: "<<endl;
	cin>>precio2;
	
	cout<<" Teclea el valor del precio 3: "<<endl;
	cin>>precio3;
	
	cout<<" Teclea el valor del precio 4: "<<endl;
	cin>>precio4;
	
	double precio_total=precio1+precio2+precio3+precio4;
	
	double media_precios= precio_total / 4;
	
	cout<<" La media de los precios es de: "<<media_precios<<endl;
	
	//cambair media_precios por precio total
	double porcentaje1=precio1/precio_total*100;
	double porcentaje2=precio2/precio_total*100;
	double porcentaje3=precio3/precio_total*100;
	double porcentaje4=precio4/precio_total*100;
	
	cout<<" El valor del porcentaje 1 es: "<<porcentaje1<<"%"<<endl;
	cout<<" El valor del porcentaje 2 es: "<<porcentaje2<<"%"<<endl;
	cout<<" El valor del porcentaje 3 es: "<<porcentaje3<<"%"<<endl;
	cout<<" El valor del porcentaje 4 es: "<<porcentaje4<<"%"<<endl;
	
	
	double porcentaje_total=porcentaje1+porcentaje2+porcentaje3+porcentaje4;
	
	cout<<" El valor del porcentaje total es: "<<porcentaje_total<<"%"<<endl;
	











	return 0;
}