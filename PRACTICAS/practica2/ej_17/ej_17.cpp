/*
Codificar un programa en C++ que calcule el factorial de un numero dado por teclado.
*/

#include <iostream>
using namespace std;

int main(){
	int n,numero;
	numero=1;
	
	//CONSOLA
	cout<<"Introduce el valor de n: "<<endl;
	cin>>n;
	
	//CALCULOS
	
	for(int i=1; i<=n; i++){
	
		numero= numero *i;
		
	}
	
	cout<<n<<" factorial es: "<<numero<<endl;
	
	
	
	
	
	
	
	
	
	return 0;	
}