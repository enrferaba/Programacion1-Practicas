/*
1. Ejercicio 1
Implemente un programa en C++ que realice las siguientes operaciones en el siguiente
orden:
1. Introducir el numero de elementos del vector. ´
2. Introducir los elementos del vector.
3. Mostrar los elementos del vector.
4. Calcular la suma de los elementos del vector.
5. Calcular la media de los elementos del vector.
6. Calcular la varianza de los elementos del vector.
7. Determinar el valor maximo de los elementos del vector. ´
8. Determinar el valor m´ınimo de los elementos del vector
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int elementos; 
	
	//1. Introducir el numero de elementos del vector. 
	cout<<"Introduce el numero de elementos del vector: "<<endl;
	cin>>elementos;
	
	
	//2. Introducir los elementos del vector.
	float v[elementos];
	for(int i=0;i<elementos;i++){
		cout<< "Introduce el numero del vector "<<i<<endl;
		cin>>v[i];
		
	}
	
	//3. Mostrar los elementos del vector.
	cout<<"Los elementos del vector son "<<endl;
	for (int i=0;i<elementos ;i++){
		cout<<v[i]<<endl;		
	}
	
	// 4. Calcular la suma de los elementos del vector. 
	cout<<endl;
	cout<<"Operacion suma "<<endl;
		float suma =0;
	for (int i =0;i<elementos;i++){
		
		suma= suma +v[i];
	}
	cout<<"La suma del vector v es de: "<<suma <<endl;
	
	//5. Calcular la media de los elementos del vector.
	cout<<endl;
	cout<<"Operacion media: "<<endl;
	float media= 0;
	media=suma/elementos;
	cout<<"La media es de: "<<media<<endl;
	
	// 6. Calcular la varianza de los elementos del vector. 
	cout<<"Operacion calculo varianza: "<<endl;
	float varianza =0;
	for (int i=0; i<elementos;i++){
		varianza = varianza + pow(v[i]-media,2);
	}
	varianza = varianza / (elementos-1 );
	cout<<"La varianza del vector v es: "<<varianza<<endl;
	
	//7. Determinar el valor maximo de los elementos del vector. 
	cout<<endl;
	cout<<"Operacion valor maximo del vector: "<<endl;
	float numero_mayor=v[0];
	for (int i=0; i<elementos;i++){
		if(v[i]>numero_mayor){
			numero_mayor=v[i];
		}
	}
	cout<<"El elemento maximo del vector es: "<<numero_mayor<<endl;
		
	//8. Determinar el valor m´ınimo de los elementos del vector
	cout<<endl;
	cout<<"Operacion valor minimo del vector: "<<endl;
	float numero_menor=v[0];	
	for (int i=0; i<elementos;i++)
		if(v[i]<numero_menor){
			numero_menor=v[i];
		}
	cout<<"El elemento minimo del vector es: "<<numero_menor<<endl;
	
	
	
	
	return 0;
}