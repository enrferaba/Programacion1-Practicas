/* 
Escribe un programa en C++ que dado un numero de bytes obtenga una magnitud equi- ´
valente expresada en Mbytes, Kbytes y bytes. Por ejemplo, dado el numero 369258147 ´
(de tipo long), el resultado ser´ıa 352MB, 155KB y 675B. Se debe declarar un constante T
igual a 1024 que sera utilizada en el programa. 
*/

#include<iostream>
using namespace std;

int main() {
    const long T = 1024; // Definimos una constante T con valor 1024 para las conversiones.

    long numero = 369258147; // Puedes cambiar este número a cualquier valor que desees.

    // Calculamos la cantidad de Mbytes dividiendo el número entre T*T (1024*1024).
    long Mbytes = numero / (T * T);

    // Actualizamos el valor de 'numero' tomando el residuo para quedarnos con lo que no se convirtió a Mbytes.
    numero = numero % (T * T);

    // Calculamos la cantidad de Kbytes dividiendo el 'numero' actual entre T (1024).
    long Kbytes = numero / T;

    // Actualizamos el valor de 'numero' tomando el residuo para quedarnos con la cantidad de bytes restantes.
    long bytes = numero % T; // Declaración y asignación de 'bytes'.

    // 'numero' ahora contiene la cantidad de bytes restantes, que se almacena en 'bytes'.

    // Imprimimos el resultado en la consola, mostrando las cantidades de Mbytes, Kbytes y bytes.
    cout << Mbytes << "MB, " << Kbytes << "KB, " << bytes << "B" << endl;

    return 0; // Indicamos que el programa finalizó correctamente.
}
