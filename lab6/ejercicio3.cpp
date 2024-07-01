#include <iostream>
using namespace std;

/*
Escribir una función que reciba dos argumentos enteros y devuelva true si son divisibles y false si no lo son.
*/
 
 bool sonDivisibles(int a, int b); //PROTOTIPO

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: "<<endl;
    cin >> num1 >> num2;

    if(sonDivisibles(num1, num2)) {
        cout << "Son divisibles" << endl;
    } else {
        cout << "No son divisibles" << endl;
    }

    return 0;
}
bool sonDivisibles(int a, int b) { //DEFINICION
    if(a % b == 0) {
        return true;
    } else {
        return false;
    }
}