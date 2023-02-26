#include "main.h"
/**
* print_square - Entry point
* @size: The number to be checked
* Return: Always 0 (Success)
*/
void print_square(int size)
{
	int i = 0;
	int t = 0;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			while (t < size)
			{
				_putchar(35);
				t++;
			}
			t = 0;
			_putchar('\n');
			i++;
		}
	}
}
