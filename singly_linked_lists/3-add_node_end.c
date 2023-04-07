#include "lists.h"
/**
 * add_node_end - crea un nuevo nodo al final
 * @head: pointer principal
 * @str: string dando para el nuevo nodo
 * Return: puntero tmp nuevo nodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *tmp1;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = strlen(str);
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp1 = *head;
		while (tmp1->next != NULL)
		{
			tmp1 = tmp1->next;
		}
		tmp1->next = tmp;
	}
	return (tmp);
}
