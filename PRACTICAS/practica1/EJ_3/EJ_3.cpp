#include <iostream>
#include <string>

using namespace std;

int main(){
	
    char myChar = 'c';
    string myString = "patata";
    int myInt = 15;
    short myShort = 2;
    float myFloat = 7.2;
    double myDouble = 999999999;
    long myLong = 999999999999999;
    long double myLongDouble = 9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999;

    cout << "tamano  char: " << sizeof(myChar) * 8 << " bits" << endl;
    cout << "tamano string: " << sizeof(myString) * 8 << " bits" << endl;
    cout << "tamano int: " << sizeof(myInt) * 8 << " bits" << endl;
    cout << "tamano short: " << sizeof(myShort) * 8 << " bits" << endl;
    cout << "tamano float: " << sizeof(myFloat) * 8 << " bits" << endl;
    cout << "tamano	double: " << sizeof(myDouble) * 8 << " bits" << endl;
    cout << "tamano long: " << sizeof(myLong) * 8 << " bits" << endl;
    cout << "tamano long double: " << sizeof(myLongDouble) * 8 << " bits" << endl;

    return 0;
}
