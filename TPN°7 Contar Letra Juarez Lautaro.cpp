#include <bits/stdc++.h>
using namespace std;

int ContarLetraA(string frase) {
	int contador = 0;
	string vocales = "aeiouAEIOU";
	
	for (int i = 0; i < frase.length(); i++) {
		if (vocales.find(frase[i]) != string::npos) 
		{contador++;}
	}
	return contador;
}

int main(){
	string frase;
	
	cout << "Ingrese una frase: "<<endl;
	getline(cin, frase);
	
	int cantidad_vocales = ContarLetraA(frase);
	cout << "La cantidad de vocales en la frase es: " <<cantidad_vocales<<endl;
	
	return 0;
}
