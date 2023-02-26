#include "main.h"
/**
* print_triangle - Entry point
* @size: The number to be checked
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int l, p, m, sizep, x;

	l = 0;
	p = 0;
	m = 0;
	sizep = size - 1;
	x = 1;
	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (l < size)
		{
			while (p < sizep)
			{
				_putchar(' ');
				p++;
			}
			sizep--;
			p = 0;
			while (m < x)
			{
				_putchar(35);
				m++;
			}
			m = 0;
			x++;
			l++;
			_putchar('\n');
		}
	}
}
