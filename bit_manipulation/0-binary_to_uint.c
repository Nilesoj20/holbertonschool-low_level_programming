#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: string de binarios
 * Return: numero decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i) == '0' || *(b + i) == '1')
		{
			decimal = decimal * 2 + (*(b + i) - '0');
		}
		else
			return (0);
	}
	return (decimal);
}
