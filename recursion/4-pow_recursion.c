#include "main.h"
/**
* _pow_recursion - check the code
* @x: variable
* @y: variable potencia
* Return: Always operacion.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y % 2 == 0)
	{
		int temp = _pow_recursion(x, y / 2);

		return (temp * temp);
	}
	else
	{
		int temp = _pow_recursion(x, y / 2);

		return (x * temp * temp);
	}
}
