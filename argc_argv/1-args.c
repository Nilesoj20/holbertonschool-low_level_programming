#include <stdio.h>
/**
* main - funcion principal
* @argc: name program
* @argv: array
* Return: Always 0.
*/
int main(int argc, char *argv[]__attribute((unused)))
{
	if (argc == 0)
	{
		printf("0");
	}
	else
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
