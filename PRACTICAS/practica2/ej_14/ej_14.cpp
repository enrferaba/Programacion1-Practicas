/*	
Disena e implementa un programa que calcule el producto de los d ˜ ´ıgitos de un numero ´
entero le´ıdo por teclado. Ejemplo, si el numero fuera 48, el producto ser ´ ´ıa 32.

*/
#include <iostream>
using namespace std;

int main() {
    int num, num1, num2, producto = 1;

    // Consola
    cout << "Introduce el valor: " << endl;
    cin >> num;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        num2 = num % 10;   // Obten el ultimo digito
        num1 = num / 10;   // Elimina el ultimo digito del numero
        producto *= num2;  // Multiplica el producto por el digito
        num = num1;        // Actualiza 'num' para la proxima iteracion
    }

    cout << "El producto de los digitos es " << producto << endl;

    return 0;
}
