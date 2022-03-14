#include <iostream>
#include <stdio.h>
#include<windows.h>
using namespace std;

const char WIDTH = 20, HEIGHT = 20;
unsigned char player = (1);
int posX = 1, posY = 1;
unsigned char action;
void playerAction();


unsigned char lab[HEIGHT][WIDTH] = {
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},//0
{'#',' ',' ',' ',' ',' ',' ','#',' ',' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//1
{'#','#',' ','#','#','#',' ','#',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ','#'},//2
{'#','#',' ',' ',' ',' ',' ','#','#','#',' ',' ','#','#','#','#',' ','#','#','#'},//3
{'#','#','#','#','#','#',' ',' ',' ','#',' ',' ','#',' ','#',' ',' ',' ',' ','#'},//4
{'#',' ','#',' ','#',' ',' ',' ','#','#','#',' ','#',' ','#',' ',' ',' ',' ','#'},//5
{'#',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#'},//6
{'#','#',' ','#','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#'},//7
{'#',' ',' ',' ','#','#','#','#',' ',' ','#','#','#','#',' ',' ','#',' ',' ','#'},//8
{'#',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#'},//9
{'#',' ','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ','$','#'},//10
{'#',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ','#','#','#','#'},//11
{'#',' ','#',' ',' ','#','#','#',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ','#'},//12
{'#',' ','#','#',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#','#',' ','#'},//13
{'#',' ',' ','#',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ','#',' ','#'},//14
{'#',' ','#','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#','#',' ','#'},//15
{'#',' ','#',' ','#','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#'},//16
{'#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#'},//17
{'#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},//18
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}, };//19
//1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 20, 21, 22,


int main()
{
	while (action != 'Q' || 'q')
	{
		printf("Controla al personaje con las teclas W,A,S,D y para cada movimiento pulsa enter");
		printf("\n Para ganar tienes que llegar al signo $");
		cout << endl;
		lab[posX][posY] = player;
		for (int y = 0; y < HEIGHT; y++) {
			cout << endl;
			for (int x = 0; x < WIDTH; x++) {
				cout << lab[x][y];
			}
		
		}
		playerAction();
	}
	return 0;
}
void playerAction()
{
	printf("\n");
	cout << "MUEVE A TU PERSONAJE :";
	cin >> action;
	int prevposX = posX;
	int prevposY = posY;
	unsigned char space = { 32 };

	switch (action)
	{
	case 'a':
		;
		if (lab[posX-1][posY ] != '#') {
			posX--;
			if (lab[posX][posY] == '$') {
				system("cls");
				printf("Ganaste, felicidades");
				printf("\n");
				system("pause");
			}
			cout << posX << ',' << posY << endl;
			lab[prevposX][prevposY] = space;
		}
		system("cls");
		break;
	case 'd':
		if (lab[posX+1][posY] != '#') {
			posX++;
			if (lab[posX][posY] == '$') {
				system("cls");
				printf("Ganaste, felicidades");
				printf("\n");
				system("pause");
			}
			cout << posY << ',' << posY << endl;
			lab[prevposX][prevposY] = space;
		}
		system("cls");
		break;
	case 's':
		
		if (lab[posX][posY+1] != '#') {
			posY++;
			if (lab[posX][posY]=='$') {
				system("cls");
				printf("Ganaste, felicidades");
				printf("\n");
				system("pause");
			}
			lab[prevposX][prevposY] = space;
		}
		system("cls");
		break;
	case 'w':
		if (lab[posX][posY-1] != '#') {
			posY--;
			if (lab[posX][posY] == '$') {
				system("cls");
				printf("Ganaste, felicidades");
				printf("\n");
				system("pause");
			}
			
			lab[prevposX][prevposY] = space;
		}
		system("cls");
		break;
	default:
		printf("Accion incorrecta");
		break;
	}
}