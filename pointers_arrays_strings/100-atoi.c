#include "main.h"
/**
* _atoi - check the code
* @s: pointer
* Return: Always void.
*/
int _atoi(char *s)
{
	unsigned int i, i2, len, n;
	int signo;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	signo = 1;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
	{
		if (s[i] == '-')
		{
			signo = signo * (-1);
		}
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = s[i] - 48;
			for (i2 = i + 1; s[i2] >= 48 && s[i2] <= 57; i2++)
			{
				n = n * 10 + (s[i2] - 48);
			}
			return (signo * n);
		}
	}
	return (0);
}
