#include "main.h"
#include <stdlib.h>
/**
 * array_range - check the code
 * @min: minimo
 * @max: maximo
 * Return: ptem.
 */
int *array_range(int min, int max)
{
	int *ptem;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptem = malloc(sizeof(int) * (max - min) + 1);
	if (ptem == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		*(ptem + i) = min;
		min++;
		i++;
	}
	return (ptem);
}
