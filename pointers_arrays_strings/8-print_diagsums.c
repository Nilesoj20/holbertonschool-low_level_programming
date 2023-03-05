#include <stdio.h>
#include "main.h"
/**
* print_diagsums - check the code
* @a: pointer array
* @size: tamaño
* Return: Always 0.
*/
void print_diagsums(int *a, int size)
{
	int cont, diagonal1, diagonal2;

	diagonal1 = 0;
	diagonal2 = 0;

	for (cont = size - 1; cont < (size * size) - 1; cont += size - 1)
	{
		diagonal1 += a[cont];
	}
	for ( ; cont >= 0; cont -= size + 1)
	{
		diagonal2 += a[cont];
	}
	printf("%d, %d\n", diagonal2, diagonal1);
}
