#include "main.h"
/**
* _strcat - check the code
* @dest: pointer
* @src: pointer
* Return: Always void.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int i2 = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

