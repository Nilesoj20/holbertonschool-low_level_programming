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

	if (min > max)
	{
		return (NULL);
	}
	ptem = malloc((max - min + 1) * sizeof(int));
	if (ptem != NULL)
	{
		while (min <= max)
		{
			ptem[min] = min;
			min++;
		}
	}
	return (ptem);
}
