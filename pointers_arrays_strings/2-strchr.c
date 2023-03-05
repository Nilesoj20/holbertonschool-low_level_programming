#include "main.h"
#include <stddef.h>
/**
 * *_strchr - check the code
 * @s: pointer
 * @c: variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
