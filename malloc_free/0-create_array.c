#include "main.h"
#include <stdlib.h>

/**
* create_array - check the code
* @size: tamaño
* @c: array
* Return: c.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
