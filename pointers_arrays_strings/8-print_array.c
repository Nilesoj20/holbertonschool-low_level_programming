#include "main.h"
#include <stdio.h>
/**
* print_array - check the code
* @a: pointer
* @n: size array
* Return: Always void.
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
