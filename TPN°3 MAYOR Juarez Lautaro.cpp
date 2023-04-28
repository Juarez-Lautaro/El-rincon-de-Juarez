#include <bits/stdc++.h>
using namespace std;

 int EstMayor(int a, int b, int c) {
 	int mayor = a;
 	
 	if (b > mayor) {
 		mayor = b;
	 }
	 
	if (c > mayor) {
		mayor = c;
	}
	return mayor;
 }

int main() {
	int num1, num2, num3;
	
	cout << "Ingrese tres Numeros: "<<endl;
	cin>> num1 >> num2 >> num3;
	
	int mayor = EstMayor(num1, num2, num3);
	cout << "El mayor de los tres numeros es: " << mayor <<endl;
	
	return 0;
}
