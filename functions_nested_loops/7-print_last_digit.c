#include "main.h"
/**
* print_last_digit- Entry point
* @c: input number
* Return: Always last number
*/
int print_last_digit(int c)
{
	int m;

	m = c % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(-m + 48);
		return (m);
	}
}
