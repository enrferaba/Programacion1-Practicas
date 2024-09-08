/*
Haz un programa que pida al usuario el valor de un radio y una opcion para elegir ´
mediante un menu´ switch-case el calculo de: longitud de una circunferencia, ´ area de ´
una circunferencia, area de una esfera y volumen de una esfera.
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <string>
int main(){
	float radio;
	double longitud_circunferencia;
	double area_circunferencia;
	double area_esfera;
	double volumen_esfera;
	
	
	
	
	
	cout<<"Teclea el valor del radio: "<<endl;
	cin>>radio;
	//CALCULOS
	longitud_circunferencia=2 * M_PI *radio;
	area_circunferencia= M_PI * pow(radio,2);
	area_esfera= 4* M_PI *pow(radio,2);
	volumen_esfera=4/3*M_PI*pow(radio,3);
	
	int opcion;
	
		cout<<"Elije una opcion: "<<endl;
		cout<<"1. Longitud de la circunferencia"<<endl;
		cout<<"2. Area de la circunferencia"<<endl;
		cout<<"3. Area de la esfera"<<endl;
		cout<<"4. volumen de la esfera"<<endl;
	cin >>opcion;
	
	switch (opcion){
		case 1:
			cout<<"El valor de la longitud de la conferencia es: "<<longitud_circunferencia<<endl;
		break;
		
		case 2:
			cout<<"El valor del area de la circunferencia es: "<<area_circunferencia<<endl;
		break;
		
		case 3:
			cout<<"El valor del area de una esfera es: "<<area_esfera<<endl;
		break; 
		
		case 4:
			cout<<"El valor del volumen de la esfera es: "<<volumen_esfera<<endl;
		break;
		default: 
			cout<<"Opcion no valida"<<endl;
	}	
	return 0;
}	