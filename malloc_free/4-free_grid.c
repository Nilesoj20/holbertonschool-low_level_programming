#include "main.h"
#include <stdlib.h>
/**
 * free_grid - check the code
 * @grid: pointer
 * @height: variable
 * Return: grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
