/*
Escribe un programa que determine si un ano es o no bisiesto. Recuerda que son bisies- ˜
tos todos los anos cuya cifra es m ˜ ultiplo de 4 excepto los que siendo m ´ ultiplos de 100 ´
no lo son de 400. As´ı 1900 no fue bisiesto, pero 2000 s
*/

#include <iostream>
using namespace std;

int main() {
    int anio_bisiesto;

    cout << "Teclea el anio: " << endl;
    cin >> anio_bisiesto;

    if ((anio_bisiesto % 4 == 0 && anio_bisiesto % 100 != 0) || (anio_bisiesto % 400 == 0)) {
		cout << "El anio " << anio_bisiesto << " es bisiesto" << endl;
} 	else {
		cout << "El anio " << anio_bisiesto << " no es bisiesto" << endl;
}


    return 0;
}
