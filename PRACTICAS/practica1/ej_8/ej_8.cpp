/*
Implemente un programa que dada una hora inicial y una hora final
 (indicada en horas, minutos y segundos), calcule la diferencia entre ambas y muestre el resultado por
pantalla.
*/
#include <iostream>
using namespace std;

int main(){
	int hi,mi,si;  //iniciales
	int hf,mf,sf; //finales
	int hd,md,sd; //diferencias
	
	
	//pedir hora incial
	cout<< "Teclea la hora,minuto,segundos inicial: "<<endl;
	cin>>hi>>mi>>si;
	
	//pedir hora final
	cout<< "Teclea la hora,minuto,segundos finales: "<<endl;
	cin>>hf>>mf>>sf;
	
	//pasamos a segundos
	int horas_totales_iniciales= hi*3600 + mi*60 + si;
	int horas_totales_finales= hf*3600 + mf*60 + sf;
	int diferencia_en_segundos=abs(horas_totales_finales- horas_totales_iniciales);
	
	cout<< " La diferencia total en segundos entre una hora y otra es de: "<<diferencia_en_segundos<<endl;
	
	//diferencias
	
	hd=abs(hf-hi);
	md=abs(mf-mi);
	sd=abs(sf-si);
	
	
	cout << "la diferencia es de : " <<hd <<" horas "<< md<< " minutos y " << sd<< " segundos"<<endl;
	
	return 0;
	
	
}