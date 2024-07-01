#include <iostream>
using namespace std;
 
 //protottipo
 void sumar(int, int);
 int a=10, b=4; //variables globales
// estas variables se mantienen durante todo el programa


//definicion
int sumar(int a, int b){
    return a+b;
}


 int main (){
  /*  int a=20, b=4 //variables locales */

    //llamada                       //sumar()
    cout<< sumar(7,3)<<endl;



    return 0;
 }
 

