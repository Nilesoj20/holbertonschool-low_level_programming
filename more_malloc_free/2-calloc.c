#include "main.h"
#include <stdlib.h>
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
/**
 * _calloc - check the code
 * @nmemb: variable
 * @size: tamaño
 * Return: variable cont.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptem = malloc(nmemb * size);
	if (ptem != NULL)
	{
		_memset(ptem, 0, nmemb * size);
	}
	return (ptem);
}
