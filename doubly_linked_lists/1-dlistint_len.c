#include "lists.h"
/**
 * dlistint_len - cuenta elementos
 * @h: puntero a head
 * Return: numeros de elementos
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
