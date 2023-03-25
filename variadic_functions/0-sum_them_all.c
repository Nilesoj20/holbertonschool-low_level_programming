#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all -  check the code
  * @n: parametro
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int suma = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		suma = suma + va_arg(sum, int);
	}
	va_end(sum);
	return (suma);
}
