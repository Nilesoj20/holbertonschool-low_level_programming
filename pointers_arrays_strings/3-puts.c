#include "main.h"
/**
* _puts - check the code
* @str: pointer
* Return: Always void.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		srt++;
	}
	_putchar('\n');
}
