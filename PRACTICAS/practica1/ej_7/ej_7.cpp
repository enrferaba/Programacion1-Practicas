/*
Implemente por pantalla un programa que pida por teclado el nombre de una persona,
los apellidos y el ano de nacimiento. El programa debe calcular la edad de la persona y ˜
mostrar un mensaje del tipo ”Hola Antonio Duran, tienes 30 a ´ nos”.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	//definir variables
    string nombre;
    string apellidos;
    int anio_nacimiento;
    int anio_actual;
    int edad;

    // Solicitar entrada de nombre
    cout << "Teclea tu nombre: ";
    cin >> nombre;

    cout << "Teclea tus apellidos: ";
    cin.ignore(); // Salta el salto de línea anterior
    getline(cin, apellidos);

	// Solicitar entrada de edad
    cout << "Teclea el año de nacimiento: ";
    cin >> anio_nacimiento;

    cout << "Teclea el año actual: ";
    cin >> anio_actual;

    // Calcular la edad de la persona
    edad = anio_actual - anio_nacimiento;

    // Mostrar un mensaje con la información
    cout << "Hola " << nombre << " " << apellidos << ", tienes " << edad << " años." << endl;

    return 0;
}
