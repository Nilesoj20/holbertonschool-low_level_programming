#include "main.h"
/**
 * flip_bits - cuenta numero de bits
 * @n: first number
 * @m: second number
 * Return: numero cambiado
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cont = 0;
	unsigned long int actual;
	unsigned long int numero = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		actual = numero >> i;
		if (actual & 1)
			cont++;
	}
	return (cont);
}
