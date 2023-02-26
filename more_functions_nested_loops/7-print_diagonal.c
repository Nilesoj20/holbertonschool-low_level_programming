#include "main.h"
/**
* print_diagonal - Entry point
* @n: The number to be checked
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i = 0;
	int i2 = 0;
	int c = 0;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (i2 < c)
			{
				_putchar(32);
				i2++;
			}
			c++;
			i2 = 0;
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
