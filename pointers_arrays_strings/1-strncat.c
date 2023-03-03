#include "main.h"
/**
* _strncat - check the code
* @dest: pointer
* @src: pointer
* @n: variable
* Return: Always void.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int i2 = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0' && i2 < n)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
