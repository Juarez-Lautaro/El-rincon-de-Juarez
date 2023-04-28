#include <bits/stdc++.h>
using namespace std;

int ConvertirPesos(int cantidad) {
	return cantidad * 331.37;
}


int main() {
	int dolares;
	
	cout << "Ingrese la cantidad de dolares a convertir: "<<endl;
	cin >> dolares;
	
	int pesos = ConvertirPesos(dolares);
	cout << dolares << " dolares equivalen a "<< pesos << " pesos " <<endl;
	
	return 0;
}
