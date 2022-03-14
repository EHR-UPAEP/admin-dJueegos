#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>

void Gato(), Cuadro(), Maze();

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("cls");
    printf("Hola! Bienvenido al Programa de juegos...\n");
    printf("Que deseas jugar?\n");
    printf("1.-Gato\n2.-Cuadro Mágico\n3.-Laberinto\n4.-Salir\n");
    int juego;
    scanf("%d",&juego);
    if (juego==1)
    {
        Gato();
    }
    else if (juego==2)
    {
        Cuadro();
    }
    else if (juego==3)
    {
        Maze();
    }
    else if (juego==4)
    {
        printf("Hasta luego!");
    }
    else
    {
        printf("Error 404, no se encontró el juego");
    }
    
}

void Gato()
{
    system("gato.exe"); //Dirección de Gato.cpp
    Beep(0,1000);
    main();
}

void Cuadro()
{
    system("cuadro.exe"); //Dirección de Cuadro.cpp
    Beep(0,1000);
    main();
}

void Maze()
{
    system("maze.exe"); //Dirección de Laberinto.cpp
    Beep(0,1000);
    main();
}
