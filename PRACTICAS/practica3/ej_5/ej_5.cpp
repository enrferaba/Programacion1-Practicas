	/*

	Matrices

	El tamaño máximo de las filas y columnas será de 100 elementos.

	5. Ejercicio 5

	Escribe un programa que lea las dimensiones de una matriz de m filas
	y n columnas y que intercambie dos filas, a y b, de manera arbitraria.
	El programa debe mostrar la matriz antes y después del intercambio.
	*/

#include <iostream>
using namespace std;

int main() {
		const int MAX_FILAS = 100;
		const int MAX_COLUMNAS = 100;
    int m, n;

    cout << "Ingrese el numero de filas (m): ";
    cin >> m;

    cout << "Ingrese el numero de columnas (n): ";
    cin >> n;

    // Creamos la matriz
    int matriz[m][n];

    // Ingresamos valores a la matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese los valores el elemento de la fila: " << i + 1 << " y columna: " << j + 1 << endl;
            cin >> matriz[i][j];
        }
    }

    // Mostramos la matriz
    cout << endl;
    cout << "Nuestra matriz se muestra como: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    // Hasta aquí funciona

    int fa,fb;

    cout << "Introduce la fila a a intercambiar: " << endl;
    cin >> fa;

    cout << "Introduce la fila b a intercambiar: " << endl;
    cin >> fb;

	//Hacemos esto para que la fila primera sea la 1 no la 0:
	fa= fa -1;
	fb= fb -1;
	
    // Suponiendo que fa y fb están en el rango adecuado (de 0 a m - 1)
    if (fa < m && fb < m) {
        // Intercambio de las filas fa y fb
        for (int j = 0; j < n; j++) {
            int temp = matriz[fa][j];
            matriz[fa][j] = matriz[fb][j];
            matriz[fb][j] = temp;
        }
    } else {
        cout << "Filas introducidas fuera del rango de la matriz." << endl;
    }

    // Mostrar la matriz después del intercambio
    cout << "Matriz después del intercambio:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
