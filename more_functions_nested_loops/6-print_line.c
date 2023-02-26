#include "main.h"
/**
* print_line - Entry point
* @n: First member
* Return: Always 0 (Success)
*/
void print_line(int n)
{
	int i = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
