#include "main.h"
/**
 * clear_bit - establece indice dado en 0
 * @n: numero
 * @index: indice dado
 * Return: exito 1, falla -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
