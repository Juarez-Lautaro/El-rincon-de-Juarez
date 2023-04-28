//Batalla Naval -- Bot
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;
typedef vector<char> Fila;
typedef vector<Fila> Matriz;

Matriz ocupados(10);
pair<int, int> posBase;
vector<bool> plan(5);
// Plan[0] generar random
// Plan[1] comprobar derecha en el siguiente turno
// Plan[1] comprobar izquierda en el siguiente turno
// Plan[1] comprobar arriba en el siguiente turno
// Plan[1] comprobar abajo en el siguiente turno

void barcoTwo(Matriz &matriz, string orientacion, pair<int, int> temp);
void barcoThree(Matriz &matriz, string orientacion, pair<int, int> temp);
void barcoFour(Matriz &matriz, string orientacion, pair<int, int> temp);
void barcoFive(Matriz &matriz, string orientacion, pair<int, int> temp);
pair<int, int> ingrRandomBot(Matriz matriz);
Matriz posicionarBarcosBot(Matriz matriz);
Matriz inicializarMatriz(Matriz matriz);
pair<int, int> ataqueBot(Matriz jugador);

Matriz posicionarBarcosBot(Matriz matriz)
{
	ocupados = inicializarMatriz(ocupados);
	for(int i=1; i<5; i++) plan[i] = false;
	plan[0] = true;
	srand(time(NULL));
	string orientacion;
	if(rand()%2 == 1) orientacion = "vertical";
	else orientacion = "horizontal";
	pair<int, int> temp;
	/////////////////////////////////////////////////////////
	temp = ingrRandomBot(matriz);
	barcoTwo(matriz, orientacion, temp);
	temp = ingrRandomBot(matriz);
	barcoThree(matriz, orientacion, temp);
	temp = ingrRandomBot(matriz);
	barcoThree(matriz, orientacion, temp);
	temp = ingrRandomBot(matriz);
	barcoFour(matriz, orientacion, temp);
	temp = ingrRandomBot(matriz);
	barcoFive(matriz, orientacion, temp);
	
	return matriz;
}

pair<int, int> ataqueBot(Matriz jugador)
{
	pair<int, int> jugada;
	cout<<"Turno del CPU"<<endl;
	if(plan[0] == true)
	{
		jugada = ingrRandomBot(ocupados);
		if(jugador[jugada.second][jugada.first] != 32 && jugador[jugada.second][jugada.first] != 'X' && jugador[jugada.second][jugada.first] != 'O')
		{
			plan[0] = false;
			plan[1] = true;
			posBase = jugada;
		}
	}
	else if(plan[1] == true && ocupados[posBase.second][posBase.first + 1] == 32)
	{
		pair<int, int> temp;
		if(posBase.first < 9)
		{
			temp.first = posBase.first + 1;
			temp.second = posBase.second;
			jugada = temp;
			plan[1] == false;
			plan[2] == true;
		}
		else if(posBase.first == 9)
		{
			temp.first = posBase.first - 1;
			temp.second = posBase.second;
			jugada = temp;
			plan[1] == false;
			plan[3] == true;
		}
	}
	else if(plan[2] == true && ocupados[posBase.second][posBase.first - 1] == 32)
	{
		pair<int, int> temp;
		if(posBase.first > 0)
		{
			temp.first = posBase.first - 1;
			temp.second = posBase.second;
			jugada = temp;
			plan[2] == false;
			plan[3] == true;
		}
		else if(posBase.first == 0)
		{
			temp.first = posBase.first;
			temp.second = posBase.second -1;
			jugada = temp;
			plan[2] == false;
			plan[4] == true;
		}
	}
	else if(plan[3] == true && ocupados[posBase.second -1][posBase.first] == 32)
	{
		pair<int, int> temp;
		if(posBase.second > 0)
		{
			temp.first = posBase.first;
			temp.second = posBase.second -1;
			jugada = temp;
			plan[3] == false;
			plan[4] == true;
		}
		else if(posBase.first == 0)
		{
			temp.first = posBase.first;
			temp.second = posBase.second +1;
			jugada = temp;
			plan[3] == false;
			plan[0] == true;
		}
	}
	else if(plan[4] == true && ocupados[posBase.second+1][posBase.first] == 32)
	{
		pair<int, int> temp;
		if(posBase.second < 9)
		{
			temp.first = posBase.first;
			temp.second = posBase.second +1;
			jugada = temp;
			plan[3] == false;
			plan[4] == true;
		}
		else if(posBase.first == 9)
		{
			jugada = ingrRandomBot(ocupados);
			if(jugador[jugada.second][jugada.first] != 32 && jugador[jugada.second][jugada.first] != 'X' && jugador[jugada.second][jugada.first] != 'O')
			{
				plan[0] = false;
				plan[1] = true;
				posBase = jugada;
			}
			
			plan[4] == false;
			plan[0] == true;
		}
	}
	else
	{
		jugada = ingrRandomBot(ocupados);
			if(jugador[jugada.second][jugada.first] != 32 && jugador[jugada.second][jugada.first] != 'X' && jugador[jugada.second][jugada.first] != 'O')
			{
				plan[0] = false;
				plan[1] = true;
				posBase = jugada;
			}
	}
	
	ocupados[jugada.second][jugada.first] = 'X';
	return jugada;
}

pair<int, int> ingrRandomBot(Matriz matriz)
{
	pair<int, int> temp;
	srand(time(NULL));
	do
	{
		temp.first = rand()%10;
		temp.second = rand()%10;
	}while(matriz[temp.second][temp.first] != 32);
	return temp;
}

