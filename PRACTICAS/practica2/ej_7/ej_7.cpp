/*
Repite el ejercicio anterior haciendo uso de if-else anidados.
*/

/*
Escribe un programa que use la sentencia switch-case para calcular cuantos dias tiene
un mes dado (numericamente) de un determinado año. En caso de que el mes introducido 
sea el mes de febrero, debera preguntar al usuario si el año es bisiesto o no.
*/
#include <iostream>
using namespace std;

int main() {
    int mes;
    bool esBisiesto = false;

    cout << "Elije un mes: " << endl;
    cout << "1. enero" << endl;
    cout << "2. febrero" << endl;
    cout << "3. marzo" << endl;
    cout << "4. abril" << endl;
    cout << "5. mayo" << endl;
    cout << "6. junio" << endl;
    cout << "7. julio" << endl;
    cout << "8. agosto" << endl;
    cout << "9. septiembre" << endl;
    cout << "10. octubre" << endl;
    cout << "11. noviembre" << endl;
    cout << "12. diciembre" << endl;
    cin >> mes;

    if (mes==1||mes==3||mes==5||mes==8||mes==7||mes==10||mes==12) {
		cout << "Tiene 31 dias" << endl; 		
		
		}
		else if(mes==4||mes==6||mes==9||mes==11){
        cout << "Tiene 30 dias" << endl;
		
		}
		else if(mes==2){
			cout << "El anio es bisiesto? (1 para Si, 0 para No): ";
            cin >> esBisiesto;
            if (esBisiesto) {
                cout << "Tiene 29 dias" << endl;
            } else {
                cout << "Tiene 28 dias" << endl;
            }
           
		}
		else{
            cout << "mes no valida" << endl;
		}

    return 0;
}
