#include "main.h"
/**
* string_toupper - check the code
* @str: pointer
* Return: Always 0.
*/
char *string_toupper(char *str)
{
	char *ptemp;

	ptemp = str;

	while (*ptemp != '\0')
	{
		if (*ptemp >= 97 && *ptemp <= 122)
		{
			*ptemp = *ptemp - 32;
		}
		ptemp++;
	}
	return (str);
}
