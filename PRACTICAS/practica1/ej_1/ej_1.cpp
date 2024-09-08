#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    float c;
    float d;
    float a_b;
    float a_c;
    int a_modb;
    float ej_4;
    float ej_5;
    float ej_6;
    float ej_7;
    int ej_8;
    int ej_9;
    int ej_10;
    int ej_11;
    int ej_12;
    bool ej_13;
    bool ej_14;
    bool ej_15;
    bool ej_16;

    cout << "Teclee un valor para a: ";
    cin >> a;
    cin.ignore();

    cout << "Teclee un valor para b: ";
    cin >> b;
    cin.ignore();

    cout << "Teclee un valor para c: ";
    cin >> c;
    cin.ignore();

    cout << "Teclee un valor para d: ";
    cin >> d;
    cin.ignore();

    if (b == 0 || c == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 1;
    }

    // ej 1 : a/b
    a_b = static_cast<float>(a) / b;
    cout << "El valor de a/b es: " << a_b << endl;

    // ej 2 : a/c
    a_c = static_cast<float>(a) / c;
    cout << "El valor de a/c es: " << a_c << "\n";

    // ej 3: a % b
    a_modb = a % b;
    cout << "El valor de a % b es: " << a_modb << "\n";

    // ej 4 : a-b-c+d
    ej_4 = a - b - c + d;
    cout << "El valor de a-b-c+d es: " << ej_4 << "\n";

    // ej 5 : 5*c - 4*a
    ej_5 = 5 * c - 4 * a;
    cout << "El valor de 5*c - 4*a es: " << ej_5 << "\n";

    // ej 6 : a*b/c
    ej_6 = a * b / c;
    cout << "El valor de a*b/c es: " << ej_6 << "\n";

    // ej 7: a*(d/c)
    ej_7 = a * (d / c);
    cout << "El valor de a*(d/c) es: " << ej_7 << "\n";

    // ej 8: a*b % b
    ej_8 = a * b % b;
    cout << "El valor de a*b % b es: " << ej_8 << "\n";

    // ej 9: a = - -b
    ej_9 = -(-b);
    cout << "El valor de a = - -b es: " << ej_9 << "\n";

    // ej 10  b = a--
    ej_10 = a--;
    cout << "El valor de b = a-- es: " << ej_10 << "\n";

    // ej 11 : a += b
    ej_11 = a + b;
    cout << "El valor de a += b es: " << ej_11 << "\n";

    // EMPEZAMOSSSS

    // ej 12 : a = b
    ej_12 = b;
    cout << "El valor de a = b es: " << ej_12 << "\n";

    // ej 13 : !a
    // cualquier valor != de 0
    ej_13 = !a;
    cout << "El !a es: " << ej_13 << "\n";

    // ej 14 : (a==b) || (c > d)
    ej_14 = (a == b) || (c > d);
    cout << "El valor de  (a==b) || (c > d) es: " << ej_14 << "\n";

    // ej 15 : (a>b) && (b>c) || (d<c)
    ej_15 = (a > b) && (b > c) || (d < c);
    cout << "El valor de  (a>b) && (b>c) || (d<c ) es: " << ej_15 << "\n";

    // ej 16 : a*3 || b*2 && (3*2)
    ej_16 = a * 3 || b * 2 && (3 * 2);
    cout << "El valor de  a*3 || b*2 && (3*2) es: " << ej_16 << "\n";

    ///////////////////////////////////////////////////
    // 2 PARTE
    ///////////////////////////////////////////////////

    return 0;
}
