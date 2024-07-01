#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
float promedio(void);
int main(){
	srand(time(NULL));

	cout<<"el promedio es:"<<promedio()<<endl;

	
}
float promedio(){
	float suma=0;
	float a;
	for(int i=0;i<10;i++){
		 a= -50 + rand()%150;
		suma+=a;
	}
	
	return suma/10;
}
