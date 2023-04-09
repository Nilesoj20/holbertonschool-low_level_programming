#include "lists.h"
/**
 * add_dnodeint - nuevo nodo
 * @head: puntero a head
 * @n: valor de n
 * Return: puntero head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;
	return (tmp);
}
