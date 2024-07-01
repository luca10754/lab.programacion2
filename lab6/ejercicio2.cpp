#include <iostream>
using namespace std;

/*
 Escriba una función que reciba dos números reales positivos como parámetros y
devuelva el máximo de los dos valores.
*/
 float maximo(float a, float b); //prototipo

 int main () //llamada 
 {
    float a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "El maximo de los dos numeros es: " << maximo(a, b);
    return 0;
 } 
 float maximo(float a, float b) //definicion
 {
    float max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    return max;
 }