#include "function_pointers.h"
 #include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer a funcion
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	if (f == NULL)
	{
		return;
	}
	p = f;
	p(name);
}
