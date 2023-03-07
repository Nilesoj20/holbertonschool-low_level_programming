#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: pointer
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	static int cont;

	if (*s == '\0')
	{
		return (cont);
	}
	cont = cont + 1;
	_strlen_recursion(s + 1);
	return (cont);
}
