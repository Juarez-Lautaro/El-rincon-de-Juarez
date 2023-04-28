#include <bits/stdc++.h>
using namespace std;

int CambiarDictado(string frase) {
	
	string reverse_frase = frase;
	
	reverse(reverse_frase.begin(), reverse_frase.end());
	
	int cont = 0;
	for (int i = 0; i < frase.size(); i++){
		if (frase [i] != reverse_frase[i])
		{cont++;}
	}
	return cont;	
}

int main () {
	string palabra;
	
	cout<<"Ingrese una palabra: "<<endl;
	getline(cin, palabra);
	
	cout<<CambiarDictado(palabra)<<endl;
	
	return 0;
}
