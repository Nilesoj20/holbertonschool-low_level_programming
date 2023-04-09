#include "lists.h"
/**
 * add_dnodeint_end - nuevo elemento final
 * @head: puntero a head
 * @n: valor n
 * Return: direccion del nuevo head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *ultimo;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	ultimo = *head;
	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}
	ultimo->next = tmp;
	tmp->prev = ultimo;
	return (tmp);
}
