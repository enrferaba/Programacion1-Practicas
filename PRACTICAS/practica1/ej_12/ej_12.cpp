/*
Se dispone de un dinero para tres proyectos de investigacion concedidos a tres ciudades: ´
Cordoba recibe el 30 %, Sevilla el 50 %, y M ´ alaga el resto. Adem ´ as, cada ciudad repartir ´ a´
el dinero recibido entre sus distintas sedes:
Cordoba: Capital (50 %), Palma del R ´ ´ıo (20 %) y Lucena (30 %).
Sevilla: Capital (35 %) y Dos Hermanas (65 %).
Malaga: Capital (80 %) y Benalm ´ adena (20 %). ´
Se desea implementar un programa que pida un numero real correspondiente al dinero ´
de los proyectos y muestre por pantalla que dinero ira destinado a cada ciudad, y a cada ´
una de sus sedes.
*/


#include <iostream>
using namespace std;

int main(){
	float dinero;
	
	//particion de dinero
	
	cout<<"Introduce el dinero que tienes: "<<endl;
	cin>>dinero;
	
	float sevilla= dinero*0.5;
	float cordoba= dinero*0.3;
	float malaga= dinero*0.2;
	
	float palma_del_rio=cordoba*0.2;
	float cordoba_capital=cordoba*0.5;
	float lucena=cordoba*0.3;
	
	float sevilla_capital=sevilla*0.35;
	float dos_hermanas=sevilla*0.65;
	
	float malaga_capital=malaga*0.8;
	float benalmadena=malaga*0.2;
	
	
	
	
	
	//SEVILLA
	cout<<"El dinero destinado a sevilla es de: "<<sevilla<<" euros"<<endl;
	
	cout<<"El dinero destinado a sevilla capital es de: "<<sevilla_capital<<" euros"<<endl;
	
	cout<<"El dinero destinado a dos hermanas es de: "<<dos_hermanas<<" euros"<<endl;
	
	//CORDOBA
	cout<<"El dinero destinado a cordoba es de: "<<cordoba<<" euros"<<endl;
	
	cout<<"El dinero destinado a cordoba capital es de: "<<cordoba_capital<<" euros"<<endl;
	
	cout<<"El dinero destinado a lucena es de: "<<lucena<<" euros"<<endl;
	
	cout<<"El dinero destinado a palma del rio es de: "<<palma_del_rio<<" euros"<<endl;
	
	//MALAGA
	
	cout<<"El dinero destinado a malaga capital es de: "<<malaga_capital<<" euros"<<endl;
	
	cout<<"El dinero destinado a benalmadena es de: "<<benalmadena<<" euros"<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}