#include "lists.h"
/**
* _strlen - Entry point
* @s: First member
* Return: const (Success)
*/
int _strlen(const char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; cont++)
	{
		s++;
	}
	return (cont);
}
