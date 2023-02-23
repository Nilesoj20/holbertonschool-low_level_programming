#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char m;
	int l;

	m = 97;
	l = 0;
	while (l <= 10)
	{
		while (m <= 122)
		{
			_putchar(m);
			m++;
		}
	}
	_putchar(10);
}
