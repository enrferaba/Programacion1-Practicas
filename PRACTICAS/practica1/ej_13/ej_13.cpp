#include <iostream>
using namespace std;

int main() {
    int saldo = 1000; // Saldo inicial del jugador en euros

    cout << "Bienvenido a la Rule" << endl;

    while (saldo > 0) {
        cout << "Tu saldo actual es: " << saldo << " euros" << endl;
        cout << "Apuesta desde 0 a 36 euros o ingresa -1 para salir: ";
        int apuesta;
        cin >> apuesta;

        if (apuesta == -1) {
            cout << "Gracias por jugar. Tu saldo final es: " << saldo << " euros" << endl;
            break;
        }

        if (apuesta < 0 || apuesta > 36) {
            cout << "Error. Ingresa un numero entre 0 y 36." << endl;
            continue;
        }

        cout << "Ingresa la cantidad a apostar: ";
        int cantidadApuesta;
        cin >> cantidadApuesta;

        if (cantidadApuesta <= 0 || cantidadApuesta > saldo) {
            cout << "Apuesta no valida." << endl;
            continue;
        }

        int numeroGanador = rand() % 37;        //numero aleatorio entre 0 y 36

        cout << "El numero ganador es: " << numeroGanador << endl;

        if (numeroGanador == apuesta) {
            cout << "¡Felicidades! Has ganado " << cantidadApuesta * 36 << " euros" << endl;
            saldo += cantidadApuesta * 36; // 35 a 1 de pago
        } else {
            cout << "Lo siento, has perdido " << cantidadApuesta << " euros" << endl;
            saldo -= cantidadApuesta;
        }
    }

    if (saldo <= 0) {
        cout << "Estas mas tieso que una mohama." << endl;
    }

    return 0;
}
