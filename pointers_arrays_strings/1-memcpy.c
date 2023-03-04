#include "main.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: pointer
 * @n: variable
 * Return: pinter dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		*(dest + cont) = *(src + cont);
	}
	return (dest);
}
