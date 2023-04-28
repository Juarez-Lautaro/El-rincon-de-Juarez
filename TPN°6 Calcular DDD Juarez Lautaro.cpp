#include <bits/stdc++.h>
using namespace std;

string DestinoPorDDD (int ddd) {
	int codigos[] = {61, 71, 11, 21, 32, 19, 27, 31};
	string destinos [] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
	
	for(int i = 0; i < sizeof(codigos)/sizeof(codigos[0]); i++){
		if(ddd == codigos[i]){
			
			return destinos[i];
		}
	}
	return "DDD NO ENCONTRADO";
}

int main() {
	int ddd;
	
	cout << "Ingrese su DDD: ";
	cin >> ddd;
	
	string destino = DestinoPorDDD(ddd);
	
	cout << destino << endl;
	
	return 0;
}
