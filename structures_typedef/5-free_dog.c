#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - check the code
 * @d: pointer
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (0);
	}
	free(d->name);
	free(d->owner);
}
