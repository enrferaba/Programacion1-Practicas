/*
Codificar un programa que calcule la suma de los N primeros numeros, donde ´ N es
un numero entero positivo que el usuario introducir ´ a por teclado. Despu ´ es de mostrar ´
el resultado, comprobar con un esquema condicional que se cumple que la suma es
((1 + N) ∗ N)/2, y que el programa muestre si se cumple o no se cumple.


*/

#include <iostream>
using namespace std;

int main() {
    int n, numero;
    numero = 0;

    // CONSOLA
    cout << "Introduce el valor de n: ";
    cin >> n;

    // Verificar si n es positivo
    if (n <= 0) {
        cout << "El valor de N debe ser un número entero positivo." << endl;
    } else {
        // CÁLCULOS
        for (int i = 1; i <= n; i++) {
            numero = numero + i;
        }

        cout << "El valor de la suma es: " << numero << endl;

        if (numero == ((1 + n) * n) / 2) {
            cout << "Se cumple" << endl;
        } else {
            cout << "No se cumple" << endl;
        }
    }

    return 0;
}
