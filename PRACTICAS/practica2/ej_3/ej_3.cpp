/*
Escribe un programa que calcule la nota que sacar´ıa un alumno. El programa pedira al ´
usuario las notas del examen practico, los cuestionarios y las actividades de clase. El ´
calculo final de la nota ser ´ a: ´
Examen practico: 40 % de la nota final. ´
Cuestionarios: 10 % de la nota final.
Actividades de clase: 50 % de la nota final.
Hay que tener en cuenta las siguientes consideraciones:
Hay que sacar al menos un 5 en cada apartado para poder hacer media, en otro
caso, el programa mostrara ”No hace media, por lo tanto est ´ a suspenso”. ´
Si la nota es superior a 9, el programa mostrara ”Sobresaliente”. ´
Si es superior a 7, mostrara ”Notable”. ´
En otro caso, mostrara ”Aprobado”.
*/
#include <iostream>
using namespace std;
    
int main() {
    float examen_practico;
    float cuestionario;
    float actividades_clase;
    float nota_final;

    cout << "Nota del cuestionario: " << endl;
    cin >> cuestionario;

    cout << "Nota del examen practico: " << endl;
    cin >> examen_practico;

    cout << "Nota de las actividades de clase: " << endl;
    cin >> actividades_clase;

    nota_final = examen_practico * 0.4 + cuestionario * 0.1 + actividades_clase * 0.5;

    if (examen_practico < 5 || cuestionario < 5 || actividades_clase < 5) {
        cout << "No hace media, por lo tanto estás suspenso." << endl;
    } else if (nota_final > 9) {
        cout << "Tienes un Sobresaliente." << endl;
    } else if (nota_final > 7) {
        cout << "Tienes un Notable." << endl;
    } else {
        cout << "Aprobado con una media de: " << nota_final << endl;
    }

    return 0;
}
