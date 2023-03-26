#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: tamaño
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *signo;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0' || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	signo = argv[2];
	b = atoi(argv[3]);
	if ((*signo == '/' || *signo == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
