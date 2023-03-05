#include "main.h"
/**
* _strstr - check the code
* @haystack: pointer
* @needle: pointer 2
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	char *temp2;

	for ( ; *haystack != '\0' ; haystack++)
	{
		temp = haystack;
		temp2 = needle;
		while (*temp == *temp2 && *temp2 != '\0')
		{
			temp++;
			temp2++;
		}
		if (*temp2 == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
