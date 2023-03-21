#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code
 * @d: pointer
 * @name: nombre
 * @age: edad
 * @owner: usuario
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
