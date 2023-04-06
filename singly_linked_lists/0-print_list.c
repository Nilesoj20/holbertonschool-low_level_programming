#include "lists.h"
/**
 * print_list - imprime los elementos list_t
 * @h: pointer
 * Return: len.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t len;

	tmp = h;
	if (tmp->str == NULL)
	{
		printf("[%u] (nil)\n", tmp->len);
		tmp = tmp->next;
	}
	for (len = 0; tmp != NULL; len++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (len);
}
