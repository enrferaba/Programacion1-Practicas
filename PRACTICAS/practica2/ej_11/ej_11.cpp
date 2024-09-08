/*
Escribe un programa que escriba los numeros del 1 al 100 en l ´ ´ıneas de 10 numeros. Des- ´
pues de 100 el programa debe escribir ”Fin del programa” en una l ´ ´ınea nueva. Implementa 3 versiones diferentes, 
cada una con un tipo de bucle diferente (while, do-while,for).
*/
#include <iostream>

using namespace std;

int main() {
    int numero = 1;

    while (numero <= 100) {
        cout << numero << " ";
		
		if (numero % 10== 0){
			cout<<endl;
		}
        numero++;
	}
    

    cout << "Fin del programa" << endl;

    return 0;
}


