#include "lists.h"
/**
 * sum_dlistint - suma de todos los nodos
 * @head: puntero a head
 * Return: suma total
 */
int sum_dlistint(dlistint_t *head)
{
	int suma;
	dlistint_t *tmp;

	suma = 0;
	tmp = head;
	while (tmp != NULL)
	{
		suma = suma + tmp->n;
		tmp = tmp->next;
	}
	return (suma);
}
