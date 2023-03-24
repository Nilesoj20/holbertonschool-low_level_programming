#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - check the code
 * @array: array 
 * @size: tamaño del array
 * @cmp: puntero a funcion
 * Return: indice
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x == 1)
		{
			return (i);
		}
	}
	return (-1);
}
