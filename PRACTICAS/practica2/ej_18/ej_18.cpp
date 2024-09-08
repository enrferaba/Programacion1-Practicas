/*
Codificar un programa que calcule la media aritmetica y la media geometrica de un
conjunto de numeros reales pedidos por teclado. Nota: a priori no se sabe cuantos elementos
tendra el conjunto, con lo que el programa pedira numeros hasta que el usuario quiera.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double numero;
    double sumaAritmetica = 0;
    double sumaGeometrica = 1;
    int cantidad = 0;
    char continuar;

    // CONSOLA

    // CÁLCULO MEDIA ARITMÉTICA

    do{
        cout << "Introduce un numero: " << endl;
        cin >> numero;

        sumaAritmetica += numero;
        sumaGeometrica *= numero;
        cantidad++;

        cout << "Quieres seguir anadiendo numeros?: (s) para seguir y (n) para parar: " << endl;
        cin >> continuar;
    } while(continuar == 's');

    if (cantidad == 0){
        cout << "No se ingresaron numeros suficientes: " << endl;
    }
    else {

        double mediaAritmetica = sumaAritmetica / cantidad;
        double mediaGeometrica = pow(sumaGeometrica, 1.0 / cantidad);

        cout << "El valor de la media aritmetica es de: " << mediaAritmetica << endl;
        cout << "El valor de la media geometrica es de: " << mediaGeometrica << endl;
    }

    // CÁLCULO MEDIA GEOMÉTRICA

    return 0;
}
