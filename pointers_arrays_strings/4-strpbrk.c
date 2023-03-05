#include "main.h"
#include <stddef.h>
/**
* _strpbrk - check the code
* @s: pointer
* @accept: pointer 2
* Return: pointe s
*/
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	for ( ; *s != '\0'; s++)
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
	}
	return (NULL);
}
