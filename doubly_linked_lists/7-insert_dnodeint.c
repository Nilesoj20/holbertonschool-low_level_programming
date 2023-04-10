#include "lists.h"
/**
 * insert_dnodeint_at_index - imprime elementos
 * @h: puntero a head
 * @idx: indice para agregar nuevo nodo
 * @n: dato
 * Return: nuevo nodo enlazado
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *pos;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	pos = *h;
	for (i = 0; i < idx && pos != NULL; i++)
	{
		pos = pos->next;
	}
	if (pos == NULL)
		return (NULL);
	if (pos->next == NULL)
		return (add_dnodeint_end(h, n));
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = pos->prev;
	tmp->next = pos;
	pos->prev = tmp->prev;
	pos = tmp->prev;
	pos->next = tmp;
	return (tmp);
}