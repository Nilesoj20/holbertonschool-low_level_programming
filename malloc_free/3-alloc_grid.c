#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width: filas
 * @height: columnas
 * Return: ptem.
 */
int **alloc_grid(int width, int height)
{
	int **ptem;
	int i, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptem = malloc(height * sizeof(int *));

	if (ptem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptem[i] = malloc(width * sizeof(int));
		if (ptem[i] == NULL)
		{
			for (x = 0; x < i; x++)
			{
				free(ptem[x]);
			}
			free(ptem);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			ptem[i][x] = 0;
		}
	}
	return (ptem);
}
