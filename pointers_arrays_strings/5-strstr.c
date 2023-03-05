#include "main.h"
/**
* _strstr - check the code
* @haystack: pointer
* @needle: pointer 2
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int alerta = 0;
	char *temp = haystack;
	char *temp2 = needle;

	for ( ; *haystack != '\0' ; haystack++)
	{
		temp2 = needle;
		while (*temp2 != '\0')
		{
			if (*temp == *temp2)
			{
				alerta = 1;
				temp++;
				temp2++;
			}
			else
			{
				alerta = 0;
				break;
			}
		}
		if (alerta == 1)
		{
			return (haystack);
		}
		temp++;
	}
	return ('\0');
}
