//Batalla Naval -- Barcos
#include<bits/stdc++.h>
using namespace std;
typedef vector<char> Fila;
typedef vector<Fila> Matriz;

pair<int, int> ingresarPosicion(Matriz matriz);

void barcoTwo(Matriz &matriz, string orientacion, pair<int, int> temp)
{
	if(orientacion == "vertical")
	{
		if(temp.first == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
		}
		else if(temp.first == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
		}
	}
	
	else if(orientacion == "horizontal")
	{
		if(temp.second == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second + 1][temp.first] = 254;
		}
		else if(temp.second == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second -1][temp.first] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second + 1][temp.first] = 254;
		}
	}

}

void barcoThree(Matriz &matriz, string orientacion, pair<int, int> temp)
{
	if(orientacion == "vertical")
	{
		if(temp.first == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
		}
		else if(temp.first == 1 || temp.first == 8)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first + 1] = 254;
		}
		else if(temp.first == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first - 2] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
		}
	}
	
	else if(orientacion == "horizontal")
	{
		if(temp.second == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
		}
		else if(temp.second == 1 || temp.second == 8)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
		}
		else if(temp.second == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second-2][temp.first] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
		}
	}
	
}

void barcoFour(Matriz &matriz, string orientacion, pair<int, int> temp)
{
	if(orientacion == "vertical")
	{
		if(temp.first == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
			matriz[temp.second][temp.first + 3] = 254;
		}
		else if(temp.first == 1)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
		}
		else if(temp.first == 8)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first - 2] = 254;
		}
		else if(temp.first == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first - 2] = 254;
			matriz[temp.second][temp.first - 3] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
			matriz[temp.second][temp.first + 3] = 254;
		}
	}
	
	else if(orientacion == "horizontal")
	{
		if(temp.second == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
			matriz[temp.second+3][temp.first] = 254;
		}
		else if(temp.second == 1)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
		}
		else if(temp.second == 8)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second-2][temp.first] = 254;
		}
		else if(temp.second == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second-2][temp.first] = 254;
			matriz[temp.second-3][temp.first] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
			matriz[temp.second+3][temp.first] = 254;
		}
	}
	
}

void barcoFive(Matriz &matriz, string orientacion, pair<int, int> temp)
{
	if(orientacion == "vertical")
	{
		if(temp.first == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
			matriz[temp.second][temp.first + 3] = 254;
			matriz[temp.second][temp.first + 4] = 254;
		}
		else if(temp.first == 1)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
			matriz[temp.second][temp.first + 3] = 254;
		}
		else if(temp.first == 8)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first - 2] = 254;
			matriz[temp.second][temp.first + 2] = 254;
		}
		else if(temp.first == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first - 1] = 254;
			matriz[temp.second][temp.first - 2] = 254;
			matriz[temp.second][temp.first - 3] = 254;
			matriz[temp.second][temp.first - 4] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second][temp.first + 1] = 254;
			matriz[temp.second][temp.first + 2] = 254;
			matriz[temp.second][temp.first + 3] = 254;
			matriz[temp.second][temp.first + 4] = 254;
		}
	}
	
	else if(orientacion == "horizontal")
	{
		if(temp.second == 0)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
			matriz[temp.second+3][temp.first] = 254;
			matriz[temp.second+4][temp.first] = 254;
		}
		else if(temp.second == 1)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
			matriz[temp.second-2][temp.first] = 254;
		}
		else if(temp.second == 8)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second-2][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
		}
		else if(temp.second == 9)
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second-1][temp.first] = 254;
			matriz[temp.second-2][temp.first] = 254;
			matriz[temp.second-3][temp.first] = 254;
			matriz[temp.second-4][temp.first] = 254;
		}
		else
		{
			matriz[temp.second][temp.first] = 254;
			matriz[temp.second+1][temp.first] = 254;
			matriz[temp.second+2][temp.first] = 254;
			matriz[temp.second+3][temp.first] = 254;
			matriz[temp.second+4][temp.first] = 254;
		}
	}
	
}
