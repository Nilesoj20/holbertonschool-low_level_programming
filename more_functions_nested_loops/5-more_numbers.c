#include "main.h"
/**
*  more_numbers - Entry point
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int f, c, inicio;

	for (c = 0; c <= 10; c++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f > 9)
			{
				inicio = f / 10;
				_putchar(inicio + 48);
			}
			_putchar((f % 10) + 48);
		}
		_putchar('\n');
	}
}
