#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - check the code
 * @separator: separador
 * @n: tamaño
 * Return: numeros.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *nil;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		nil = va_arg(str, char*);
		if (separator == NULL)
		{
			printf("%s", nil);
			continue;
		}
		if (nil == NULL)
		{
			nil = "(nil)";
		}
		printf("%s", nil);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
