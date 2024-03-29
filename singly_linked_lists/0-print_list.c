#include "lists.h"
/**
 * print_list - imprime los elementos list_t
 * @h: pointer
 * Return: len.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t len = 0;

	tmp = h;
	if (h == NULL)
	{
		return (0);
	}
	if (tmp->str == NULL)
	{
		printf("[%u] (nil)\n", tmp->len);
		len++;
		tmp = tmp->next;
	}
	for (; tmp != NULL; len++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (len);
}
