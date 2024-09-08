/* 
Escribe un programa que calcule la hipotenusa de un triangulo rect ´ angulo. El programa ´
debe pedir al usuario los dos catetos de tipo real y mostrar por pantalla el resultado.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, hipotenusa;

    cout << "Introduce un valor para a: ";
    cin >> a;

    cout << "Introduce un valor para b: ";
    cin >> b;

    // Calcula la hipotenusa usando la fórmula de Pitágoras
    hipotenusa = sqrt(a * a + b * b);

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}