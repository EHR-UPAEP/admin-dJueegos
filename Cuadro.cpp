#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
	int grado,i,j,suma,aux;
	system("color D");
	printf("juego de cuadrado magico\n");
	printf("Indicaremos como se desarrollara este juego\n");
	printf("Para que el cuadrado sea correcto, la suma de la fila/columna deben de ser iguales\n");
	printf("Porfavor ingrese el tamaño del cuadro recuerde que\ndebe de ser un numeroimpar mayor o igual a 3: ");
	scanf("%d",&grado);
	if(grado<3)
	{
		printf("error\n");
		printf("vuelva a introducir el grado recuerda que debe ser mayor o igual a 3\n");
		return(0);
	}
	int matrix[grado][grado],comp[grado],compb[grado];
	printf("Rellene el cuadro magico porfavor\n");
	suma=(grado*(grado*grado+1))/2;
	system("cls");
	printf("recuerde que la suma de la fila/columna es: %d\n", suma);
	for(i=0;i<grado;i++)
	{
		system("color B");
		for(j=0;j<grado;j++)
		{
			matrix[i][j]=0;
		}
	}
	for(i=0;i<grado;i++)
	{
		comp[i]=0;
	}
	for(i=0;i<grado;i++)
	{
		compb[i]=0;
	}
	for(i=0;i<grado;i++)
	{
		for(j=0;j<grado;j++)
		{
			aux=0;
			printf("ingrese el valor [%d][%d]:",i,j);
			scanf("%d",&aux);
			matrix[i][j]=aux;
		}
	}
	for(i=0;i<grado;i++)
	{
		for(j=0;j<grado;j++)
		{
			comp[i]=comp[i]+matrix[i][j];
		}
	}
	for(i=0;i<grado;i++)
	{
		for(j=0;j<grado;j++)
		{
			compb[i]=compb[i]+matrix[j][i];
		}
	}
	for(i=0;i<grado;i++)
	{
		if(comp[i]!=suma)
		{
			printf("Error\n");
			printf("El cuadro tiene un error\n");
			return(0);
		}
	}
	for(i=0;i<grado;i++)
	{
		if(compb[i]!=suma)
		{
			printf("Error\n");
			printf("El cuadrado tiene un error\n");
			return(0);
		}
	}
	system("cls");
	system("Color A");
	printf("Felicidades :)\n");
	printf("Tu cuadrado es correcto\n");
	for(i=0;i<grado;i++)
	{
		for(j=0;j<grado;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	getch();
}
