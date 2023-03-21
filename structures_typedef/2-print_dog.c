#include <stdio.h>
#include "dog.h"
/**
 * print_dog - check the code
 * @d: pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL || d->owner == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Name: %s\n", d->owner);
}
