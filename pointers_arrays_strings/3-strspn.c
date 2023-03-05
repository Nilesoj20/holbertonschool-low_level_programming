#include "main.h"
/**
 * _strspn - check the code
 * @s: pointer 1
 * @accept: pointer 2
 * Return: cont
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont, i;
	char *puntero = accept;

	cont = 0;
	while (*s != '\0')
	{
		i = 0;
		puntero = accept;
		while (*puntero != '\0')
		{
			if (*puntero == *s)
			{
				i = 1;
				break;
			}
			puntero++;
		}
		if (i == 1)
		{
			cont++;
		}
		else
		{
			break;
		}
		s++;
	}
	return (cont);
}

