#include <iostream>
using namespace std;

/*
 Escribir una función que retorne el resultado de elevar un número entero a cualquier potencia entera.
 El resultado devuelto debe ser del tipo long.
*/
    long potencia(int base, int exponente); //prototipo

    int main () //llamada
    {
        int base, exponente;
        long resultado;

        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese el exponente: ";
        cin >> exponente;

        resultado = potencia(base, exponente);

        cout << base << " elevado a " << exponente << " es: " << resultado << endl;

        return 0;
    }

    long potencia(int base, int exponente) //definicion
    {
        long resultado = 1;
        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }
        return resultado;
    }