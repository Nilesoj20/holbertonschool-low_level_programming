#include <stdlib.h>
#include <stdio.h>
/**
* main - funcion principal
* @argc: argumentos
* @argv: array
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i, x;
	unsigned int suma;

	i = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		x = 0;
		while (*(argv[i] + x))
		{
			if (*(argv[i] + x) < '0' || *(argv[i] + x) > '9')
			{
				printf("Error\n");
				return (1);
			}
			x++;
		}
	}
	for (i = 1; i < argc; i++)
	{
		suma += atoi(argv[i]);
	}
		printf("%d\n", suma);
	return (0);
}
