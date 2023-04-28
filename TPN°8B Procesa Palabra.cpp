#include <bits/stdc++.h>
using namespace std;

string ProcesaPalabra(string frase){
	if (frase.size() > 0){
		frase = frase.substr(0, frase.size()-1); //obtiene una subcadena que excluya el ultimo caracter de la palabra
		
		for (int i = 0; i < frase.size(); i++){
			if (frase[i] == 'A'){
				frase[i] = 'B'; //reemplaza todas las apariciones de 'A' por 'B'
			}
		}
	}
	return frase;
}

int main() {
	string frase;
	
	cout<<"Ingrese una frase: "<<endl;
	getline(cin, frase);
	
	cout<<ProcesaPalabra(frase)<<endl;
	
	return 0;
}
