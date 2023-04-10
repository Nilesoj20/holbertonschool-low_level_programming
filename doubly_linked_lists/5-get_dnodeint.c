#include "lists.h"
/**
 * get_dnodeint_at_index - devuelve nodo solicitado
 * @head: puntero a head
 * @index: posicion a imprimir
 * Return: nodo encontrado
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	i = 0;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
