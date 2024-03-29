#include "main.h"
#include <stdlib.h>
/**
* _strlen - check
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
* _strdup - check the code
* @str: pointer
* Return: pointer ptem.
*/
char *_strdup(char *str)
{
	size_t i;
	size_t len;
	char *ptem;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str) + 1;
	ptem = malloc(len * sizeof(char));

	if (ptem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptem[i] = str[i];
	}
	return (ptem);
}
