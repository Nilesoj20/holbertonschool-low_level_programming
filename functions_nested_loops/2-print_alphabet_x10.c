#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char m;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
