#include <bits/stdc++.h>
using namespace std;

float CalcularSalario (int salario) {
	int limites[] = {400, 800, 1200, 2000};
	float porcentajes[] = {0.15, 0.12, 0.10, 0.07, 0.04};
	float aumento, salario_atualizado, dinheiro_ganho;
	int i;
	
	for(i=0; i < 4; i++){
		if (salario <= limites[i]){
			aumento = salario * porcentajes [i];
			break;
		}
	}
	
	if(i == 4){
		aumento = salario * porcentajes[4];
	}
	
	salario_atualizado = salario + aumento;
	dinheiro_ganho = aumento;
	
	cout << "Novo salario: " << salario_atualizado <<endl;
	cout << "Reajuste ganho: " << dinheiro_ganho <<endl;
	cout << "Em percentual: " << aumento/salario*100 << " %" <<endl;
	
	return salario_atualizado;
	
}

int main() {
	int salario;
	
	cout << "Ingrese su Salario: "<<endl;
	cin >> salario;
	
	CalcularSalario(salario);
	
	return 0;
}
