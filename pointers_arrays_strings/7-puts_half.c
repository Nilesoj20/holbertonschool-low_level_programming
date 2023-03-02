#include "main.h"
/**
* puts_half - check the code
* @str: pointer
* Return: Always void.
*/
void puts_half(char *str)
{
	int medio, i;
	int len = 0;

	for (i = 0; *str != '\0'; i++)
	{
		len++;
		str++;
	}
	medio = (len - 1) / 2;
	for (i = 0; i < medio; i++)
	{
		str--;
	}
	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
