#include "main.h"
/**
* print_numbers - Entry point
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
