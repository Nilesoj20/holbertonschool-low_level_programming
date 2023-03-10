#include <stdio.h>
/**
* main - funcion principal
* @argc: nombre programa
* @argv: matriz
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
