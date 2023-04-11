#include "main.h"
/**
 * set_bit - establece el indice dado en 1
 * @n: numero
 * @index: indice dado
 * Return: exito 1 y fallo -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
