#include <bits/stdc++.h>

using namespace std;

int obtener_valor_letra(string letra){
	if (letra == "a" || letra == "e") return 1;
	
	if (letra == "o" || letra == "s") return 2;
	
	if (letra == "d" || letra == "i" || letra == "n" || letra == "r") return 3;
	
	if (letra == "c" || letra == "l" || letra == "t" || letra == "u") return 4;
	
	if (letra == "m" || letra == "p") return 5;
	
	if (letra == "b" || letra == "f" || letra == "g" || letra == "h" || letra == "j" || letra == "q" || letra == "v" || letra == "x" || letra == "y" || letra == "z") return 6;
	
	if (letra == "k" || letra == "w") return 7;
	
	return 0;
}

int main() {
	string mensaje;
	
	cout<<"Ingrese un mensaje"<<endl;
	getline(cin,mensaje);
	
	int valor_total=0;
	
	for (int i = 0; i < mensaje.size(); i++){
		string letra = mensaje.substr(i, 1);
		
		if (letra >= "a" && letra <= "z"){
			
			valor_total += obtener_valor_letra(letra);
		}
	}
	
	cout<<"El valor total de la cadena es: "<<valor_total<<endl;
	
	return 0;
}
