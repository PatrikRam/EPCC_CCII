#include<iostream>
using namespace std;
template <class TIPOD, class TIPOD2>
TIPOD suma(TIPOD a, TIPOD2 b){
	TIPOD suma;
	suma=a+b;
	return suma;
}
template <class TIPOD, class TIPOD2>
TIPOD resta(TIPOD2 a, TIPOD b){
	TIPOD resta;
	resta=a-b;
	return resta;
}
template <class TIPOD, class TIPOD2>
TIPOD mult(TIPOD2 a, TIPOD b){
	TIPOD mult;
	mult=a*b;
	return mult;
}

double operaciones(double (*op)(double, double), double a, double b){
	return op(a,b);
	
}

int main(){
	float sumaa=2, restaa=3;
	int sumab=3, multa=2;
	double restab=1.3;
	long multb=345;
	cout<<operaciones(suma,sumaa,sumab)<<endl;
	cout<<operaciones(resta,restaa,restab)<<endl;
	cout<<operaciones(mult,multa,multb)<<endl;
	
}
