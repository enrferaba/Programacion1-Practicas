/*
Implementa un algoritmo que determine las soluciones (reales o imaginarias) de una
ecuacion de segundo grado para cualquier valor de ´ a, b y c. Hay que tener en cuenta
que cuando a es igual a 0 no vale la formula general y se tendr ´ ´ıa una ecuacion de primer ´
grado, y que cuando a y b son 0 no hay solucion. 
*/
#include <iostream>
using namespace std;
#include <cmath>

int main(){
	float a,b,c,ecuacion;
	double res1,res2;
	
	//introducir valores
	cout<<"Introduce el valor de a: "<<endl;
	cin>> a;
	
	cout<<"Introduce el valor de b: "<<endl;
	cin>> b;
	
	cout<<"Introduce el valor de c: "<<endl;
	cin>> c;
	
	
	res1=-b+(sqrt(pow(b,2)-4*a*c))/(2*a);
	res2=-b-(sqrt(pow(b,2)-4*a*c))/(2*a);
	
	//bx+c=0___> -c/b
	ecuacion=-c/b;
	
	//condiciones
	 if ((pow(b,2)-4*a*c)<0){
		cout<<" la raiz es negativa(no tiene solucion)"<<endl;
	}
	else if (a!=0 && b!=0){
		cout<<"calculo 2 grado "<<res1<<" " <<res2<<endl;
	}
	else if (a==0){
		cout<<"calculo primer grado"<<ecuacion<<endl;
	}
	
	else{
		cout<<"la ecuacion no tendra solucion "<<endl;
	}
		
	
	return 0;
}