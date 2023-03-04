#include "main.h"
/**
 * _memset - funcion
 * @s: pointer
 * @b: variable
 * @n: size
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		*(s + cont) = b;
	}
	return (s);
}
