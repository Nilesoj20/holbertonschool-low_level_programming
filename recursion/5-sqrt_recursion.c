#include "main.h"
/**
* _sqrt_recursion - check the code
* @n: varible
* Return: Always raiz cuadrada.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (help(n, 2));
	}
}
/**
* help - check the code
* @n: variable
* @x: variable
* Return: x .
*/
int help(int n, int x)
{
	int o = x * x;

	if (o < n)
	{
		return (help(n, x + 1));
	}
	else if (o == n)
	{
		return (x);
	}
	else
	return (-1);
}
