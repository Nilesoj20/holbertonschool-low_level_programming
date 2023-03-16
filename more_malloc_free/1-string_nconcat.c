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
 * string_nconcat - check the code
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: variable
 * Return: variable cont.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, x;
	size_t len1, len2;
	char *ptem;

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
	ptem = malloc((len1 + n + 1) * sizeof(char));
	if (ptem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptem[i] = s1[i];
	}
	for (x = 0; x < n; x++)
	{
		if (n >= len2)
		{
			while (s2[x] != '\0')
			{
				ptem[i] = s2[x];
				i++;
				x++;
			}
			break;
		}
		ptem[i] = s2[x];
		i++;
	}
	return (ptem);
}
