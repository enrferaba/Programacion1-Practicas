/*
Codificar un programa en C++ que indique si un numero es perfecto. Se dice que un ´
numero es perfecto si es igual a la suma de sus divisores menores que ese n ´ umero. Por ´
ejemplo, 6 es perfecto ya que 6 = 1+2+3, 28 es perfecto ya que 28 = 1 + 2 + 4 + 7 + 14.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaDivisores = 0;
    bool primerDivisor = true; // Variable booleana para controlar la impresión del signo "+".

    cout << "Ingrese el valor del número: " << endl;
    cin >> numero; // Leer el número ingresado por el usuario.

    cout << "Divisores de " << numero << ": ";
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) { // Comprobar si "i" es un divisor de "numero".
            if (!primerDivisor) { // Si no es el primer divisor, imprimir el signo "+".
                cout << " + ";
            }
            cout << i; // Imprimir el divisor.
            sumaDivisores += i; // Sumar el divisor a la suma de divisores.
            primerDivisor = false; // Cambiar el estado de la variable para indicar que no es el primer divisor.
        }
    }

    if (sumaDivisores == numero) {
        cout << " = " << sumaDivisores << " (es un número perfecto)" << endl;
    } else {
        cout << " = " << sumaDivisores << " (no es un número perfecto)" << endl;
    }

    return 0;
}

