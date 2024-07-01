#include <iostream>
using namespace std;

/*
Escribir una función que reciba un carácter como argumento y retorne true si es vocal y false en caso contrarios.
*/
bool esVocal(char c);

 int main() {
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    if (esVocal(caracter)) {
        cout << "Es una vocal" << endl;
    } else {
        cout << "No es una vocal" << endl;
    }
    return 0;
}
bool esVocal(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    } else {
        return false;
    }
}                           
