#include "main.h"
/**
* *leet - check the code
* @s: pointer
* Return: Always 0.
*/
char *leet(char *s)
{
	char *ptemp;
	int i;
	char min[] = {'a', 'e', 'o', 't', 'l'};
	char may[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	ptemp = s;
	while (*ptemp != '\0')
	{
		i = 0;
		while (i <= 4)
		{
			if (*ptemp == min[i] || *ptemp == may[i])
			{
				*ptemp = num[i];
				break;
			}
			i++;
		}
		ptemp++;
	}
	return (s);
}
