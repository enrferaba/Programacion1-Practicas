/*
Codifique un programa en C++ que lea un numero entero que representa un d ´ ´ıa de la
semana 1: Lunes, 2: Martes... Si el numero introducido no est ´ a en el rango [1,7], entonces ´
el programa informa del error al usuario (imprimiendo un mensaje de error), y acaba.
Si el numero est ´ a en el rango, el programa deber ´ a imprimir por pantalla el d ´ ´ıa al que
corresponde. Realice dos versiones del programa, haciendo uso del switch y del if-else.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int dia;
    string opcion;

    cout << "Elija una opcion: " << endl;
    cout << "switch. Para calculo con switch-case: " << endl;
    cout << "if. Para calculo con if-else: " << endl;
    cin >> opcion;

    if (opcion == "switch") {
        cout << "Elija un dia (1: Lunes, 2: Martes, ... 7: Domingo): " << endl;
        cin >> dia;

        switch (dia) {
            case 1:
                cout << "El dia de hoy es Lunes" << endl;
                break;
            case 2:
                cout << "El dia de hoy es Martes" << endl;
                break;
            case 3:
                cout << "El dia de hoy es Miercoles" << endl;
                break;
            case 4:
                cout << "El dia de hoy es Jueves" << endl;
                break;
            case 5:
                cout << "El dia de hoy es Viernes" << endl;
                break;
            case 6:
                cout << "El dia de hoy es Sabado" << endl;
                break;
            case 7:
                cout << "El dia de hoy es Domingo" << endl;
                break;
            default:
                cout << "El numero introducido no existe" << endl;
        }
    } else if (opcion == "if") {
        cout << "Elija un dia (1: Lunes, 2: Martes, ... 7: Domingo): " << endl;
        cin >> dia;

        if (dia >= 1 && dia <= 7) {
            if (dia == 1) {
                cout << "El dia de hoy es Lunes" << endl;
            } else if (dia == 2) {
                cout << "El dia de hoy es Martes" << endl;
            } else if (dia == 3) {
                cout << "El dia de hoy es Miercoles" << endl;
            } else if (dia == 4) {
                cout << "El dia de hoy es Jueves" << endl;
            } else if (dia == 5) {
                cout << "El dia de hoy es Viernes" << endl;
            } else if (dia == 6) {
                cout << "El dia de hoy es Sabado" << endl;
            } else if (dia == 7) {
                cout << "El dia de hoy es Domingo" << endl;
            }
        } else {
            cout << "El numero introducido no existe" << endl;
        }
    } else {
        cout << "Opcion no valida" << endl;
    }

    return 0;
}
