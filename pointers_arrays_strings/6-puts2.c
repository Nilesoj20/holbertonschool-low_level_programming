#include "main.h"
/**
* puts2 - check the code
* @str: pointer
* Return: Always void.
*/
void puts2(char *str)
{
	int cont;

	for (cont = 0; str[cont] != '\0'; cont++)
	{
		_putchar(str[cont]);
		if (str[cont] + 1 != '\0')
		{
			cont++;
		}
	}
	_putchar('\n');
}
