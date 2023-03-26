#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: tamaño
 * @argv: array
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
	int a, b;
	char *signo;

	if (argc != 4)
	{
		printf("mayor a 4\n");
		printf("Error\n");
		exit (98);
	}
	if (argv[2][1] != '\0')
	{
		printf("mas de 2 signos o get mando nulo\n");
		printf("Error\n");
		exit (98);
	}
	a = atoi(argv[1]);
	signo = argv[2];
	b = atoi(argv[3]);
	if ((*signo == '/' || *signo == '%') && b == 0)
	{
		printf("es igual o a 0\n");
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return(0);
}
