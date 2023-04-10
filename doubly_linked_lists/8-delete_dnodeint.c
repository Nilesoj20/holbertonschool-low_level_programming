#include "lists.h"
/**
 * delete_dnodeint_at_index - elimina nodos
 * @head: puntero a head
 * @index: nodo a eliminar
 * Return: lista actualizada
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
