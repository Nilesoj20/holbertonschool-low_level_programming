#include "main.h"
/**
 * cap_string - check the code
 * @str: pointer
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	char *ptemp;
	int alerta;

	ptemp = str;
	alerta = 1;

	while (*ptemp != '\0')
	{

		if (*ptemp == ' ' || *ptemp == '\t' || *ptemp == '\n' ||
				*ptemp == ',' || *ptemp == 59 || *ptemp == 46 ||
				*ptemp == 33 || *ptemp == 63 || *ptemp == 34 ||
				*ptemp == 40 || *ptemp == 41 || *ptemp == 123 ||
				*ptemp == 125)
		{
			alerta = 1;
		}
		else
		{
			if (alerta == 1)
			{
				if (*ptemp >= 97 && *ptemp <= 122)
				{
					*ptemp -= 32;
					alerta = 0;
				}
				else 
				{
					alerta = 0;
				}
			}
		}
		ptemp++;
	}
	return (str);
}
