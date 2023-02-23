#include "main.h"
/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char m;

	m = 97;

	while (m <= 122)
	{
		_putchar(m);
		m++;
	}
	_putchar(10);
}

