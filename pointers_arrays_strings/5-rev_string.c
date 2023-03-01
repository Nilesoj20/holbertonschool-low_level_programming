#include "main.h"
/**
* rev_string - check the code
* @s: pointer
* Return: Always void.
*/
void rev_string(char *s)
{
	char *temp;
	int i, cont;
	char res;

	i = 0;
	cont = 0;
	temp = s;
	while (*s != '\0')
	{
		s++;
		cont++;
	}
	while (i < cont / 2)
	{
		s--;
		res = *s;
		*s = *(temp + i);
		temp[i] = res;
		i++;
	}
}
