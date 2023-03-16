#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: size
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptem = malloc(b);

	if (ptem == NULL)
	{
		exit(98);
	}
	return (ptem);
}
