#include "search_algos.h"
/**
  * binary_search - searches for a value in a sorted array
  * @array: pointer to the first element of the array to search in.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: index where the value is found, is null or not found -1 .
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lef, ri;

	if (array == NULL)
		return (-1);
	for (lef = 0, ri = size - 1; ri >= lef;)
	{
		printf("Searching in array: ");
		for (i = lef; i < ri; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = lef + (ri - lef) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			ri = i - 1;
		else
			lef = i + 1;
	}

	return (-1);
}
