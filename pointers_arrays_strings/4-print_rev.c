#include "main.h"
/**
* print_rev - check the code
* @s: pointer
* Return: Always void.
*/
void print_rev(char *s)
{
	char *temp;

	temp = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s != temp)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}

