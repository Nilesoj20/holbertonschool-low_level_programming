#include "lists.h"
/**
 * print_dlistint - imprime elementos
 * @h: puntero a head
 * Return: numeros de elementos
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		elem++;
		h = h->next;
	}
	return (elem);
}
