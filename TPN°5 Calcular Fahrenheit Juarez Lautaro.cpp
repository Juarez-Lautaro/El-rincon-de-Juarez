#include <bits/stdc++.h>
using namespace std;

float CalcularFahrenheit(int Celsius) {
	float Fahrenheit = (Celsius * 9/5) + 32;
	return Fahrenheit;
}

int main() {
	int Celsius;
	cout << "Ingrese la temperatura en grados Celsius: ";
	cin >> Celsius;
	
	float Fahrenheit = CalcularFahrenheit(Celsius);
	
	cout << "La temperatura equivalente en grados Fahrenheit es: " << Fahrenheit << "°F"; 
	return 0;
}
