/*

Disena e implementa una aplicaci ˜ on para jugar a la ruleta. El programa constar ´ a del ´
siguiente menu principal que se estar ´ a repitiendo hasta que el usuario decida salir. ´
1. Introducir fichas: El usuario mete fichas en su cuenta para poder jugar.
2. Jugar: El usuario elegira a qu ´ e n´ umero juega y cuanto apuesta. ´
Rojo (par): si sale un numero par, el usuario gana el doble de lo apostado. ´
Negro (impar): si sale un numero impar, el usuario gana el doble de lo apos- ´
tado.
Numero concreto: Si sale el n ´ umero, gana 32 veces lo apostado. ´
3. Ver saldo: el usuario podra ver el n ´ umero de fichas que posee. ´
4. Salir: Se termina de jugar y el programa informara del saldo del usuario. ´
Hay que tener en cuenta los siguientes conceptos:
Generar numeros aleatorios entre 0 y 32. ´
No se podra jugar a no ser que se tenga fichas en la cuenta. ´
No se podra apostar un mayor n ´ umero de fichas del que se posee. ´
En caso de no acertar, se pierde lo apostado.
Utilizar una estructura do-while para que la opcion del men ´ u est ´ e en el rango 1, 2, ´
3 o 4.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int opcion;
    long saldo = 0;
    int numeroGanador = 0;

    srand(time(0));

    do {
        cout << "Menú principal" << endl;
        cout << "1. Introducir fichas" << endl;
        cout << "2. Jugar" << endl;
        cout << "3. Ver saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa tu opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                long fichas = 0;
                cout << "¿Cuántas fichas quieres añadir a tu saldo? ";
                cin >> fichas;
                saldo += fichas;
                break;
            }

            case 2: {
                if (saldo <= 0) {
                    cout << "No puedes jugar porque no tienes saldo" << endl;
                } else {
                    int opcionApostar;
                    cout << "Menú de juego" << endl;
                    cout << "1. Apuesta a un número" << endl;
                    cout << "2. Apuesta a que el número es par" << endl;
                    cout << "3. Apuesta a que el número es impar" << endl;
                    cout << "Elige una opción: ";
                    cin >> opcionApostar;

                    int numeroApostado, apuesta;
                    cout << "Tienes " << saldo << " fichas" << endl;

                    if (opcionApostar == 1) {
                        cout << "A qué número quieres apostar (entre 0 y 32): ";
                        cin >> numeroApostado;

                        if (numeroApostado < 0 || numeroApostado > 32) {
                            cout << "El número apostado debe estar entre 0 y 32" << endl;
                        }
                    }

                    cout << "¿Cuánto quieres apostar? ";
                    cin >> apuesta;

                    if (apuesta > saldo) {
                        cout << "No tienes suficiente dinero" << endl;
                    } else {
                        // Genera un número ganador aleatorio entre 0 y 32
                        numeroGanador = rand() % 33;

                        switch (opcionApostar) {
                            case 1:
                                cout << "Apuesta a un número" << endl;
                                if (numeroApostado == numeroGanador) {
                                    saldo += apuesta * 32;
                                    cout << "Felicidades, " << numeroGanador
                                         << " es el mismo número que has apostado. Tu nuevo saldo es de: " << saldo << " fichas" << endl;
                                }
								else{
									saldo-=apuesta;
									cout<<"Lo siento el numero ganador es: "<<numeroGanador << " la siguiente sera. Tu nuevo saldo es de: " << saldo << " fichas"<<endl;
								}
                                break;

                            case 2:
                                cout << "Apuesta a que el número es par" << endl;
                                if (numeroGanador % 2 == 0) {
                                    saldo += apuesta * 2;
                                    cout << "Felicidades, " << numeroGanador
                                         << " es par. Tu nuevo saldo es: " << saldo << " fichas" << endl;
                                }
                                break;

                            case 3:
                                cout << "Apuesta a que el número es impar" << endl;
                                if (numeroGanador % 2 != 0) {
                                    saldo += apuesta * 2;
                                    cout << "Felicidades, " << numeroGanador
                                         << " es impar. Tu nuevo saldo es: " << saldo << " fichas" << endl;
                                }
                                break;
                        }
                    }
                }
                break;
            }

            case 3:
                cout << "Tu saldo actual es: " << saldo << " fichas" << endl;
                break;
        }
    } while (opcion != 4);

    cout << "Gracias por jugar. Tu saldo final es: " << saldo << " fichas" << endl;
    return 0;
}

