/*
Escribe un programa en C++ que dados dos numeros enteros que denotan el sueldo ´
bruto mensual de un trabajador y el numero de a ´ nos en la empresa, obtenga el salario ˜
mensual neto recibido por el trabajador teniendo en cuenta lo siguiente:
Se le descuenta un 15 % en impuestos del sueldo bruto.
Se le descuenta un 4.5 % de seguro medico. ´
Cada trabajador recibe una gratificacion mensual de 45 euros por cada trienio en ´
la empresa y 5 euros por cada ano en el tramo para el siguiente trienio.
*/


#include <iostream> 
using namespace std;

int main(){
	float sueldo_bruto;
	int edad;
	//salario neto mensual
	
	//salario bruto
	//OBETENER SALARIO MENSUAL NETO //15% impuestos del sueldo bruto //4.5% seguro medico
	cout<< " Introduce el valor de tu sueldo bruto: "<<endl;
	cin>> sueldo_bruto;
	float sueldo_dsps_impuestos=sueldo_bruto * 0.805;
	
	cout<<"El valor despues de impuestos	 es de :"<< sueldo_dsps_impuestos<<endl;
	
	//edad
	cout<<" Introduce una edad: "<<endl;
	cin>>edad;
	
	
	//gratificacion menusal 45 euros cada 3 años en la empresa y 5 euros 
	double gratificacion_mensual =(edad/3)*45;
	
	double gratificacion_adicional= (edad%3)*5;
	double gratificacion=gratificacion_mensual+gratificacion_mensual;
	
	
	double sueldo_neto= sueldo_dsps_impuestos+gratificacion;
	
	cout<< " El valor del sueldo neto es de: "<<sueldo_neto<<endl;
	
	
	
	return 0;
	
	
	
	
	
	
}