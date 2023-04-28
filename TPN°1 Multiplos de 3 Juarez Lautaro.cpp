#include <bits/stdc++.h>
using namespace std;

bool EsMultiplode3(int n) {
	if (n % 3 == 0) {
		return true;
		
	} else {
		return false;
	}
}

int main() {
	int n;
	
	cout<< "Ingrese un Numero: "<<endl;
	cin >> n;
	
	if (EsMultiplode3(n)) {
		cout << "ES MULTIPLO" << endl;
		
	} else {
		cout << "NO ES MULTIPLO" << endl;
		
	}
	
	
	return 0;
}
