#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _copiar - check the code
 * @dest: pointer
 * @src: pointer 2
 * Return: dest.
 */
char *_copiar(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - check the code
 * @s: pointer
 * Return: variable cont.
 */
int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; cont++)
	{
		s++;
	}
	return (cont);
}
/**
 * new_dog - check the code
 * @name: pointer a char
 * @age: pointer a float
 * @owner: pointer a char
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len1, len2;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	len1 = _strlen(name);
	ptr->name = malloc(sizeof(char) * len1 + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	_copiar(ptr->name, name);

	ptr->age = age;

	len2 = _strlen(owner);
	ptr->owner = malloc(sizeof(char) * len2 + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	_copiar(ptr->owner, owner);
	return (ptr);
}
