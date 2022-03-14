#include<stdio.h>
#include<windows.h>
#include<locale.h>

char matrix[3][3] = { '7', '8', '9', '4', '5', '6', '1', '2', '3' };
char Jug = 'X';
char p = '1';
int n;

void Output()
{
	system("cls");
	printf("Juguemos Gato\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("[");
            putchar(matrix[i][j]);
            printf("] ");
		}
		printf("\n");
	}
}
void Input()
{
	setlocale(LC_CTYPE,"Spanish");
	int a;
	
    printf("Jugador ");
    putchar(p);
	printf("\nInserta el número de la casilla: ");
	scanf("%d",&a);

    if (a == 7)
    {
        if (matrix[0][0] == '7')
            matrix[0][0] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
    }
	else if (a == 8)
		if (matrix[0][1] == '8')
            matrix[0][1] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 9)
		if (matrix[0][2] == '9')
            matrix[0][2] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 4)
		if (matrix[1][0] == '4')
            matrix[1][0] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 5)
		if (matrix[1][1] == '5')
            matrix[1][1] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 6)
		if (matrix[1][2] == '6')
            matrix[1][2] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 1)
		if (matrix[2][0] == '1')
            matrix[2][0] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 2)
		if (matrix[2][1] == '2')
            matrix[2][1] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
	else if (a == 3)
		if (matrix[2][2] == '3')
            matrix[2][2] = Jug;
        else
        {
            printf("Ya esta ocupada, intenta de nuevo!\n");
            Input();
        }
}
void Turno()
{
	if (Jug == 'X')
    {
        Jug = 'O';
        p = '2';
    }
	else
    {
        Jug = 'X';
        p = '1';
    }
		
}
char Victoria()
{
	//Jugador 1
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	//Jugador 2
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
    n=0;
	Output();
	while (1)
	{
        n++;
		Input();
		Output();
		if (Victoria() == 'X')
		{
			printf("Gana el jugador 1\n");
			break;
		}
		else if (Victoria() == 'O')
		{
			printf("Gana el jugador 2!\n");
			break;
		}
        else if(Victoria() == '/' && n==9)
        {
            printf("Empate!!!\n");
            break;
        }
		Turno();
	}
	system("pause");
}
