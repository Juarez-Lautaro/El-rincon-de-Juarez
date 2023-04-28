//Batalla Naval -- Main
#include<bits/stdc++.h>
#include"Bot.cpp"
#include"Barcos.cpp"
#include"Deco.cpp"
using namespace std;
typedef vector<char> Fila;
typedef vector<Fila> Matriz;

void mostrar(Matriz m);
Matriz inicializarMatriz(Matriz matriz);
Matriz posicionarBarcos(Matriz matriz);
pair<int, int> ingresarPosicion(Matriz matriz);
bool comprobarVic(Matriz matriz);
void jugadorPlay(Matriz &bot, Matriz &visible);

int main()
{
	pair<int, int> jugadaBot;
	bool termino = false;
	Matriz tabJug(10), tabBot(10), tabVis(10);
	tabJug = inicializarMatriz(tabJug);
	tabBot = inicializarMatriz(tabBot);
	tabVis = inicializarMatriz(tabVis);
	inicio();
	/////////////////////////////////////////////////////////
	tabJug = posicionarBarcos(tabJug);
	tabBot = posicionarBarcosBot(tabBot);
	
	cout<<"           BOT"<<endl;
	mostrar(tabVis);
//	mostrar(tabBot);
	cout<<endl<<"_______________________"<<endl<<endl;
	cout<<"       JUGADOR"<<endl;
	mostrar(tabJug);
	
	do
	{
		jugadorPlay(tabBot, tabVis);
		/////////////////////////////////////////////////////////
		jugadaBot = ataqueBot(tabJug);
		cout<<"Turno del CPU"<<endl;
		if(tabJug[jugadaBot.second][jugadaBot.first] != 32 && tabJug[jugadaBot.second][jugadaBot.first] != 'X' && tabJug[jugadaBot.second][jugadaBot.first] != 'O')
		{
			tabJug[jugadaBot.second][jugadaBot.first] = 'X';
			cout<<"CPU dio en el blanco!!"<<endl;
		}
		else cout<<"CPU fallo!!"<<endl;
		cout<<jugadaBot.second<<"   "<<jugadaBot.first<<endl;
		/////////////////////////////////////////////////////////
		cout<<"           BOT"<<endl;
		mostrar(tabVis);
		cout<<endl<<"_______________________"<<endl<<endl;
		cout<<"       JUGADOR"<<endl;
		mostrar(tabJug);
		if(comprobarVic(tabBot) == true || comprobarVic(tabJug) == true) termino == true;
	}while(termino == false);
	cout<<"---------------------------------------------------------"<<endl;
	if(comprobarVic(tabBot)== true) cout<<"Victoria!"<<endl;
	if(comprobarVic(tabJug)== true) cout<<"Derrota!"<<endl;
	
	getch();
	return 0;
}

Matriz inicializarMatriz(Matriz matriz)
{
	for(int i=0;i<matriz.size();++i) 
	{
	matriz[i].resize(10);
	}

	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			matriz[i][j]=32;
		}
	}
	
	return matriz;
}

void mostrar(Matriz m)
{
	cout<<" "<<"|"<<"1"<<"|"<<"2"<<"|"<<"3"<<"|"<<"4"<<"|"<<"5"<<"|"<<"6"<<"|"<<"7"<<"|"<<"8"<<"|"<<"9"<<"|"<<"10"<<endl;
	cout<<"A"<<"|"<<m[0][0]<<"|"<<m[1][0]<<"|"<<m[2][0]<<"|"<<m[3][0]<<"|"<<m[4][0]<<"|"<<m[5][0]<<"|"<<m[6][0]<<"|"<<m[7][0]<<"|"<<m[8][0]<<"|"<<m[9][0]<<"|"<<endl;
	cout<<"B"<<"|"<<m[0][1]<<"|"<<m[1][1]<<"|"<<m[2][1]<<"|"<<m[3][1]<<"|"<<m[4][1]<<"|"<<m[5][1]<<"|"<<m[6][1]<<"|"<<m[7][1]<<"|"<<m[8][1]<<"|"<<m[9][1]<<"|"<<endl;
	cout<<"C"<<"|"<<m[0][2]<<"|"<<m[1][2]<<"|"<<m[2][2]<<"|"<<m[3][2]<<"|"<<m[4][2]<<"|"<<m[5][2]<<"|"<<m[6][2]<<"|"<<m[7][2]<<"|"<<m[8][2]<<"|"<<m[9][2]<<"|"<<endl;
	cout<<"D"<<"|"<<m[0][3]<<"|"<<m[1][3]<<"|"<<m[2][3]<<"|"<<m[3][3]<<"|"<<m[4][3]<<"|"<<m[5][3]<<"|"<<m[6][3]<<"|"<<m[7][3]<<"|"<<m[8][3]<<"|"<<m[9][3]<<"|"<<endl;
	cout<<"E"<<"|"<<m[0][4]<<"|"<<m[1][4]<<"|"<<m[2][4]<<"|"<<m[3][4]<<"|"<<m[4][4]<<"|"<<m[5][4]<<"|"<<m[6][4]<<"|"<<m[7][4]<<"|"<<m[8][4]<<"|"<<m[9][4]<<"|"<<endl;
	cout<<"F"<<"|"<<m[0][5]<<"|"<<m[1][5]<<"|"<<m[2][5]<<"|"<<m[3][5]<<"|"<<m[4][5]<<"|"<<m[5][5]<<"|"<<m[6][5]<<"|"<<m[7][5]<<"|"<<m[8][5]<<"|"<<m[9][5]<<"|"<<endl;
	cout<<"G"<<"|"<<m[0][6]<<"|"<<m[1][6]<<"|"<<m[2][6]<<"|"<<m[3][6]<<"|"<<m[4][6]<<"|"<<m[5][6]<<"|"<<m[6][6]<<"|"<<m[7][6]<<"|"<<m[8][6]<<"|"<<m[9][6]<<"|"<<endl;
	cout<<"H"<<"|"<<m[0][7]<<"|"<<m[1][7]<<"|"<<m[2][7]<<"|"<<m[3][7]<<"|"<<m[4][7]<<"|"<<m[5][7]<<"|"<<m[6][7]<<"|"<<m[7][7]<<"|"<<m[8][7]<<"|"<<m[9][7]<<"|"<<endl;
	cout<<"I"<<"|"<<m[0][8]<<"|"<<m[1][8]<<"|"<<m[2][8]<<"|"<<m[3][8]<<"|"<<m[4][8]<<"|"<<m[5][8]<<"|"<<m[6][8]<<"|"<<m[7][8]<<"|"<<m[8][8]<<"|"<<m[9][8]<<"|"<<endl;
	cout<<"J"<<"|"<<m[0][9]<<"|"<<m[1][9]<<"|"<<m[2][9]<<"|"<<m[3][9]<<"|"<<m[4][9]<<"|"<<m[5][9]<<"|"<<m[6][9]<<"|"<<m[7][9]<<"|"<<m[8][9]<<"|"<<m[9][9]<<"|"<<endl;
}

Matriz posicionarBarcos(Matriz matriz)
{
	mostrar(matriz);
	pair<int, int> temp;
	string orientacion;
	
	cout<<"Ingresar posicion del barco N1, longitud 2"<<endl;
	temp = ingresarPosicion(matriz);
	do
	{
		cout<<"Ingresar su orientacion --- vertical, horizontal"<<endl;
		cin>>orientacion;
	}while(orientacion != "vertical" && orientacion != "horizontal");
	barcoTwo(matriz, orientacion, temp);
	
	for(int i=0; i<2; i++)
	{
		cout<<"Ingresar posicion del barco N"<<i+2<<", longitud 3"<<endl;
	temp = ingresarPosicion(matriz);
	do
	{
		cout<<"Ingresar su orientacion --- vertical, horizontal"<<endl;
		cin>>orientacion;
	}while(orientacion != "vertical" && orientacion != "horizontal");
	barcoThree(matriz, orientacion, temp);
	}
	
	cout<<"Ingresar posicion del barco N4, longitud 4"<<endl;
	temp = ingresarPosicion(matriz);
	do
	{
		cout<<"Ingresar su orientacion --- vertical, horizontal"<<endl;
		cin>>orientacion;
	}while(orientacion != "vertical" && orientacion != "horizontal");
	barcoFour(matriz, orientacion, temp);
	
	cout<<"Ingresar posicion del barco N5, longitud 5"<<endl;
	temp = ingresarPosicion(matriz);
	do
	{
		cout<<"Ingresar su orientacion --- vertical, horizontal"<<endl;
		cin>>orientacion;
	}while(orientacion != "vertical" && orientacion != "horizontal");
	barcoFive(matriz, orientacion, temp);
	
	return matriz;
}

pair<int, int> ingresarPosicion(Matriz matriz)
{
	pair<int, int> result;
	char fil;
	do
	{
		cin>>fil;
		cin>>result.second;
		result.second--;
		if(fil == 'A' || fil == 'a') result.first = 0;
		else if(fil == 'B' || fil == 'b') result.first = 1;
		else if(fil == 'C' || fil == 'c') result.first = 2;
		else if(fil == 'D' || fil == 'd') result.first = 3;
		else if(fil == 'E' || fil == 'e') result.first = 4;
		else if(fil == 'F' || fil == 'f') result.first = 5;
		else if(fil == 'G' || fil == 'g') result.first = 6;
		else if(fil == 'H' || fil == 'h') result.first = 7;
		else if(fil == 'I' || fil == 'i') result.first = 8;
		else if(fil == 'J' || fil == 'j') result.first = 9;
		if(matriz[result.second][result.first] != 32) cout<<"Posicion Invalida"<<endl;
	}while(matriz[result.second][result.first] != 32);
	
	return result;
}

void jugadorPlay(Matriz &bot, Matriz &visible)
{
	pair<int, int> temp;
	cout<<"Es tu turno, ingresar posicion a atacar"<<endl;
	temp = ingresarPosicion(visible);
	if(bot[temp.second][temp.first] != 32 && bot[temp.second][temp.first] != 'X' && bot[temp.second][temp.first] != 'O')
	{
		bot[temp.second][temp.first] = 'X';
		visible[temp.second][temp.first] = 'X';
		cout<<"Le diste Capitan!!"<<endl;
	}
	else
	{
		visible[temp.second][temp.first] = 'O';
		cout<<"Suerte a la proxima Capitan"<<endl;
	}
}

bool comprobarVic(Matriz matriz)
{
	bool result = false;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(matriz[i][j] == 254) result = true;
		}
	}
	return result;
}

