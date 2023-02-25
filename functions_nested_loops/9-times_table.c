#include "main.h"
/**
* times_table - Entry point
*
* Return: Always last number
*/
void times_table(void)
{
	int col, fil, mul, num1, num2;

	for (col = 0; col <= 9; col++)
	{
		for (fil = 0; fil <= 9; fil++)
		{
			mul = col * fil;
			if (mul > 9)
			{
				num1 = mul / 10;
				num2 = mul % 10;
				_putchar(44);
				_putchar(32);
				_putchar(48 + num1);
				_putchar(48 + num2);
			}
			else
			{
				if (fil != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(mul + 48);
			}
		}
		_putchar('\n');
	}
}
