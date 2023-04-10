#include "lists.h"
/**
 * size - cantidad de nodos
 * @head: puntero a head
 * Return: total de nodos
 */
size_t size(const dlistint_t *head)
{
	const dlistint_t *tmp;
	size_t len;

	tmp = head;
	for (len = 0; tmp != NULL;)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
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
	if (idx > size(*h))
		return (NULL);
	for (i = 0; i < idx && pos->next != NULL; i++)
	{
		pos = pos->next;
	}
	if (pos->next == NULL && idx == size(*h))
		return (add_dnodeint_end(h, n));
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = pos->prev;
	tmp->next = pos;
	pos->prev = tmp;
	pos = tmp->prev;
	pos->next = tmp;
	return (tmp);
}
