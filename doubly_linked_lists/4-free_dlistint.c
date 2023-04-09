#include "lists.h"
/**
 * free_dlistint - libera memoria cada nodo
 * @head: puntero a head
 * Return: Always 0, da null a head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual, *tmp;

	actual = head;
	while (actual != NULL)
	{
		tmp = actual->next;
		free(actual);
		actual = tmp;
	}
	head = NULL;
}
