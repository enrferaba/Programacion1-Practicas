//Escribe un programa que dado un numero ´ n calcule el resultado de la siguiente funcion.



#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n;
	
	cout<< "Teclea el valor de n"<<endl;
	cin>> n;
	
	double resultado=(abs(pow(n,3))*log(pow(n,2)))/sqrt(pow(n,3));
	
	cout<< "El resultado de esa operacion con n="<< n << " es de "<<resultado<<endl;

	return 0;
	
	
}