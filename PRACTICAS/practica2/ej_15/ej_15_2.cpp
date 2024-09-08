#include <iostream>
using namespace std;

int main() {
    int num, divisores = 0;
    bool esPrimo = false;

    // ENTRADA DE DATOS
    cout << "Teclea un número para comprobar si es primo: ";
    cin >> num;

    // CÁLCULO
    if (num <= 1) {
        esPrimo = false;
    } else if (num == 2) {
        esPrimo = true;
    } else {
        int i = 2;
        do {
            if (num % i == 0) {
                divisores++;
                break; // Puedes salir del bucle inmediatamente cuando se encuentra un divisor.
            }
            i++;
        } while (i <= num / 2);

        if (divisores == 0) {
            esPrimo = true;
        }
    }

    // SALIDA
    if (esPrimo) {
        cout << "El número " << num << " es primo." << endl;
    } else {
        cout << "El número " << num << " no es primo." << endl;
    }

    return 0;
}
