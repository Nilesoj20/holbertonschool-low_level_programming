#include "main.h"
#include <stdlib.h>
/**
 * _strlen - check the code
 * @s: pointer
 * Return: variable cont.
 */
int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; cont++)
	{
		s++;
	}
	return (cont);
}
/**
 * str_concat - check the code
 * @s1: pointer
 * @s2: pointer 2
 * Return: .
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *ptem;
	size_t i, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptem = malloc((len1 + len2 + 1) * sizeof(char));

	if (ptem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptem[i] = s1[i];
	}
	for (x = 0; x < len2; x++)
	{
		ptem[i] = s2[x];
		i++;
	}
	return (ptem);
}
