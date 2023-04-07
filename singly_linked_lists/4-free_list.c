#include "lists.h"
/**
 * free_list - libera todos nos nodos creados
 * @head: pointer principal
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *tmp1;

	tmp = head;
	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmp1;
	}
}
