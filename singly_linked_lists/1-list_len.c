#include "lists.h"
/**
 * list_len - imprime tamaño list_t
 * @h: pointer
 * Return: len.
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t len = 0;

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
		tmp = tmp->next;
	}
	return (len);

}
