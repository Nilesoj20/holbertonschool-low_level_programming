#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#define PRINTT(i) ((i) == 1 ? printf("%s", "") : printf(", "))
/**
 * print_all - check the code
 * @format: separador
 * Return: prints anything.
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int i, x = 1;
	char *d = NULL;

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				PRINTT(x);
				printf("%c", va_arg(all, int));
				x = 0;
				break;
			case 'i':
				PRINTT(x);
				printf("%d", va_arg(all, int));
				x = 0;
				break;
			case 'f':
				PRINTT(x);
				printf("%f", va_arg(all, double));
				x = 0;
				break;
			case 's':
				PRINTT(x);
				d = va_arg(all, char *);
				if (d == NULL)
					d = "(nil)";
				printf("%s", d);
				x = 0;
				break;
			default:
				break;
		}
		i++;
	}
	va_end(all);
	printf("\n");
}
