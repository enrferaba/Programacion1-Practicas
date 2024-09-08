#include <iostream>
using namespace std;

int main() {
    int comida = 23600000;
    int semana;
    int anio_1;
    int anio_2;
    int calculo_comida_semana;
    int resto_anio;

    cout << "Introduce el numero de semanas: ";
    cin >> semana;

    calculo_comida_semana = comida * semana;
    cout << "Para " << semana << " semanas, el desperdicio de comida seria de: " << calculo_comida_semana << " kg" << endl;

    cout << "Introduce el anio del que quieres calcular el desperdicio: ";
    cin >> anio_1;

    cout << "Introduce el anio actual: ";
    cin >> anio_2;

    resto_anio = (anio_1 - anio_2)* 12*comida;
    cout << "Para el anio " << anio_1 << " el desperdicio de comida seria de: " << resto_anio << " kg" << endl;

    return 0;
}
