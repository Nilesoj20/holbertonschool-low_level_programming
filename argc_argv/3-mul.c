#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - funcion principal
* @argc: argumentos
* @argv: array
* Return: Always 0.
*/
int main(int argc, char *argv[]) 
{
	int i;
	int x = 1;

	if (argc != 3 || argc == 1)
	{
		printf("Error\n");
	}
	else 
	{
		for (i = 1; i < argc; i++)
		{
			x *= atoi(argv[i]);
		}
		printf("%d\n", x);
	}
	return(0);
}
