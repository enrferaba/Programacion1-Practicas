/*
Calcule el precio venta publico en rebajas de un producto a partir de su precio antiguo, ´
sabiendo que si el precio antiguo es menor que 10 euros, se le descuenta un 5 %, si esta´
comprendido entre 10 y 30 euros se le descuenta un 7 %, si esta comprendido entre 30 y ´
50 euros se le descuenta un 8 %, y si es mayor que 50 euros se le descuenta un 10 %.
*/

#include <iostream>

using namespace std;

int main(){
	float precioa,precioventa;
	
	cout<<"Introduce el valor del precio antiguo: "<<endl;
	cin>>precioa;
	
	
	if (precioa<10){
		precioventa=precioa*0.95;
		cout<<"El precio de venta es de: "<<precioventa<<endl;
	}
	else if (precioa>10 && precioa<30){
		precioventa=precioa*0.93;
		cout<<"El precio de venta es de: "<<precioventa<<endl;
	}
	else if (precioa>30 && precioa<50){
		precioventa=precioa*0.92;
		cout<<"El precio de venta es de: "<<precioventa<<endl;
	}
	else if (precioa>50){
		precioventa=precioa*0.9;
		cout<<"El precio de venta es de: "<<precioventa<<endl;
	}
	else{
		precioventa=precioa;
		cout<<"El precio de venta es de: "<<precioventa<<endl;
	}
	
	
	
	
	
	return 0;
}